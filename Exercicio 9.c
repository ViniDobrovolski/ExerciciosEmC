#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Digite um numero:\n");
    scanf("%d",&a);

    printf("Digite outro numero:\n");
    scanf("%d",&b);

    printf("Digite mais um numero:\n");
    scanf("%d",&c);

    printf("Os numeros em ordem serao: ");

     if ((a>b)&& (a>c)){
        if (b>c)
            printf("%d %d %d",c,b,a);
        else
            printf("%d %d %d", b,c,a);
    }
    if ((b>a)&&(b>c)){
        if (a>c)
            printf("%d %d %d", c,a,b);
        else
            printf("%d %d %d", a,c,b);
    }

    if ((c>a)&&(c>b)){
        if (a>b)
            printf("%d %d %d", b,a,c);
        else
            printf("%d %d %d", a,b,c);
    }

    return 0;
}
