package invariant;

import cfg.build.ASTFactory;
import main.algo.farkas.entity.TransitionSystem;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

public class InvagenRunner {
    private static String SMTINPUT_DIR = "smt/";

    public static List<String> run(String cfilepath, int template) {
        ASTFactory ast = new ASTFactory(cfilepath);
        LoopTemplate loopTemplate;
        if (template == LoopTemplate.MONO_WHILE_TEMPLATE) {
            loopTemplate = LoopMonoWhileTemplate.getLoopElement(ast.getTranslationUnit());
        } else {
            loopTemplate = LoopIfWhileTemplate.getLoopElement(ast.getTranslationUnit());
        }
        String filename = new File(cfilepath).getName();
        String path = (SMTINPUT_DIR  + filename).replace(".c", "_fak_inv.xml");
        List<String> result = new ArrayList<String>();
        if (loopTemplate == null) {
            System.err.println("Cannot generate invariant for: " + filename);
            return result;
        }
        FileOutputStream fo;
        try {
            fo = new FileOutputStream(new File(path));
            InvagenXMLInput.printInputToXMLFarkas(loopTemplate, fo);
            TransitionSystem ts = new TransitionSystem(path);
            result  = ts.getInvariants();
        } catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
        return result;
    }

}
