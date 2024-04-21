import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
public class solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        
        int loop = Integer.parseInt(bf.readLine());
        while(loop!=0){
            int num = Integer.parseInt(bf.readLine());
            int temp = 1;
            int x = 1;
            while(temp!=num){
                temp++;
                x*=temp;
            }
            System.out.println(x%10);
            loop--;
        }
    }
