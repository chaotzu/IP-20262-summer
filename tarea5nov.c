#include <stdio.h>
int main(){
    int N, indice=-5, buscado;
    printf("Elige cuantos numeros agregaras\n");
    scanf("%d", &N);
    //Declarar arreglo
    int arreglo[N];
    //Llenar el arreglo
    for(int i=0; i<N;i++){
        printf("Introduce el numero %d", i+1);
        scanf("%d", &arreglo[i]);
    }
    //Buscar primera aparicion
    printf("Introduce el numero que quieres buscar\n");
    scanf("%d", &buscado);
    for(int i=0; i<N;i++){
        if(arreglo[i]==buscado && indice<=0)
        {
            indice = i;
        }
    }
    if(indice < 0){
        printf("No se encontro")
    }else{
        printf("Primer aparicion en el indice %d", indice);
        //TODO
        //imprimir el indice de la segunda aaricion
        //Imprimir el numero total de veces que aparece
    }
}
