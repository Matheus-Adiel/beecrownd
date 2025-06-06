import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    String[] tokens = sc.nextLine().split(" ");
	    int[] tokensInt = new int[tokens.length];
	    for (int i = 0; i < tokens.length; i++)
	        tokensInt[i] = Integer.parseInt(tokens[i]);
	    int initMin = toMinutes(tokensInt[0]) + tokensInt[1];
	    int finMin = toMinutes(tokensInt[2]) + tokensInt[3];
	    int duration = finMin - initMin;
	    if (duration <= 0)
	        duration = toMinutes(24) + duration;
	    System.out.printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", toHours(duration), duration % 60);
	}
	
	public static int toMinutes(int hour){
	    return hour * 60;
	}
	
	public static int toHours(int minutes){
	    return (int) Math.floor(minutes / 60);
	}
} 
