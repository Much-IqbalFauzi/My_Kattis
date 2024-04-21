import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class getstarted {
    public static void main(String[] args) throws IOException {
        BufferedReader buff = new BufferedReader(new InputStreamReader(System.in));
        
        String in = buff.readLine();
        
        if (in.contains("ss")) {
            System.out.println("hiss");
        }else{
            System.out.println("no hiss");
        }
    }
}
