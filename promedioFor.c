#include <stdio.h>

int main()
{
    int i, n, semestre, suma=0;
    float promedio;

    printf("Programa que calcula el promedio de la carrera\n");
    printf("Numero de semestres: ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++){
        printf("Semestre %d: ", i);
        scanf("%d", &semestre);
        
        suma=suma+semestre;
    }
    promedio= suma/n; 
    
    printf("\nEl promedio de los %d semestres es %.2f", n, promedio);
    return 0;
}
