#include <stdio.h>
#include <stdlib.h>

int main()
{
   float altura;
   float base;
   float resultado;

   printf("Digite o valor da base do triangulo:\n");
   scanf("%f",&base);

    printf("Digite o valor da altura do triangulo:\n");
    scanf("%f",&altura);

   resultado= (base*altura)/2;

   printf("O valor da area do triangulo eh:%.2f",resultado);

}
