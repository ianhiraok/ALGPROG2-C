import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int a, b, maior;
        a = sc.nextInt();
        b = sc.nextInt();
        
        if(a>b){
            maior = a;
        }
        else
            maior = b;
        int resultado = maior;
        while(true){
            if(resultado % a == 0 && resultado % b ==0){
                System.out.printf("Sao Multiplos\n");
                break;
            }
            else
                System.out.printf("Nao sao Multiplos\n");
                break;
            
            
        }
            
        
    }
 
}	
			
	
	
	
	
	
