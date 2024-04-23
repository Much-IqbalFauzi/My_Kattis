import java.util.Scanner;
public class katis {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        
        int a = s.nextInt();
        
        int[] x = new int[a];
        
        for(int i=0; i<a ; i++){
            x[i] = s.nextInt();
        }
        for(int i=0; i < a ; i++){
            if (x[i] % 2 == 0) {
                System.out.println(x[i]+" is even");
            }else{
                System.out.println(x[i]+" is odd");
            }
        }
    }
}