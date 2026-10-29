//Con arreglo auxiliar
/*
#include <stdio.h>

int main()
{
    int j=0, N;
    printf("Define el tamaño del arreglo\n");
    scanf("%d", &N);
    int arreglo[N];
    int aux[N];
    //llenar arreglo original
    for(int i=0;i<N;i++){
        printf("Ingresa el valor %d", i+1);
        scanf("%d", &arreglo[i]);
    }
    //Llenar arreglo auxiliar
    for(int i=N-1;i>=0;i--){
        aux[j]=arreglo[i];
        j++;
    }
    //imprimr
    for(int i=0;i<N;i++){
        printf("%d ", aux[i]);
     
    }
    return 0;
}
*/
//Sin arreglo auxiliar
#include <stdio.h>

int main()
{
    int N;
    printf("Define el tamaño del arreglo\n");
    scanf("%d", &N);
    int arreglo[N], j=N-1;
    for(int i=0;i<N;i++){
        printf("Ingresa el valor %d\n", i+1);
        scanf("%d", &arreglo[i]);
    }
    for(int i=0;i<j;i++){
        int temp;
        temp=arreglo[j];
        arreglo[j]=arreglo[i];
        arreglo[i] = temp;
        j--;
    }
    printf("\n");
    for(int i=0;i<N;i++){
        printf("%d ", arreglo[i]);
    }
    return 0;
}
