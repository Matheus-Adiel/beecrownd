import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner sc = new Scanner(System.in);
        double salary = sc.nextFloat();
        double percentage;
        
        if (salary <= 400)
            percentage = 0.15;
        else if (salary <= 800)
            percentage = 0.12;
        else if (salary <= 1200)
            percentage = 0.1;
        else if (salary <= 2000)
            percentage = 0.07;
        else
            percentage = 0.04;
            
        System.out.printf("Novo salario: %.2f\n", salary + salary * percentage);
        System.out.printf("Reajuste ganho: %.2f\n", salary * percentage);
        System.out.printf("Em percentual: %.0f %%\n", percentage * 100);
            
    }
 
}
