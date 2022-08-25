//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "");
    int A[10];
    int par=0;


    for(int a=0;a<10;a++){
        scanf("%d",&A[a]);
        if(A[a]%2==1){
            par++;
        }


    }

    printf("A quantidade de números pares é: %d",par);

}


