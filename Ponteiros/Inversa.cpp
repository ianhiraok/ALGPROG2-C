#include <stdio.h>
#define MAX 100
int main(){
    int n;
    int vetor[MAX];

    if(n < 1 || n > 100){
        printf("n fora de parametro.\n");
    }
    else{
        for(int i = 0;i<n;i++){
            scanf("%d",&vetor[i]);
        }
        int *p = vetor;
    
        for(int i = 0;i<n;i++){

        }
    }
}