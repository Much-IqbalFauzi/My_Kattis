import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class solution {
    public static void main(String[] args) throws IOException{
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        
        String a;
        short []yo = new short[5];
        short c=0;
        byte d=0,i;
        
        for ( i = 0; i < 5; i++) {
            a = bf.readLine();
            for (int j = 0; j < 4; j++) {
                yo[i]+=Integer.parseInt(a.split(" ")[j]);
            }
        }
        for (i = 0; i < 5; i++) {
            while(c < yo[i]){
                c=yo[i];
                d = (byte)i;
                break;
            }
        }
        System.out.println((d+1)+" "+c);
    }
}