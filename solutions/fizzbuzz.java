import java.util.Scanner;
public class Get_started {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        short a = sc.nextShort();short b = sc.nextShort();short c = sc.nextShort();
        for (int i = 1; i <= c; i++) {if (i%a==0 && i%b!=0) {System.out.println("Fizz");}else if (i%a!=0 && i%b==0){System.out.println("Buzz");}else if(i%a==0 && i%b==0){System.out.println("FizzBuzz");}else{System.out.println(i);}}}
}
