import java.io.IOException;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        double salario, novo_salario, reajuste;
        salario = sc.nextDouble();
        
        // criando as condicionais
        
        if(salario >= 0 && salario <= 400){
            reajuste = 0.15 * salario;
            novo_salario = salario + reajuste;
            System.out.printf("Novo salario: R$ %.2f\n", novo_salario);
            System.out.printf("Reajuste ganho: R$ %.2f\n", reajuste);
            System.out.printf("Em percentual: 15  %%\n"  );
        }
        else if(salario > 400 && salario <= 800){
            reajuste = 0.12 * salario;
            novo_salario = salario + reajuste;
            System.out.printf("Novo salario: R$ %.2f\n", novo_salario);
            System.out.printf("Reajuste ganho: R$ %.2f\n", reajuste);
            System.out.print("Em percentual: 12  %%\n"  );
        }
        else if(salario > 800 && salario <= 1200){
            reajuste = 0.1 * salario;
            novo_salario = salario + reajuste;
            System.out.printf("Novo salario: R$ %.2f\n", novo_salario);
            System.out.printf("Reajuste ganho: R$ %.2f\n", reajuste);
            System.out.printf("Em percentual: 10  %%\n"  );
        }
        else if(salario > 1200 && salario <= 2000){
            reajuste = 0.07 * salario;
            novo_salario = salario + reajuste;
            System.out.printf("Novo salario: R$ %.2f\n", novo_salario);
            System.out.printf("Reajuste ganho: R$ %.2f\n", reajuste);
            System.out.printf("Em percentual: 7  %%\n"  );
        }
        else{
            reajuste = 0.04 * salario;
            novo_salario = salario + reajuste;
            System.out.printf("Novo salario: R$ %.2f\n", novo_salario);
            System.out.printf("Reajuste ganho: R$ %.2f\n", reajuste);
            System.out.printf("Em percentual: 4  %%\n"  );
            
        }
    }
}