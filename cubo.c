
#include <stdio.h>

double cubo(double x);
int main(void) 
{
    double c, x;
    printf("Ingresa un numero que quieras elevar al cubo\n");
    scanf("%lf", &x);
    c = cubo(x);
    printf("El cubo de %.2f es %.2f", x, c);
    return 0;
}

double cubo(double x){
    x=x*x*x;
    return x;
}
