
/* 

gcc arquivo.cpp -Wall

*/

// exercicio 5 - lista 1
#include<stdio.h>
#define MAX 30
#define TAM 10

struct tData
{
	int dia, mes, ano;
};

struct tPessoa
{
	char nome[MAX+1];
	float altura;
	tData dtnasc;
};

// funcao para listar as opcoes do menu e retornar
// a opcao que usuario escolher
int menu()
{
	int op;

	printf("\n\n[1] Inserir pessoa");
/* 

gcc arquivo.cpp -Wall

*/

// exercicio 5 - lista 1
#include<stdio.h>
#define MAX 30
#define TAM 10

struct tData
{
	int dia, mes, ano;
};

struct tPessoa
{
	char nome[MAX+1];
	float altura;
	tData dtnasc;
};

// funcao para listar as opcoes do menu e retornar
// a opcao que usuario escolher
int menu()
{
	int op;

	printf("\n\n[1] Inserir pessoa");
	printf("\n[2] Listar pessoas");
	printf("\n[3] Listar pessoas por data");
	printf("\n[4] Sair");
	printf("\n Digite sua opcao: ");
	scanf("%d", &op);

	return op;
}

// funcao para cadastrar UMA pessoa
void cadastrar()
{
	printf("Nome: ");

	printf("Altura: ");

	printf("Dt nascimento (dd/mm/aa): ");

}

// funcao para listar nomes e alturas de todas as pessoas
void listagem(int n, tPessoa vetor[])
{


	printf("\n");
}

/* funcao p/ listar pessoas que nasceram antes de uma data D 
fornecida pelo usuario*/
void listagem2(int n, tPessoa vetor[], tData D)
{
	

	printf("\n");
}


int main()
{
	int op;	// opcao do menu
	tPessoa vetor[TAM];

	int n = 0;			// num pessoas cadastradas

	do{
		op = menu();

		if(op == 1)
		{
			// cadastrar uma pessoa
			cadastrar(n, vetor);
		}
		else if(op == 2)
		{
			// listar todos os nomes e alturas
			listagem(n, vetor);
		}
		else if(op == 3)
		{
			// listas todos os nomes das pessoas que nasceram antes de uma
			// data D informada pelo usuario
			printf("Digite data a consultar (dd/mm/aa): ");


		}

	}while(op != 4);

	return 0;
}

	printf("\n[2] Listar pessoas");
	printf("\n[3] Listar pessoas por data");
	printf("\n[4] Sair");
	printf("\n Digite sua opcao: ");
	scanf("%d", &op);

	return op;
}

// funcao para cadastrar UMA pessoa
void cadastrar()
{
	printf("Nome: ");

	printf("Altura: ");

	printf("Dt nascimento (dd/mm/aa): ");

}

// funcao para listar nomes e alturas de todas as pessoas
void listagem(int n, tPessoa vetor[])
{


	printf("\n");
}

/* funcao p/ listar pessoas que nasceram antes de uma data D 
fornecida pelo usuario*/
void listagem2(int n, tPessoa vetor[], tData D)
{
   for(int i = 0;i<n;i++){ 
    if (
        (vetor[i].dtnasc.ano < D.ano)||
        (vetor[i].dtnasc.ano == D.ano && vetor[i].dtnasc.mes < D.mes)||
        (vetor[i].dtnasc.ano == D.ano && vetor[i].dtnasc.mes == D.mes
        && vetor[i].dtnasc.dia < D.dia)
    ){
        printf("%s\n",vetor[i].nome);
    }
   }
	printf("\n");
}


int main()
{
	int op;	// opcao do menu
	tPessoa vetor[TAM];

	int n = 0;			// num pessoas cadastradas

	do{
		op = menu();

		if(op == 1)
		{
			// cadastrar uma pessoa
			cadastrar(n, vetor);
		}
		else if(op == 2)
		{
			// listar todos os nomes e alturas
			listagem(n, vetor);
		}
		else if(op == 3)
		{
			// listas todos os nomes das pessoas que nasceram antes de uma
			// data D informada pelo usuario
			printf("Digite data a consultar (dd/mm/aa): ");


		}

	}while(op != 4);

	return 0;
}
