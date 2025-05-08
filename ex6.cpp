#include <stdio.h>

bool testetri(double a, double b, double c){
    if ((c*c) == (b*b) + (a*a)){
        return true;
        
    }
    
    return false;
}

int main(){
    double a,b,c;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    bool teste = testetri(a,b,c);
    if (teste == true){
        printf("%.1lf %.1lf %.1lf formam um triângulo retângulo\n",a,b,c);
    }
    else{
        printf("%.1lf %.1lf %.1lf não formam um triângulo retângulo\n",a,b,c);
    }
    return 0;
}
