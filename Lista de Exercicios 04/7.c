//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "");
    int A[10];
    int max=0;
    int pos;


    for(int a=0; a<10; a++)
    {
        scanf("%d",&A[a]);
        if(A[a]>max)
        {
            max=A[a];
            pos=a;
        }

    }
    printf("\n%d %d %d %d %d %d %d %d %d %d \n",A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9]);

    printf("\nO maior elemento do vetor é: %d e a posição em que ele se encontra é: %d",max,pos);

}


