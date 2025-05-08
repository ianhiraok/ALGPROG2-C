package IanAula;
import java.util.Scanner;

public class ex1 {

	public static void main(String[] args) {
		double A, B, OP;
		char simb;
		Scanner sc = new Scanner(System.in);
		A = sc.nextDouble();
		B = sc.nextDouble();
		simb = sc.next().charAt(0);
		
		switch(simb) {
			case '+':
				OP = A + B;
				System.out.printf("resultado = %.1f" , OP);
				break;
		
		
		case '-':
			OP = A - B;
			System.out.printf("resultado = %.1f" , OP);
			break;
			
		
		case '*':
			OP = A * B;
			System.out.printf("resultado = %.1f" , OP);
			break;
		
		case '/':
			if (B != 0) {
				OP = A / B;
				System.out.printf("resultado = %.1f" , OP);
			}
			else {
				System.out.println("Não é possível dividir por zero");
				System.out.println("resultado = 0.0");
				
			}
			break;
		
	
		}
		sc.close();	
	}

}
