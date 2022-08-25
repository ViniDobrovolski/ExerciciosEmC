//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>




int main()
{
    setlocale(LC_ALL, "");
    int tam=10;
    float V[tam];
    float min;
    float max;



    for (int a=0; a<11; a++)
    {
        printf("digite um valor para a posição [%d]:\n",a);
        scanf("%f",&V[a]);
    }

    min=V[0];


printf("\nVetor na ordem pedida:\n");
    for (int a=1; a<7; a++)
    {
        for (int b=a+1; b<7; b++)
        {
            if(V[b]<V[a])
            {
                min=V[a];
                V[a]=V[b];
                V[b]=min;
            }

            }
            printf("%f ",V[a]);

        }
        for (int a=6; a<12; a++)
    {
        for (int b=a+1; b<12; b++)
        {
            if(V[b]>V[a])
            {
                max=V[a];
                V[a]=V[b];
                V[b]=max;
            }

            }
            printf("%f ",V[a]);

        }

}

