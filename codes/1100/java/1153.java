import java.io.IOException;
import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        System.out.println(factorial(sc.nextInt()));
    }
    
    public static int factorial (int n) {
        if (n <= 1)
            return n;
        return n * factorial(n - 1);
    }

}
