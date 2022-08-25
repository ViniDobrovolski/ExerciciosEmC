//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>




int main()
{
    setlocale(LC_ALL, "");
    int tam=10;
    int X[tam];
    int Y[tam];
    int aux=0;
    int soma,produto;

    for(int a=0; a<tam; a++)
    {
        printf("Digite o valor para a posição %d do VETOR X\n",a);
        scanf("%d",&X[a]);
        printf("\n");

        for(int b=0;b<a;b++){
            if(a==0)
                break;
            if(X[a]==X[b]){
                do {printf("Valor repetido\nDigite outro valor:\n");
                scanf("%d",&X[a]);
                }
                while(X[a]==X[b]);
            }
        }

    }
    printf("\n");
    for(int a=0; a<tam; a++){
        printf("%d",X[a]);
    }


}
