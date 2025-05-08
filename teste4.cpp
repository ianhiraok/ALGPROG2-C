#include <stdio.h>

void mediaAR(float media,float notaAP,char mensagem[100]){
    if (media < notaAP){
        snprintf(mensagem, 100, "Reprovado");
    }
    else{
        snprintf(mensagem,100,"Aprovado");
    }

}
int main(){
    float num1,num2;
    scanf("%f",&num1);
    scanf("%f",&num2);
    char mens[100];
    mediaAR(num1,num2,mens);
    printf("%.1f %s\n",num2,mens);


    return 0;
}