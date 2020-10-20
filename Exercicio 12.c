#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf("Digite o valor de um lado do triangulo:\n");
    scanf("%d",&a);

    printf("Digite o valor de um lado do triangulo:\n");
    scanf("%d",&b);

    printf("Digite o valor de um lado do triangulo:\n");
    scanf("%d",&c);

    if ((a==b) && (a==c))
        printf("Triangulo equilatero");

    else if (((a==b) && (a!=c)) || ((a!=b) && (a==c)) || ((a!=b) && (a!=c) && (c==b)))
        printf("Triangulo isosceles");

    else if ((a!=b) && (a!=c) && (b!=c))
        printf("Triangulo escaleno");




}
