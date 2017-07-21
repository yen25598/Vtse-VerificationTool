package test;

import org.eclipse.cdt.core.dom.ast.IASTFunctionDefinition;

import cfg.build.ASTGenerator;
import cfg.build.VtseCFG;

/**
 * @author va
 *
 */
public class Test {
	public static void  main(String[] args) {
		ASTGenerator ast = new ASTGenerator();
		IASTFunctionDefinition func = ast.getFunction(0);
		//ast.print();
	
		//*Parameters:
		//DeclSpecifier : kieu tra ve cua ham
		//Declarator : ten cua ham, vd: test(), sum(int i)
		//declarator.getName: ten, vd: test, sum
		//declarator.getChildren() -> CPPASTParameterDeclaration int i,..
		//parameterDeclaration.getChildren -> Declarator : tham bien cua ham, vd: a, b, n, ...
		
		VtseCFG cfg = new VtseCFG(func);
		cfg.index();
		cfg.printGraph();
	}
}
