//TODO agregar while
#include <stdio.h>
float posicion(float xi,float v, int t);
float aceleracion(float v, float vi, int t);
int main(){
    int eleccion;
    float xi, v, vi, resultado;
    int t;
   printf (" Seleciona la operacion a realizar \n 1-Calcular posicion \n 2- Calcular aceleracion \n");  
   printf ("3-Salir \n");
   scanf ("%d", &eleccion);
        switch (eleccion){
            case 1:
                printf("introduce la posicion inicial\n ");
                scanf("%f",&xi);
                printf("introduce la velocidad\n ");
                scanf("%f",&v);
                printf("introduce el tiempo\n ");
                scanf("%d",&t);
                resultado = posicion( xi, v, t);
                printf("la posicion es;%f\n",resultado);
            break;
            case 2:
                printf("introduce la velocidad\n ");
                scanf("%f",&v);
                printf("introduce la velocidad inicial\n ");
                scanf("%f",&vi);
                printf("introduce el tiempo\n ");
                scanf("%d",&t);
                resultado = aceleracion(v, vi, t);
                printf("la aceleracion es;%f\n",resultado);
            break;
            case 3:
                return 0;
            break;
        }
        
}
 float posicion(float xi,float v, int t){
     return xi+v*t;
 }   
    
 float aceleracion(float v, float vi, int t){
     return (v-vi) / t;
 }
    
