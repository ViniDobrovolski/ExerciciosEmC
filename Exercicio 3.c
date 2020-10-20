#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    double x;
    double resultado;

     printf("Digite um valor:\n");
     scanf("%lf",&x);

     resultado= sqrt(x)+ (x/2)+ (x*x);

     printf("O resultado da função é: %.2lf", resultado);

     return 0;

}
