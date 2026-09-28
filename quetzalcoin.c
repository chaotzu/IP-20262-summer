#include <stdio.h>
int main()
{
    float saldo=200, x;
    int opcion;
    char continuar = 's';
    printf("Beinvenido al Banco Quetzalcoin\n");
    while(continuar == 's' || continuar == 'S'){
        printf("Elige una opcion\n");
        printf("1.- Consultar saldo\n 2.- Depositar saldo\n");
        printf("3.- Retirar\n 4.- Tipo de cuenta\n 5.- Salir\n");
        scanf("%d", & opcion);
        switch(opcion)
        {
            case 1://consultar
                printf ("tu saldo es, %f\n", saldo);
            break;
            case 2://depositar
                printf("Cuanto quieres depositar\n");
                scanf("%f",&x);
                saldo=saldo+x;
                printf("Tu saldo es %f\n",saldo);
            break;
            case 3://retirar
                printf("monto a retirar: $\n");
                scanf("%f", &x);
                if (x<=saldo)
                {
                    saldo -= x;
                }else
                {
                    printf("no tienes saldo suficiente\n");
                }
            break;
            case 4://Tipo de cuenta
            break;
            case 5://salir
                return 0;
            break;
            default://opcion no valida
                printf("Opcion no valida\n");
            break;
        }
        printf("Quieres continuar? S/N\n");
        scanf(" %c", &continuar);
    }
    return 0;
}
