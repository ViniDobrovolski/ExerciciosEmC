//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "");
    int A[8];
   int x,y;
   int soma;

    for(int a=0;a<8;a++){
        scanf("%d",&A[a]);

    }
    printf("Digite um valor para X:\n");
    scanf("%d",&x);

    printf("Digite um valor para Y:\n");
    scanf("%d",&y);

    soma=A[x]+A[y];

    printf("A soma dos valores encontrados em X e Y é: %d",soma);

}


