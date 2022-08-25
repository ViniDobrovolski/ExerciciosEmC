//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "");
    int A[5];
    int max=0,min=1000000000;
    float media;




    for(int a=0; a<5; a++)
    {
        scanf("%d",&A[a]);

        if(A[a]>max)
            max=A[a];
        if(A[a]<min)
            min=A[a];

        media=media+A[a];


    }
    media=media/5;


printf("Vetor: %d %d %d %d %d \n",A[0],A[1],A[2],A[3],A[4]);
    printf("O maior valor foi: %d\n",max);
    printf("O menor valor foi: %d\n",min);
    printf("A media dos valores foi: %.1f",media);

}


