import java.util.Scanner;

public class Q2006 {
	
	public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);
		int count = 0;
		int expected = Integer.parseInt(sc.nextLine());
		String[] numbers = sc.nextLine().split(" ");
		
		for (int i = 0; i < numbers.length; i++){
			if (expected == Integer.parseInt(numbers[i])){
				count++;
			}
		}

		System.out.println(count);

	}

}
