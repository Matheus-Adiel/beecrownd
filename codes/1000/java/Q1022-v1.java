import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner sc = new Scanner(System.in);
	    int QTD_TESTS = Integer.parseInt(sc.nextLine());
	    String[] tokens;
	    Fraction frac1;
	    Fraction frac2;
	    Fraction result;
	    
	    for (int i = 0; i < QTD_TESTS; i++){
	        tokens = sc.nextLine().split(" ");
	        frac1 = new Fraction(Integer.parseInt(tokens[0]), Integer.parseInt(tokens[2]));
	        frac2 = new Fraction(Integer.parseInt(tokens[4]), Integer.parseInt(tokens[6]));
	        if (tokens[3].equals("+"))
	            result = frac1.sum(frac2);
	        else if (tokens[3].equals("-"))
	            result = frac1.sub(frac2);
	        else if (tokens[3].equals("*"))
	            result = frac1.mult(frac2);
	        else
	            result = frac1.div(frac2);
	        System.out.printf("%s = %s\n", result.toString(), result.simplify().toString());
	    }
 
    }
 
}

class Fraction {
    
    int num;
    int den;
    
    public Fraction(int num, int den){
        this.num = num;
        this.den = den;
    }
    
    public Fraction sum(Fraction frac2){
        return new Fraction((this.num * frac2.den) + (frac2.num * this.den), this.den * frac2.den);
    }
    
    public Fraction sub(Fraction frac2){
        return new Fraction(this.num * frac2.den - frac2.num * this.den, this.den * frac2.den);
    }
    
    public Fraction mult(Fraction frac2){
        return new Fraction(this.num * frac2.num, this.den * frac2.den);
    }
    
    public Fraction div(Fraction frac2){
        return new Fraction(this.num * frac2.den, frac2.num * this.den);
    }
    
    public Fraction simplify(){
        int a = this.num;
        int b = this.den;
        while (b != 0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return new Fraction(this.num / a, this.den / a);
    }
    
    public String toString(){
        return String.format("%s%d/%d", Math.abs(this.num) != this.num || Math.abs(this.den) != this.den ? "-" : "", Math.abs(this.num), Math.abs(this.den));
    }
    
}
