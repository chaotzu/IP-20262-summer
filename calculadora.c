/*
Calculadora sencilla
Funciones:
Imprimir menu
Sumar 2 numeros
Restar 2 numeros
Multiplicar 2 numeros
Dividir 2 numeros
*/

#include<stdio.h>
float suma(float a,float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);
int main(){
    return 0;
}

float suma(float a,float b) 
{
    float suma;
    suma=a+b;
    return suma; 
}
float resta(float a,float b){
    return a-b;
}
float multiplicacion(float a,float b) 
{
    float multiplicacion;
    multiplicacion=a*b;
    return multiplicacion; 
}
float division(float a, float b)
{
    if (b!=0){
        return a/b;
    }
    else{
        printf("error");
        return -123;
    }
}


