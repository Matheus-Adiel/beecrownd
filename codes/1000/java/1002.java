import java.io.IOException;
import java.util.*;

public class Main {
 
    public static void main(String[] args) throws IOException {

        Scanner scanner_double = new Scanner(System.in);
        double n, r, area;
        
        n = 3.14159;
        r = scanner_double.nextDouble();
        area = n * r * r;
        
        System.out.printf("A=%.4f\n", area);
 
    }
 
}
