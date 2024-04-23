import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class getstarted {
    public static void main(String[] args) throws IOException {
        BufferedReader buff = new BufferedReader(new InputStreamReader(System.in));
        
        String a=buff.readLine();
        String[] x = a.split(" ");
        int c = Integer.parseInt(x[0]),d = Integer.parseInt(x[1]),e = Integer.parseInt(x[2]);
        int v = (int)Math.sqrt(d*d+e*e + 0.01);

        int w;
        int i;
        for (i = 0; i < c; i++) {
            String b = buff.readLine();
            w= Integer.parseInt(b);
            if (w<=v) {
                System.out.println("DA");
            }else{
                System.out.println("NE");
            }
            
        }
    }
}