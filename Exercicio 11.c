#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int ano;
    printf("Digite o ano para saber se é bissexto:\n");
    scanf("%d", &ano);

    if ((ano % 400 == 0))
    printf("O ano é bissexto");

    else if (ano % 4 == 0 && ano % 100 != 0)
        printf("O ano é bissexto");

    else
        printf("O ano não é bissexto");
}
