#include<stdio.h>

#define NUMQ 5

int acertos(char *gab, char *resp){
    int cont = 0;
    char *p, *q;

    p = gab;
    q = resp;
    while(*p != '/0'){
        if (*p == *q){
            cont++;
        }
        p++;
        q++;
    }
    
    return cont;
}    

int main()
{
	char gabarito[NUMQ+1];	
	char respostas[NUMQ+1];
	
	int n;	// numero de alunos
	int i,contador;

	// leitura do gabarito
	printf("Informe o gabarito: ");
	scanf(" %s", gabarito);

	// leitura das respostas de cada aluno com a impressao do total de acertos
	printf("Informe qtde de alunos: ");
	scanf("%d", &n);

    printf("Informe as respostas do auluno!\n");
    scanf(" %s",respostas);

    for(i = 1; i <= n; i ++){


        printf("Ainda não falhou");

 
        contador = acertos(gabarito,respostas);


        printf("Acertou: %d",contador);
    }


	return 0;
}
