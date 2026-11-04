//Ya encontre la solución, solo decrementen N cada vez que se recorre el arreglo
#include <stdio.h>

int main()
{
    int N;
    printf ("digita los numeros que vas a ingresar\n");
    scanf ("%d",&N);
    int numero[N];
    for (int i=0; i<N; i++){
        printf ("Introduce un numero %d\n", i+1);   
        scanf ("%d", &numero[i]); 
    }
    for(int i=0; i<N-1; i++){
        if(numero[i]>numero[i+1]){
            int aux = numero[i];
            numero[i] = numero[i+1];
            numero[i+1]=aux;
        }
    }
    prijntf("\n")
    for(int i=0; i<N; i++){
        printf("%d ", numero[i]);
    }
    return 0;
}
