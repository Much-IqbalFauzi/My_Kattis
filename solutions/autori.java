import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class getstarted {
    public static void main(String[] args) throws IOException {
        BufferedReader buff = new BufferedReader(new InputStreamReader(System.in));
        
        String a=buff.readLine();
        String[] x = a.split("-");
        for (int i = 0; i < x.length; i++) {
            System.out.print(x[i].charAt(0));
        }

    }
}
