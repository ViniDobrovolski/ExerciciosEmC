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
    int V[tam];
    int V1[tam];
    int V2[tam];
    int aux=0;
    int aux1=0;




    for(int a=0; a<tam; a++)
    {
        printf("VETOR V posição %d\n",a);
        scanf("%d",&V[a]);

    }

    for(int a=0; a<tam; a++)
    {

        if(V[a]%2==0)
        {
            V2[aux]=V[a];
            V1[aux]=0;
            aux++;
        }

        if(V[a]%2==1)
        {
            V1[aux]=V[a];
            V2[aux]=0;
            aux++;
        }

    }

    printf("VETOR V1:\n");
    for(int a=0; a<tam; a++){
        if(V1[a]!=0)
            printf("%d ",V1[a]);
    }

    printf("\nVETOR V2:\n");
    for(int a=0; a<tam; a++){
        if(V2[a]!=0)
            printf("%d ",V2[a]);
    }
}
