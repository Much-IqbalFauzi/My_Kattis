import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class getstarted {
    public static void main(String[] args) throws IOException {
        BufferedReader buff = new BufferedReader(new InputStreamReader(System.in));

        String a=buff.readLine();
        int c = Integer.parseInt(a.split(" ")[0]);
        int d = Integer.parseInt(a.split(" ")[1]);
        
        d-=45;
        
        if (d<0) {
            d+=60;
            c--;
            if (c<0) {
                c+=24;
            }
        }
        System.out.println(c+" "+d);
    }
}