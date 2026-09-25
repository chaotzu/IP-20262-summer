#include <stdio.h>

int main()
{
    int opcion;
    float total=0;
    char repetir = 's';
    printf("Bienvenidos a Saul kitchen\n");
    while(repetir == 's' || repetir == 'S'){
        printf("Elige un platillo del menu:\n1. Sopa $40\n2. Chilaquiles $55\n");
        printf("3. Tacos $50\n4. Langosta $100\n");
        scanf("%d", &opcion);
        switch(opcion){
            case 1:
                total = total + 40;
            break;
            case 2:
                total = total + 55;
            break;
            case 3:
                total = total + 50;
            break;
            case 4:
                total = total + 100;
            break;
            default:
                total = total + 10;
            break;
        }
        printf("Deseas continuar? S/N\n");
        scanf(" %c", &repetir);
    }
    printf("Total a pagar es %f y el iva es %f, total final %f", total, total*0.16, 
            total + total *0.16);
    return 0;
}
