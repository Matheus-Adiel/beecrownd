import java.io.IOException;
import java.util.Scanner;

public class Main {
    
    public static void main(String[] args) throws IOException {
        
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        int hours = sc.nextInt();
        double wage = sc.nextDouble();
        
        double salary = wage * hours;
        
        System.out.printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, salary);
 
    }
    
}