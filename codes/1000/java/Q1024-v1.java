import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner sc = new Scanner(System.in);
	    int qtdTokens = Integer.parseInt(sc.nextLine());
	    for (int i = 0; i < qtdTokens; i++){
	        System.out.println((thirdCript(secondCript(firstCript(sc.nextLine())))));
	    }
 
    }
    
    public static String firstCript(String menssage){
	    String result = new String();
	    for (int i = 0; i < menssage.length(); i++){
	        int ascii = (int) menssage.charAt(i);
	        if (ascii >=  65 && ascii <= 90 || ascii >= 97 && ascii <= 122)
	            result += (char)(ascii + 3);
	        else
	            result += menssage.charAt(i);
	    }
	    return result;
	}
	
	public static String secondCript(String menssage){
	    String result = new String();
	    for (int i = menssage.length() - 1; i >= 0; i--)
	        result += menssage.charAt(i);
	    return result;
	}
	
	public static String thirdCript(String menssage){
	    String result = new String();
	    for (int i = 0; i < menssage.length()/2; i++){
	        result += menssage.charAt(i);  
	    }
	    for (int i = menssage.length()/2; i < menssage.length(); i++)
	        result += (char)(((int) menssage.charAt(i)) - 1);
	    return result;
	}
 
}
