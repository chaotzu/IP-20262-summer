#include <stdio.h>

int main()
{
        int x=0, y=1, s=0,i,n;
        printf("hasta que numero de la sucesion quire visualizar:\n");
        scanf("%d",&n);
        printf("%d - %d", x, y);
        for (i=n-2; i>=1; i--){
            s=x+y;
            x=y;
            y=s;
            printf("- %d",s);
        }
        return 0;
}
