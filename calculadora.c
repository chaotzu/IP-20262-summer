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
void  menu (void);
float suma(float a,float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);
int main(){
    int O;
    while(1){
        menu();
        printf("Elige una opcion");
        scanf("%d",&O);
        switch(O){
            case 1: 
                float a, b;
                printf("dame el primer numero\n");
                scanf("%f", &a);
                printf("dame el segundo numero\n");
                scanf("%f", &b);
                printf("el resultado es: %f", suma(a,b));
            break;
            case 2:
            break;
            case 3:
            break;
            case 4:
            break;
            case 5:
                return 0;
            break;    
        }
    }
    //printf("%.2f", suma(2.0,2.0));
    return 0;
}
 
void menu (void){
    printf ("\tMenu\n 1-Suma \n 2-Resta \n 3-Multiplicacion \n 4-Division \n 5-Salir\n ");    
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


