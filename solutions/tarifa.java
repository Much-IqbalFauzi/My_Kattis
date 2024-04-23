
import java.util.Scanner;

public class katis {
    
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        
        int a, b;
        a = s.nextInt();
        b = s.nextInt();
        int z = a*b; 
        for (int i = 0; i < b; i++) {
            int c = s.nextInt();
            z-=c;
            
        }
        System.out.println(a+z);
    }
}