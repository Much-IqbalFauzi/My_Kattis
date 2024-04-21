import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class solution {
    public static void main(String[] args) throws IOException{
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        
        int count = Integer.parseInt(bf.readLine());
        String x;
        for (int i = 0; i < count; i++) {
            x = bf.readLine();
            int a = Integer.parseInt(x.split(" ")[0]), b = Integer.parseInt(x.split(" ")[1]), c = Integer.parseInt(x.split(" ")[2]);
            pilih(a, b, c);
        }
    }
    
    public static int pilih(int a, int b, int c){
        while((b-a)>c){
            System.out.println("advertise");
            break;
        }
        while((b-a)==c){
            System.out.println("does not matter");
            break;
        }
        while((b-a)<c){
            System.out.println("do not advertise");
            break;
        }
        return 0;
    }
    
}