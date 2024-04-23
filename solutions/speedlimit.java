import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class solution{
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        
        short loop = 0;
        int temp,kali;
        String in;
        
        while(true){
            loop = Short.parseShort(bf.readLine());
            kali = 0;
            temp = 0;
            
            if(loop == -1){
                break;
            }
            for (int i = 0; i < loop ; i++) {
                in = bf.readLine();
                kali = Integer.parseInt(in.split(" ")[1])-kali;
                temp += (Integer.parseInt(in.split(" ")[0])*kali);
                kali = Integer.parseInt(in.split(" ")[1]);
            }
            System.out.println(temp+ " miles");
        }
    }
}
