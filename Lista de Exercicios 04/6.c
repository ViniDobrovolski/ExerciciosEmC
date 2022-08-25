//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "");
    int A[10];
    int max=0,menor=100000000000000;


    for(int a=0; a<10; a++)
    {
        scanf("%d",&A[a]);
        if(A[a]>max)
            max=A[a];
        if(A[a]<menor)
            menor=A[a];



    }

    printf("O maior elemento do vetor é: %d e o menor elemento do vetor é: %d",max,menor);

}


