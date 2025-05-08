package IanAula;
import java.util.Scanner;
public class ex4 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int A,B,C,D,soma1,soma2;
		Boolean eh_par;
		String linha = sc.nextLine();
		String vetor [] = linha.split(" ");
		A = Integer.parseInt(vetor[0]);
		B = Integer.parseInt(vetor[1]);
		C = Integer.parseInt(vetor[2]);
		D = Integer.parseInt(vetor[3]);
		soma1 = C + D;
		soma2 = A + B;
		eh_par = true;
		if (A % 2 != 0) {
			eh_par = false;	
		}
		if (B > C && D > A && soma1 > soma2 && C > 0 && D > 0 && eh_par == true) {
		 System.out.println("Valores aceitos");
	}
		else {
			System.out.println("Valores nao aceitos");
		}
		sc.close();
}
}