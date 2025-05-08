#include <stdio.h>
#include<math.h>

int main()
{
    int num;
    float raiz;

    scanf("%d", &num);

    if (num > 0)
    {
        raiz = sqrt(num);
        printf("%f\n", raiz);
    }
    else
    {printf("número inválido\n");
    }
    return 0;
    }