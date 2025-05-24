import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String[] line = sc.nextLine().split(" ");
		double[] numbers = new double[3];
		for (int i = 0; i < 3; i++)
		    numbers[i] = Double.parseDouble(line[i]);
		order(numbers);
		if (numbers[0] >= numbers[1] + numbers[2])
		    System.out.println("NAO FORMA TRIANGULO");
		else {
		    if (Math.pow(numbers[0], 2) == Math.pow(numbers[1], 2) + Math.pow(numbers[2], 2))
		        System.out.println("TRIANGULO RETANGULO");
		    else if (Math.pow(numbers[0], 2) > Math.pow(numbers[1], 2) + Math.pow(numbers[2], 2))
		        System.out.println("TRIANGULO OBTUSANGULO");
		    else if (Math.pow(numbers[0], 2) < Math.pow(numbers[1], 2) + Math.pow(numbers[2], 2))
		        System.out.println("TRIANGULO ACUTANGULO");
		    if (numbers[0] == numbers[1] && numbers[0] == numbers[2] && numbers[1] == numbers[2])
		        System.out.println("TRIANGULO EQUILATERO");
		    else if (numbers[0] == numbers[1] || numbers[0] == numbers[2] || numbers[1] == numbers[2])
		        System.out.println("TRIANGULO ISOSCELES");
		}
	}
	
	public static void order (double[] list){
	    for (int i = 0; i < 2; i++){
	        double max = list[i];
	        for (int j = i + 1; j < 3; j++) {
	            if (list[j] > max) {
	                list[i] = list[j];
	                list[j] = max;
	                max = list[i];
	            }
	        }
	    }
	}
	
}
