#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    int tam,vlr;
    scanf("%d", &tam);
    int vetor[tam];
    bool prova = true;
    for(int i = 0;i<tam;i++)
    {
        scanf("%d", &vetor[i]);
    }
    vlr = vetor[0];
    int i = 1;
    while (i < tam){
        if (vlr <= vetor[i]){
            prova = false;
            break;
        } 
        i+=1;
        

    }
    if (prova){
        printf("true\n");
    }
    else{
        printf("false\n");
    }
    
    
        
            
    
    


    }