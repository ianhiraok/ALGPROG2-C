#include<stdio.h>

int main() {
    double p1,p2,p3,mp,t1,t2,mt,mf;

    scanf("%lf", &p1);
    scanf("%lf", &p2);
    scanf("%lf", &p3);
    scanf("%lf", &t1);
    scanf("%lf", &t2);

    mp = (p1 + p2 + p3) / 3;
    mt = (t1 + t2) / 2;
    mf = mp * 0.75 + mt * 0.25;

    printf("======= NOTAS ========\n");
    printf("Primeira Prova    %4.1f\n" , p1);
    printf("Segunda Prova     %4.1f\n" , p2);
    printf("Terceira Prova    %4.1f\n" , p3);
    printf("Média Provas      %4.1f\n" , mp);
    printf(" \n");
    printf("Primeiro Trabalho %4.1f\n", t1);
    printf("Segundo Trabalho  %4.1f\n" , t2);
    printf("Média Trabalhos   %4.1f\n" , mt);
    printf("----------------------\n");
    printf("Média Final       %4.1f\n" , mf);






    return 0;
}