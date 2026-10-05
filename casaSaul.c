#include <stdio.h>

int main()
{
    int d, codigo = 4312,contador =0;
    printf("===Escpe de la casa embrujada ===\n");
    do{
        printf("ingresa el codigo secreto\n");
        scanf("%d",&d);
        if (d == codigo)
        {
            contador++;
            printf("codigo correcto, puedes salir\n");
            printf("Intentos utilizados %d", contador);
            return 0;
            
        }
        else
        {
            
            printf("codigo incorrecto;");
            contador ++;
            if(codigo>d){
                printf("El numero es mayor\n");
            }
            else{
                 printf("El numero es menor:\n");
            }   
        }
    }while(contador<10);
    printf("No escapaste, te quedaras con Saul siempre\n");
    printf("Intentos utilizados %d", contador);
    return 0;
}
