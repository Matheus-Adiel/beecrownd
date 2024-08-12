import java.io.IOException;
import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner scan = new Scanner(System.in);
        double a = scan.nextDouble();
        double b = scan.nextDouble();
        double c = scan.nextDouble();
        double mediaPonderada = (a * 2 + b * 3 + c * 5)/10;
        System.out.printf("MEDIA = %.1f\n", mediaPonderada);
 
    }
 
}
