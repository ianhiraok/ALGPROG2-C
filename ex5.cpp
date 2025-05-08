#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int vlr,num,vetor;
    scanf("%d",&vetor);
    size_t i = 0;
    int str[vetor];
    scanf("%d",&str);
    vlr = str[0];
    bool prova = true;
    while (i <= vetor){
        num = str[i];
        if (vlr <= num){
            prova = false;
            break;
            
        }
        else{
            i+=1;
            
        }
    }
    if (prova == true){
        printf("true");
    }
    else if(prova == false){
        printf("false");
    }
    


    }





   



    

