
import java.util.Scanner;

public class katis {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int digit ,x;
        int n = s.nextInt();
        int add = 0;
        int last;
        for (int i = 1; i <= n; i++) {
            digit = s.nextInt();
            x = digit %10;
            last = digit / 10;
            int y = (int)Math.pow(last,x);
            add += y;
        }
        System.out.println(add);
        
    }
    
}