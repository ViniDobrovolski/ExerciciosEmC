//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "");
    float A[10];
    int negativo=0;
    float positivos=0;




    for(int a=0; a<10; a++)
    {
        scanf("%f",&A[a]);

        if(A[a]<0)
            negativo++;

        if(A[a]>0)
            positivos=positivos+A[a];


    }


    printf("A quantidade de n�meros negativos foi : %d\n",negativo);
    printf("A soma dos n�meros positivos foi: %.1f",positivos);

    }


