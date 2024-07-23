import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {

        Scanner ipt = new Scanner(System.in);
        int number1 = ipt.nextInt();
        int number2 = ipt.nextInt();
        System.out.println("PROD = " + number1 * number2);
        
    }
 
}
