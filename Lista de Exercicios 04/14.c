//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "");
    int A[10];



    for(int a=0; a<10; a++)
    {
        scanf("%d",&A[a]);


    }
int b=0;
for(int a=0;a<10;a++){

    for(b=a+1;b<10;b++){
            if(A[a]==A[b]){
                printf("Valor repetido: %d\n",A[a]);
            }

    }
}

}


