#include<stdlib.h>
#include<string.h>

#include "ListaMC.h"




void inserirM(marca*& L, int codigo, float nota)
{
    marca* novo;
    novo = (marca*) calloc(1,sizeof(marca));
    novo ->codigo = codigo;
    novo ->nota = nota;

    if(L == NULL)
        L = novo;
        else{
            marca* p = L;
            while(p->prox != NULL)
                p = p->prox;
            p->prox = novo;
        }
}

float buscaMarca(marca* M, int codigo )
{
    marca *p;
    for(p = M; p!= NULL; p = p->prox)
        if(p->codigo == codigo)
            return p->nota;

    return 0.0;
}


void inserirC(carro*& C, char *modelo, int ano , int codigo)
{
    carro *novo;
    novo = (carro*) calloc(1,sizeof(carro));
    strcpy(novo->modelo , modelo);
    novo->ano = ano;
    novo->codigomarca = codigo;

    novo->prox = C;
    C = novo;
}


void listagem(marca* M , carro* C)
{
    float nota;
    for(carro *p = C;p != NULL; p = p->prox){
        nota = buscaMarca(M,p->codigomarca);
        printf("%s %d %.2f", p->modelo, p->ano, nota);
    }
}


void removerM(marca*& , carro* , int )
{

}


void desalocaMarca(marca *&)
{

}


void desalocaCarro(carro *&)
{

}
