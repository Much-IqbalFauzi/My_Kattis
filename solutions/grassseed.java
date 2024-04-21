import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class grassseed {
    public static void main(String[] args) throws IOException {
        BufferedReader b = new BufferedReader( new InputStreamReader(System.in));
        float X = Float.parseFloat(b.readLine());
        int W = Integer.parseInt(b.readLine());
        float res=0;
        for(int i=0; i<W; i++){
            String Z = b.readLine();
            res+=X*((Float.parseFloat(Z.split(" ")[0])*Float.parseFloat(Z.split(" ")[1])));
        }
        System.out.println(String.format("%.7f",res));
    }
}