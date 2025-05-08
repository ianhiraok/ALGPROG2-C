#include<stdio.h>
#include<math.h>
int main()
{
    float h,pesoideal;
    char gen;
    printf("informe seu gênero: ");
    scanf("%c", &gen);
    printf("informe sua altura : ");
    scanf("%f", &h);
    
    if(gen == 'h' || gen == 'H')
    {
        pesoideal = (72.7 * h) - 58;
        printf("Seu peso ideal é: %.2f\n",pesoideal);
        

    }
    else if (gen == 'm' || gen == 'M')
    {
        pesoideal = (62.1 * h) - 44,7;
        printf("Seu peso ideal é: %.2f\n",pesoideal);
    }
    else printf("Gênero Inválido!\n");
    

    return 0;

}