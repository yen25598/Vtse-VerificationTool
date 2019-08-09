package com.vtse.cfg.build;

import com.vtse.cfg.node.*;
import com.vtse.cfg.utils.ExpressionHelper;
import org.eclipse.cdt.core.dom.ast.IASTExpression;

import com.vtse.cfg.utils.MyCloner;

/**
 * @author va
 * De unfold: (new UnfodCFG(ControlFlowGraph)).getGraph()
 * 
 */

public class UnfoldCFG {
	private int nLoops = 5;
	
	private CFGNode start;
	private CFGNode exit;
	
	public UnfoldCFG() {}
	
	public UnfoldCFG(ControlFlowGraph cfg) {
		generate(cfg);
	}
	
	public int getLoop(){
		return nLoops;
	}
	
	public void setLoop(int loop){
		this.nLoops = loop;
	}
	public CFGNode getExit() {
		return exit;
	}

	public void setExit(CFGNode exit) {
		this.exit = exit;
	}
	
	public CFGNode getStart() {
		return start;
	}

	public void setStart(CFGNode start) {
		this.start = start;
	}

	public void generate(ControlFlowGraph otherCfg) {
		try {
			start = iterateNode(otherCfg.getStart());
			} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		setExit(findEnd(start));
	}	
	
	/**
	 * @param start
	 * @return
	 */
	private CFGNode findExit(CFGNode start) {
		CFGNode iter = start;
		while (!(iter instanceof IterationNode)) {
			iter = iter.getNext();
		}
		return iter;
	}
	
	protected CFGNode findEnd(CFGNode start) {
		CFGNode iter = start;
		while (iter.getNext() != null) {
			iter = iter.getNext();
		}
		return iter;
	}
	
	/**
	 * Unfold vong lap while va do while
	 * @param start
	 * @param exit
	 * @return
	 * @throws Exception
	 */
	
	private ControlFlowGraph unfoldWhile(CFGNode start, CFGNode exit) throws Exception {
		DecisionNode currentCondition = (DecisionNode) start.getNext();
		IASTExpression conditionExpression = currentCondition.getCondition();
		EndConditionNode endNode = (EndConditionNode) ((BeginWhileNode) start).getEndNode();
		CFGNode lastNode = endNode;
		//tao ra ban sao Then moi
		ControlFlowGraph thenClause = new ControlFlowGraph(currentCondition.getThenNode(), 
					findExit(currentCondition.getThenNode())); 
		ControlFlowGraph copyThen;
		
		thenClause.setStart(iterateNode(thenClause.getStart()));
		//tao ra nhieu vong lap moi tu duoi len tren
		for (int i = 0; i < nLoops; i++) {
			DecisionNode condition = new DecisionNode();
			condition.setCondition(conditionExpression);
			condition.setElseNode(new EmptyNode());
			condition.getElseNode().setNext(endNode);
			
			copyThen = new ControlFlowGraph();
			copyThen = MyCloner.clone(thenClause);
			
			condition.setThenNode(copyThen.getStart());
			copyThen.getExit().setNext(lastNode);
			
			//TODO change
			condition.setEndOfThen(copyThen.getExit());
			condition.setEndOfElse(condition.getElseNode());
			condition.setEndNode(endNode);
			
			lastNode = condition;
		}
		CFGNode beginNode = new BeginWhileNode();
		beginNode.setNext(lastNode);

//		PlainNode notCondition = ExpressionHelper.getNotCondition(conditionExpression);
//		endNode.setNext(notCondition);

		return new ControlFlowGraph(beginNode.getNext(), endNode);
	}
	
	/**
	 * Unfold cho vong for, tuong tu unfoldWhile
	 * @param start
	 * @param exit
	 * @return
	 * @throws Exception
	 */
	private ControlFlowGraph unfoldFor(CFGNode start, CFGNode exit) throws Exception {
		PlainNode initNode = (PlainNode) start.getNext();
	
		DecisionNode currentCondition = (DecisionNode) initNode.getNext();
		IASTExpression conditionExpression = currentCondition.getCondition();
		EndConditionNode endNode = (EndConditionNode) ((BeginForNode) start).getEndNode();
		CFGNode lastNode = endNode;
		ControlFlowGraph thenClause = new ControlFlowGraph(currentCondition.getThenNode(), 
					findExit(currentCondition.getThenNode())); 
		ControlFlowGraph copyThen;

		thenClause.setStart(iterateNode(thenClause.getStart()));
		//thenClause.printGraph();
		
		for (int i = 0; i < nLoops; i++) {
			DecisionNode condition = new DecisionNode();
			condition.setCondition(conditionExpression);
			condition.setElseNode(new EmptyNode());
			condition.getElseNode().setNext(endNode);

			copyThen = MyCloner.clone(thenClause);
			
			condition.setThenNode(copyThen.getStart());
			copyThen.getExit().setNext(lastNode);
				//TODO change
			condition.setEndOfThen(copyThen.getExit());
			condition.setEndOfElse(condition.getElseNode());
			condition.setEndNode(endNode);
			
			lastNode = condition;
		}

		CFGNode beginNode = new BeginForNode();
		initNode.setNext(lastNode);
		beginNode.setNext(initNode);
		//new ControlFlowGraph(beginNode.getNext(), notCondition).printGraph();
		return new ControlFlowGraph(beginNode.getNext(), endNode);
	} 
	
	/**
	 * Ham duyet graph, vua duyet vua unfold
	 * @param node
	 * @return
	 * @throws Exception
	 */
	private CFGNode iterateNode(CFGNode node) throws Exception {
		//if (node != null) node.printNode();
		if (node == null) {
			return null;
		} else if (node instanceof BeginWhileNode) {
			/* only add not condition node when loop may terminate*/
			IASTExpression condition = ((BeginWhileNode) node).getDecisionNode().getCondition();
			//boolean isTerminate = ExpressionHelper.checkTermination(((BeginWhileNode) node).getWhileStatement());
			boolean isTerminate = false;
			ControlFlowGraph whileGraph = unfoldWhile(node, ((BeginWhileNode) node).getEndNode());
			if (isTerminate) { //add not condition
				PlainNode notCondition = ExpressionHelper.getNotCondition(condition);
				node.setNext(whileGraph.getStart());
				CFGNode contNode = iterateNode(((BeginWhileNode) node).getEndNode().getNext());
				whileGraph.getExit().setNext(notCondition);
				notCondition.setNext(contNode);
			} else {
				node.setNext(whileGraph.getStart());
				whileGraph.getExit().setNext(iterateNode(((BeginWhileNode) node).getEndNode().getNext()));
			}
		} else if (node instanceof PlainNode) {
			//remove invariant node when unfold
			if (node instanceof InvariantNode) {
				node = iterateNode(node.getNext());
			} else {
				node.setNext(iterateNode(node.getNext()));
			}
		} else if (node instanceof BeginIfNode) {
			DecisionNode condition = (DecisionNode) node.getNext();
			node.setNext(condition);
			condition.setThenNode(iterateNode(condition.getThenNode()));
			condition.setElseNode(iterateNode(condition.getElseNode()));
			((BeginIfNode) node).getEndNode().setNext(iterateNode(((BeginIfNode) node).getEndNode().getNext()));
		
		} else if (node instanceof BeginForNode) {
			IASTExpression condition = ((BeginForNode) node).getDecisionNode().getCondition();
			PlainNode notCondition = ExpressionHelper.getNotCondition(condition);

			ControlFlowGraph forGraph = unfoldFor(node, ((BeginForNode) node).getEndNode());
			node.setNext(forGraph.getStart());

			CFGNode contNode = iterateNode(((BeginForNode) node).getEndNode().getNext());
			forGraph.getExit().setNext(notCondition);
			notCondition.setNext(contNode);
		
		} else if (node instanceof EmptyNode || node instanceof LabelNode
					|| node instanceof UndefinedNode || node instanceof BeginFunctionNode) {
			node.setNext(iterateNode(node.getNext()));				
		} else if (node instanceof EndConditionNode) {
		}
		else if (node instanceof GotoNode) {
			ControlFlowGraph gotoGraph = unfoldGoto((GotoNode)node);
			CFGNode endNode = node.getNext();
			node.setNext(gotoGraph.getStart());
			gotoGraph.getExit().setNext(iterateNode(endNode));
		}

		return node;
}
	private CFGNode findEndFunctionNode(LabelNode label) {
		CFGNode iter = label;
		while (iter != null) {
			if (iter instanceof EndFunctionNode) {
				if (((EndFunctionNode) iter).getFunction().equals(label.getFunction())) {
					return iter;
				}
			}
			iter = iter.getNext();
		}
		return iter;
	}
	/* Chua xoa Goto va Label Node */
	protected ControlFlowGraph unfoldGoto(GotoNode node) {
		// TODO Auto-generated method stub
		EmptyNode emp = new EmptyNode();
		CFGNode endNode = findEndFunctionNode((LabelNode) ((GotoNode) node).getLabelNode());
		ControlFlowGraph tmpGraph = new ControlFlowGraph(node.getLabelNode().getNext(), endNode);
		
		ControlFlowGraph testGraph = MyCloner.clone(tmpGraph);
		testGraph.getExit().setNext(new EmptyNode());
		//testGraph.printGraph();
		return testGraph;
	}

	public void printGraph() {
		ControlFlowGraph.printGraph(start);
	}
	
	public ControlFlowGraph getGraph() {
		return new ControlFlowGraph(start, exit);
	}

}

