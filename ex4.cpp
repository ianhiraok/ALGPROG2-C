#include<stdio.h>
#include<ctype.h>
int main()
{
    float h,pesoideal;
    char gen;
    printf("informe seu gênero: ");
    scanf("%c", &gen);
    printf("informe sua altura : ");
    scanf("%f", &h);

    while(toupper(gen) != 'F' && toupper(gen != 'M'))
    {
        printf("\n SEXO INVÁLIDO, digite F ou M: ");
        scanf("%c", &gen);
    }
    
    if(gen == 'm' || gen == 'M')
    {
        pesoideal = (72.7 * h) - 58;
        printf("Seu peso ideal é: %.2f\n",pesoideal);
        

    }
    else if (gen == 'f' || gen == 'F')
    {
        pesoideal = (62.1 * h) - 44,7;
        printf("Seu peso ideal é: %.2f\n",pesoideal);
    }
    
    

    return 0;

}