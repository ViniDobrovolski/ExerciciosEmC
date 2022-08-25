//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>



int main()
{
    setlocale(LC_ALL, "");
    int tam=10;
    int A[tam];
    int B[tam];
    int aux=10;
    int U[20];




    for(int a=0; a<tam; a++)
    {
        printf("Digite o valor para a posição %d do VETOR A\n",a);
        scanf("%d",&A[a]);
        printf("\n");
        printf("Digite o valor para a posição %d do VETOR B\n",a);
        scanf("%d",&B[a]);
        printf("\n");
    }
    for(int a=0; a<tam; a++)
    {
      U[a]=A[a];
      U[aux]=B[a];

      aux=aux+1;


    }


    printf("VETOR I sem repetições:\n");
for(int a=0; a<20; a++)
    {
        for(int b=a+1; b<20; b++){
            if(U[a]==U[b]){
                U[a]=0;
            }
        }

        if(U[a]!=0){
            printf("%d ",U[a]);
        }

}
}
