
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class solution {
    public static void main(String[] args) throws IOException {
        BufferedReader buff = new BufferedReader(new InputStreamReader(System.in));
        
        char a = 'O';
        char b = ' ';
        char c = ' ';
        char temp = ' ';
        
        String x = buff.readLine();
        for (int i = 0; i < x.length(); i++) {
            if(x.charAt(i)=='A') {
                temp = b;
                b=a;
                a=temp;
            }else if(x.charAt(i)=='B'){
                temp = c;
                c=b;
                b=temp;
            }else{
                temp = c;
                c=a;
                a=temp;
            }
        }
        if (a=='O') {
            System.out.println("1");
        }else if(b=='O'){
            System.out.println("2");
        }else{
            System.out.println("3");
        }
    }
}
