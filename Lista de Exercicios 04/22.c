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
    int B[tam];
    int C[tam];





    for(int a=0; a<tam; a++)
    {
        printf("VETOR A posição %d\n",a);
        scanf("%d",&A[a]);
        printf("VETOR B posição %d\n",a);
        scanf("%d",&B[a]);



        }





for (int a=0;a<tam;a++){
        if (a%2==0){
            C[a]=A[a];
        }
        else
            C[a]=B[a];

printf("%d ",C[a]);


}






}


