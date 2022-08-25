//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "");
    int A[6];

printf("Digite 6 valores pares para o vetor: \n");

    for(int a=0; a<6; a++)
    {
        scanf("%d",&A[a]);
        if(A[a]%2!=0)
        {
            printf("Valor inválido");
            return 0;
        }

    }
    printf("\n%d %d %d %d %d %d\n",A[5],A[4],A[3],A[2],A[1],A[0]);

    }


