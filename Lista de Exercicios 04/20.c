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
    int B[10];
    int aux=0;



printf("Digite valores entre 0 e 50:\n");


    for(int a=0; a<tam; a++)
    {
        scanf("%d",&A[a]);
        if(A[a]>50||A[a]<0){
            printf("Valor inválido");
            return 0;
        }

    }



for (int a=0;a<tam;a++){

       if(A[a]%2==1){
        B[aux]=A[a];
        aux++;
       }
else {
         B[aux]=0;
aux++;

}

    }
    printf("VETOR A:   VETOR B:\n");
    for (int a=0;a<tam;a++){
        printf("%d             %d\n",A[a],B[a]);
    }


}


