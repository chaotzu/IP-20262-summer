//Ya encontre la solución, solo decrementen N cada vez que se recorre el arreglo
#include <stdio.h>

int main()
{
    int N, i, k;
    printf("Cuantos elementos vas a ingresar?\n");
    scanf("%d", &N);
    int numeros[N];
    //Llenar el arreglo
    for(i = 0; i<N; i++){
        printf("Ingresa el elemento %d\n", i+1);
        scanf("%d", &numeros[i]);
    }
    
    //Recorre el arreglo
    for(int i=0; i<N;i++){
        for(int j=i+1; j<N;j++){
            if(numeros[i]==numeros[j]){
               
                for(k=j+1;k<=N-1;k++){
                    
                    numeros[k-1]=numeros[k];
                }
               // printf("\n k= %d j=%d num[k-1]= %d num[k]=%d", k, j, numeros[k-1], numeros[k]);
                j--;
                printf("iguales");
            }
        }
    }
    for(i = 0; i<N;i++){
        printf("%d ", numeros[i]);
    }
    return 0;
}
