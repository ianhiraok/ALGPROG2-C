package IanAula;
import java.util.Scanner;

public class ex2 {
	public static void main(String[]args) {
		Scanner sc = new Scanner(System.in);
		double cont,media,soma;
		int i;
		soma = 0;
		cont = 0;
		i = 0;
		while(cont != -1) {
			cont  = sc.nextDouble();
			if (cont == -1 && i !=0) {
				media = soma / i;
				if (media>=6) {
					System.out.printf("media  = %.1f", media);
					System.out.println("\nAluno Aprovado!");
				}
				else {
					System.out.printf("media  = %.1f", media);
					System.out.println("\nAluno Reprovado!");	
				}
			}
			else if (cont == -1 && i == 0) {
				System.out.println("media  = 0.0");
				System.out.println("Aluno Reprovado!");	
			}
			else {
				soma = soma + cont;
				i+=1;
			}
		}
		sc.close();
	}

}
