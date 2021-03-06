package com.vtse.test;

import java.io.*;
import java.util.Properties;

import com.vtse.cfg.build.ASTFactory;
import com.vtse.cfg.build.VtseCFG;

import org.eclipse.cdt.core.dom.ast.IASTNode;

/**
 * @author va
 *
 */
public class Test {
	private static String getBenchmark(String props) throws IOException {
		String path = System.getProperty("user.dir") + "/src/main/java/com/vtse/test/benchmark.properties";
		FileInputStream is = new FileInputStream(new File(path));
		Properties benchmarkProps = new Properties();
		benchmarkProps.load(is);
		return benchmarkProps.getProperty(props);
	}

	private static void printTree(IASTNode node, int index) {
		IASTNode[] children = node.getChildren();

		for (int i = 0; i < index; i++) {
			System.out.print(" ");
		}

		System.out.println("-" + node.getClass().getSimpleName() + " -> " + node.getRawSignature());
		for (IASTNode iastNode : children)
			printTree(iastNode, index + 2);
	}

	public static void  main(String[] args) throws IOException {
		ASTFactory ast = new ASTFactory("./src/main/resources/benchmark/kratos/transmitter_1.c");
		VtseCFG cfg = new VtseCFG(ast.getFunction("transmit5"), ast);
		ast.print();
		//cfg.invariant();
		//cfg.ugoto();
		//cfg.unfold(1);
		//cfg.index();
		//java.cfg.printMeta();
		//cfg.printGraph();
	}
}
