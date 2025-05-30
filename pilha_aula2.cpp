#include<ctype.h>   // toupper, tolower
#include<stdio.h>
#include "lista.h"


int main()
{
    char str[40];
    celula *letras = NULL;
    celula *digitos = NULL;
    celula *p;

    printf("Digite uma sequencia de caracteres alternando letra e algarismo: ");
    scanf("%s", str);

    int i = 0;
    while(str[i] != '\0'){
        if (toupper(str[i]>= 'A' && toupper (str[i]) <= 'Z'))
            inserir_fim(str[i], letras);
        else
            inserir_inicio(str[i],digitos);
        i++;
    }
    p = letras;
    while (p->prox != NULL ){
        p = p->prox;

        p->prox = digitos;
        imprimir(letras);
        desalocar(letras);
        printf("\n");

    }

    return 0;
}