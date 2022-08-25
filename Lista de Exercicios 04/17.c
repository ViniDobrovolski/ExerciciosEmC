//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL, "");
    int tam=10;
    int A[tam];




    for(int a=0; a<tam; a++)
    {
        scanf("%d",&A[a]);
    }

for (int a=0;a<tam;a++){
    if (A[a]<0){
        A[a]=0;
    }
    printf("%d ",A[a]);
}

}

