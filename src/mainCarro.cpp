#include<stdio.h>
#include<stdlib.h>
#include "ListaMC.h"

/*funcao main*/
int main()
{
    int op;
    carro *lCarro = NULL;
    marca *lMarcas = NULL;


    char modelo[40];
    int ano;
    int codigo;
    float nota;



    do
    {
        op = 0;
        printf("\n1 - Cadastrar uma marca");
        printf("\n2 - Cadastrar um carro");
        printf("\n3 - Listagem de carros");
        printf("\n4 - Exclusao de uma marca");
        printf("\n5 - Sair");
        printf("\nOpcao: ");
        scanf(" %d", &op);

        if(op == 1)
        {
            printf("Digite o codigo e nota da marca: ");
            scanf("%d %f", &codigo,&nota);
            inserirM(lMarcas,codigo,nota);
        }
        else if(op == 2)
        {
            printf("Digite o codigo e nota da marca: \n");
            scanf("%d", &codigo);
            if(buscaMarca(lMarcas,codigo)== 0.0)
                printf("Marca não encontrada\n");
            else{
                printf("Digite modelo do carro: \n");
                scanf(" %[^\n]", modelo);
                printf("Digite o ano do carro: \n");
                scanf("%d", &ano);

                inserirC(lCarro, modelo, ano, codigo);
                printf("Carro cadastrado\n");
            }
        }
        else if(op == 3){


        }
        else if(op == 4){


        }

    }while(op != 5);

    // desalocar listas

    return 0;
}
    