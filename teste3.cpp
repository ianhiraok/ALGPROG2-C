#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    int metrica;
    int digitos[100];
    scanf("%d",&metrica);
    bool prova = true;
    for (int i = 0;i<metrica;i+=1){
        scanf("%d",&digitos[i]);
    }
    int m = 0;
    while (m<metrica){
        if(m+1 <= metrica){
            if (digitos[m] > digitos[m+1]){
                prova = false;
                break;
            }
            m+=1;
        }
        else{
            break;
        }
        
    }
    if (prova){
        printf("verdadeiro");
    }
    else{
        printf("falso");
    }
}