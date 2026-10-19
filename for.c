
#include <stdio.h>

int main()
{
    int n, j, suma=0,  pares=0, impares=0, positivos=0 , negativos=0, ceros = 0;  
    float promedio=0;
    printf("Programa que calcula promedio y cuenta numero de pares, impares, positivos y negativos\n");
    printf ("cuantos numeros quieres? \n");
    scanf("%d", &n);
    for (int i=1;i<=n;i++) {
        //Promedio
        printf("introduce el numero %d\n",i);
        scanf("%d", &j);
        suma=j+suma;
        //FIN promedio
        //Pares
        if(j%2==0){
            pares++;
        } else {
            impares++;
        }
        if(j==0){
            ceros++;
        }
        else if (j > 0)
        {
            positivos++;
        }
        else {
            negativos++;
        }
    }
    promedio=suma/n;
    printf("el numeros de pares es: %d\n", pares);
    printf("Los numeros impares son: %d\n", impares);
    printf("los numeros positivos son: %d\n", positivos);
    printf ("Los numeros negativos son: %d\n", negativos);
    printf ("Los numeros ceros son: %d\n", ceros);
    printf ("El promedio es: %f\n", promedio);
    return 0;
}
