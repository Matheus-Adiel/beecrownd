import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int currentNumber = sc.nextInt();
        int count = 1;
        for (int i = 0; i < n - 1; i++){
            int newNumber = sc.nextInt();
            if (newNumber != currentNumber){
                count++;
                currentNumber = newNumber;
            } 
        }
        System.out.println(count);
 
    }
 
}
