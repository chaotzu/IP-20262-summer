#include <stdio.h>

int main()
{
    int zona, numBoletos, totalPagar, comproBoletos=0;
    int numBoletosVIP = 5, numBoletosGeneral = 100, numBoletosPreferente = 2;
    printf("Paquita's festival\n");
    printf("Taquilla virtual, elige una zona\n");
    printf("1. VIP\n2.Preferente\n3.General\n");
    scanf("%d", &zona);
    if(zona == 1){
        //VIP 
        printf("Boletos disponibles en esta zona %d\n", numBoletosVIP);
        printf("¿Cuantos boletos quieres?\n");
        scanf("%d", &numBoletos);
        if(numBoletos<=numBoletosVIP){
            numBoletosVIP = numBoletosVIP - numBoletos;
            totalPagar = numBoletos * 2500;
            printf("Total a pagar %d\n", totalPagar);
            comproBoletos = 1;
        }else{
            printf("No hay tantos boletos disponibles\n");
        }
    }
    else if(zona == 2){
        //Preferente
        printf("Boletos disponibles en esta zona %d\n", numBoletosPreferente);
        printf("¿Cuantos boletos quieres?\n");
        scanf("%d", &numBoletos);
        if(numBoletos<=numBoletosPreferente){
            numBoletosPreferente = numBoletosPreferente - numBoletos;
            totalPagar = numBoletos * 1400;
            printf("Total a pagar %d", totalPagar);
            comproBoletos = 1;
        }else{
            printf("No hay tantos boletos disponibles\n");
        }
    }
    else if(zona == 3){
        //General
        printf("Boletos disponibles en esta zona %d\n", numBoletosGeneral);
        printf("¿Cuantos boletos quieres?\n");
        scanf("%d", &numBoletos);
        if(numBoletos<=numBoletosGeneral){
            numBoletosGeneral = numBoletosGeneral - numBoletos;
            totalPagar = numBoletos * 700;
            printf("Total a pagar %d", totalPagar);
            comproBoletos = 1;
        }else{
            printf("No hay tantos boletos disponibles\n");
        }
    }
    else{
        //Zona inexistente
        printf("Error, zona inexistente");
        return 0;
    }
    //Termino venta
    if(zona == 1 && comproBoletos == 1){
        printf("Tienes %d bebidas de cortesia\n", numBoletos);
    }
    if(numBoletos > 4 && comproBoletos == 1){
        printf("Tienes un 10% de descuento\n");
    }
    return 0;
}
