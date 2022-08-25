//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL, "");
    int tam=20;
    int A[tam];
    int B[tam];
    int pos=0;
    bool rept;



    for(int a=0; a<tam; a++)
    {
        scanf("%d",&A[a]);


    }
    int b=0;
    for(int a=0; a<tam; a++)
    {
        rept= false;

        for(b=a+1; b<tam; b++)
        {
            if(A[a]==A[b]){
                rept=true;
                break;
            }
    }
if(!rept){
    printf("%d ",A[a]);
}

    }
}


