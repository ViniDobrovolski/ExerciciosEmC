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
    int aux=0;
    int I[20];




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
        for(int b=0; b<tam; b++)
        {
            if(A[a]==B[b])
            {
                I[aux]=A[a];
                //printf("%d ",A[a]);
                aux++;
            }
        }
    }
    printf("VETOR I sem repetições:\n");
for(int a=0; a<tam; a++)
    {
        for(int b=a+1; b<tam; b++){
            if(I[a]==I[b]){
                I[a]=0;
            }
        }

        if(I[a]!=0){
            printf("%d ",I[a]);
        }

}
}
