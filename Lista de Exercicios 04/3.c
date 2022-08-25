//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "");
    int A[10];
    int B[10];

    for(int a=0;a<10;a++){
        scanf("%d",&A[a]);
        B[a]=pow(A[a],2);
    }

    printf("\n%d %d %d %d %d %d %d %d %d %d ",A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9]);
    printf("\n%d %d %d %d %d %d %d %d %d %d ",B[0],B[1],B[2],B[3],B[4],B[5],B[6],B[7],B[8],B[9]);
}


