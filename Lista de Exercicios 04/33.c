//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>



int main()
{
    setlocale(LC_ALL, "");
    int tam=15;
    int X[tam];
    int Y[tam];
    int aux=0;
    int soma,produto;





    for(int a=0; a<tam; a++)
    {
        printf("Digite o valor para a posição %d do VETOR X\n",a);
        scanf("%d",&X[a]);
        printf("\n");

    }

    for(int a=0;a<tam;a++){
        if(X[a]==0){
            for(int b=a;b<tam;b++){
                X[b]=X[b+1];
                aux++;
            }
        }

            printf("%d ",X[a]);
    }


}
