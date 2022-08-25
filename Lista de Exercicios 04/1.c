//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "");
    int A[6];
    int soma;
    A[0]=1;
    A[1]=0;
    A[2]=5;
    A[3]=-2;
    A[4]=-5;
    A[5]=7;

    soma=A[0]+A[1]+A[5];
    printf("A soma é : %d\n",soma);

    A[3]=100;

    printf("%d\n%d\n%d\n%d\n%d\n%d\n",A[0],A[1],A[2],A[3],A[4],A[5]);
}


