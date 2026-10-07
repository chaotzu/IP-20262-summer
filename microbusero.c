//No se les olvide poner todos los mensajes que faltan
#include <stdio.h>
#define CAP 38
#define COSTO 3.5
int main()
{
    int paa=0, pasajerosenespera, cAct, pOlvidados;
    float pasajesTotalesDinero=0;
    printf("Micro express\n");
    printf("La capacidad es %d y la tarifa es %f\n", CAP, COSTO);
    cAct = CAP;
    while(paa<CAP){
       printf("Cuantas personas suben?\n");
       scanf("%d", &pasajerosenespera);
       if(pasajerosenespera>cAct){
           pOlvidados=pasajerosenespera-cAct;
           cAct=0;
           pasajesTotalesDinero=pasajesTotalesDinero+((pasajerosenespera-pOlvidados)*COSTO);
           paa=CAP;
       }
       else{
           cAct=cAct-pasajerosenespera;
           pasajesTotalesDinero=pasajesTotalesDinero+(pasajerosenespera*COSTO);
       }
    }
    printf("Tus ganancias son %f", pasajesTotalesDinero);
    return 0;
}
