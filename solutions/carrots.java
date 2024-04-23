import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class solution {
    public static void main(String[] args) throws IOException {
        BufferedReader buff = new BufferedReader(new InputStreamReader(System.in));
        
        String x = buff.readLine();
        
        for (int i = 0; i < Integer.parseInt(x.split(" ")[0]); i++) {
            buff.readLine();
        }
        System.out.println(Integer.parseInt(x.split(" ")[1]));
    }
}
