import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class rijeci {
    public static void main(String[] args) throws IOException {
        BufferedReader b = new BufferedReader(new InputStreamReader(System.in));
        int x = Integer.parseInt(b.readLine());
        int v = 1;
        int w = 0;
        for (int i = 0; i<x;i++){
            int va = w;
            int vb = v+w;
            v = va;
            w = vb;
        }
        System.out.print(v+" "+w);
    }
}
