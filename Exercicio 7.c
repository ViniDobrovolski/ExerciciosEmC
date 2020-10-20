#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio,area,perim;

    printf("Digite o valor do raio do disco:\n");
    scanf("%f", &raio);

    area=3.14*(raio*raio);

    perim= 2*3.14*raio;

    printf("O valor da area e perimetro sao respectivamente: %.2f e %.2f", area,perim);


}
