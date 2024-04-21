import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class getstarted {
    public static void main(String[] args) throws IOException {
        BufferedReader buff = new BufferedReader(new InputStreamReader(System.in));
        
        String a=buff.readLine();
        
        String[] x = a.split(" ");
        int c = Integer.parseInt(x[0]),d = Integer.parseInt(x[1]);
        
        if (c > d) {
            int z = c ;
            c = d;
            d = z;
        }
        
        for (int i = c+1; i <= d+1; i++) {
            System.out.println(i);
        }
        
    }
}