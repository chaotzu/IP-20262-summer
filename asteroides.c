#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
    int numero, vida = 1000, nivel=0, chocaOnoChoca=0, generaSuper=0;
    printf("Asteroides\n");
    sleep(1);
    printf("**********\n");
    sleep(1);
    printf("**********\n");
    sleep(1);
    printf("**Inicio**\n");
    srand((int)time(NULL));
    while(vida>0){
        nivel ++;
        chocaOnoChoca = rand() % 2 + 0; 
        generaSuper = rand() % 10 + 0; 
        sleep(1);
        if(generaSuper<8){
            numero = rand() % 100 + 1;
            printf("**Nivel %d**\n", nivel);
            printf("Se acerca un asteroide de daño %d \n", numero);
        }
        else{
            printf("**Nivel %d**\n", nivel);
            numero = rand() % 1000 + 500;
            printf("Se acerca un super asteroide de daño %d \n", numero);
        }
        sleep(3);
        if(chocaOnoChoca == 0){
            printf("Esquivaste el asteroide\n");
        }
        else{
            vida = vida - numero;
            printf("Chocaste con el asteroide, tui vida es %d\n", vida);    
        }
    }
    return 0;
}
