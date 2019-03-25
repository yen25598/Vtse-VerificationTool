package invariant;

import cfg.build.ASTFactory;
import main.app.solver.RedlogRunner;
import org.eclipse.cdt.core.dom.ast.IASTExpression;
import org.eclipse.cdt.core.dom.ast.IASTExpressionStatement;
import org.eclipse.cdt.core.dom.ast.IASTName;
import org.eclipse.cdt.core.dom.ast.IASTTranslationUnit;

import java.io.File;
import java.util.List;

public class LoopTemplate {
    private List<IASTName> variables;
    private List<IASTExpressionStatement> initiation;
    private IASTExpression loopCondition;
    private static final String C_TAG = ".c";
    private static final String CPP_TAG = ".cpp";
    private static final String PP_FILE_TAG = ".xml";

    public static int UNKNOWN_TEMPLATE = -1;
    public static int MONO_WHILE_TEMPLATE = 0;
    public static int IFELSE_WHILE_TEMPLATE = 1;

    public LoopTemplate(){}

    public LoopTemplate(List<IASTName> variables, List<IASTExpressionStatement> initiation, IASTExpression loopCondition) {
        this.variables = variables;
        this.initiation = initiation;
        this.loopCondition = loopCondition;
    }

    public static void generateInvariant(File file, int template) {
        String cfilepath = file.getPath();

        if (file == null) {
            System.out.println("file is null");
        }
        String CPPFilename = getCFilename(file);

        if (CPPFilename == null) {
            System.out.println("not cpp file");
            return;
        }
        ASTFactory ast = new ASTFactory(cfilepath);
        System.out.println("- Invariant generated for: \n" + cfilepath);
        if (template == MONO_WHILE_TEMPLATE) {
            LoopMonoWhileTemplate loopMonoWhileTemplate = LoopMonoWhileTemplate.getLoopElement(ast.getTranslationUnit());
        } else {
            LoopIfWhileTemplate loopTemplate = LoopIfWhileTemplate.getLoopElement(ast.getTranslationUnit());
        }
        //concat invariants
        List<String> invariants = InvagenRunner.run(cfilepath, template);
        String concat = "";
        if (invariants.size() > 1) {
            concat = "(" + invariants.get(0) + ")";
            for (int i = 1; i < invariants.size(); i++) {
                concat += " and " + "(" + invariants.get(i) + ")";
            }
        }
//        System.out.println(concat);
//        System.out.println(RedlogRunner.rlsimpl(concat));
        if (concat != "") {
            //TextFileModification.modifyCFile(cfilepath, RedlogRunner.rlsimpl(concat));
            System.err.println(concat);
            TextFileModification.modifyCFile(cfilepath, concat);
        } else {
            System.err.println("Cannot generate Invariants");
        }
    }
    public static void generateInvariant(File file) {
        String cfilepath = file.getPath();
        if (file == null) {
            System.out.println("file is null");
        }
        String CPPFilename = getCFilename(file);

        if (CPPFilename == null) {
            System.out.println("not cpp file");
            return;
        }
        ASTFactory ast = new ASTFactory(cfilepath);
        System.out.println("-------------------------------------------");
        System.out.println("- Invariant generated for: \n" + cfilepath);
        int template = TemplateDetector.detect(ast.getTranslationUnit());

        //concat invariants
        List<String> invariants = InvagenRunner.run(cfilepath, template);
        String concat = "";
        if (invariants.size() > 1) {
            concat = "(" + invariants.get(0) + ")";
            for (int i = 1; i < invariants.size(); i++) {
                concat += " and " + "(" + invariants.get(i) + ")";
            }
        }
        //add not (condition)
        //concat += "and (not " + ExpressionHelper.toString(loopTemplate.getLoopCondition()) + ")";
//        System.out.println(concat);
//        System.out.println(RedlogRunner.rlsimpl(concat));
        if (concat != "") {
            //TextFileModification.modifyCFile(cfilepath, RedlogRunner.rlsimpl(concat));
            System.err.println(concat);
            TextFileModification.modifyCFile(cfilepath, concat);
        } else {
            System.err.println("Cannot generate Invariants");
        }
    }
    public static void generateInvariantDirectory(File directory, int template) {
        if (directory == null) {
        } else if (directory.isDirectory()) {
            File[] files = directory.listFiles();

            for (File f : files) {
                generateInvariantDirectory(f, template);
            }
        } else {
            generateInvariant(directory, template);
        }
    }
    public static void generateInvariantDirectory(File directory) {
        if (directory == null) {
        } else if (directory.isDirectory()) {
            File[] files = directory.listFiles();

            for (File f : files) {
                generateInvariantDirectory(f);
            }
        } else {
            generateInvariant(directory);
        }
    }
    private static String getCFilename(File file) {
        String filename = file.getAbsolutePath();
        int index = filename.lastIndexOf(CPP_TAG);
        if (index >= 0) {
            filename = filename.substring(0, index);
        } else {
            index = filename.lastIndexOf(C_TAG);
            if (index >= 0) {
                filename = filename.substring(0, index);
            } else {
                filename = null;
            }
        }

        return filename;
    }
    public void print() {

    }
    public List<IASTName> getVariables() {
        return variables;
    }

    public void setVariables(List<IASTName> variables) {
        this.variables = variables;
    }

    public List<IASTExpressionStatement> getInitiation() {
        return initiation;
    }

    public void setInitiation(List<IASTExpressionStatement> initiation) {
        this.initiation = initiation;
    }

    public IASTExpression getLoopCondition() {
        return loopCondition;
    }

    public void setLoopCondition(IASTExpression loopCondition) {
        this.loopCondition = loopCondition;
    }

    public static LoopTemplate getLoopElement(IASTTranslationUnit iastTranslationUnit) {
        return null;
    }

}