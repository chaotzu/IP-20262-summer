#include <stdio.h>

int maximo3(int a, int b, int c);

int main(void) 
{
    int r;
    r= maximo3(666,560,9);
    printf("El mayor es %d",r);
    return 0;
}
int maximo3(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    return c;

}
