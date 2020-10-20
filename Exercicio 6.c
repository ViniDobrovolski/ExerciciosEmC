#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,s,resultado;

    printf("Digite o valor do lado a:\n");
    scanf("%f",&a);

    printf("Digite o valor do lado b:\n");
    scanf("%f",&b);

    printf("Digite o valor do lado c:\n");
    scanf("%f",&c);

    s=(a+b+c)/2;

    resultado= sqrt(s*(s-a)*(s-b)*(s-c));

    printf("A area do triangulo eh:%.2f",resultado);

    return 0;

}
// Resposta: Os valores apresentam uma leve diferença pois a formula de Heron envolve mais processos de divisão e multiplicação, "quebrando mais os numeros", apresentando então leve alterações no resultado final comparado com a outra formula.
