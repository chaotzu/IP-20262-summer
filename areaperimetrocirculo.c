/*
Escribe double calcula_area(double radio)
double calcula_perimetro(double radio)
que calcule ambos valores con π = 3.14159265358979 (defínelo con #define). 
En main, lee el radio e imprime los resultados con dos decimales.
Ejemplo
Entrada: 2.5
Salida: Area = 19.63, perimetro = 15.71

*/

#include<stdio.h>
#define pi 3.1415
double calcula_area(float r);
double calcula_perimetro(double r);
int main(){
    double r;
    double x;
    printf("dame el radio\n");
    scanf ("%lf", &r);
    x=calcula_area(r);
    printf("%f", x);
    printf("\nEl perimetro es %f", calcula_perimetro(r));
    return 0;
}
double calcula_area(float r){
    return((r*r)*pi);
}
double calcula_perimetro(double r)
{
    return(2*pi*r);
}
