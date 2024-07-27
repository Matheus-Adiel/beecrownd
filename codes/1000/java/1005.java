import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner ipt = new Scanner(System.in);
        double a = ipt.nextDouble();
        double b = ipt.nextDouble();
        System.out.printf("MEDIA = %.5f\n", (a * 3.5 + b * 7.5)/11);
        
    }
 
}
