#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;

    printf("Digite um valor para a coordenada x:\n");
    scanf("%d",&x);

    printf("Digite um valor para a coordenada y:\n");
    scanf("%d",&y);

    if ((x > 0) && (y> 0))
        printf ("A coordenada esta no primeiro quadrante");
    else if ((x < 0) && (y > 0))
        printf ("A coordenada esta no segundo quadrante");
    else if ((x < 0) && (y < 0))
        printf("A coordenada esta no terceiro quadrante");
    else if ((x > 0) && (y < 0))
        printf("A coordenada esta no quarto quadrante");
}
