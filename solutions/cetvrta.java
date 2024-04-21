import java.util.Scanner;

public class solution {
    
    static int []first = new int[3];
    static int []second = new int[3];
        
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        int i;
        
        for ( i = 0; i < 3; i++) {
            first[i] = sc.nextInt();
            second[i] = sc.nextInt();
        }
        System.out.println(count(first[0], first[1], first[2])+" "+count(second[0], second[1], second[2]));
    }
    
    public static int count(int a, int b, int c){
        if (a == b) {
            return c;
        }
        if( b == c){
            return a;
        }
        return b;
    }
}