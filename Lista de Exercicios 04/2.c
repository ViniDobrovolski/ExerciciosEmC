//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "");
    int A[6];

    for(int a=0;a<6;a++){
        scanf("%d",&A[a]);
    }

    printf("\n%d\n%d\n%d\n%d\n%d\n%d\n",A[0],A[1],A[2],A[3],A[4],A[5]);
}


