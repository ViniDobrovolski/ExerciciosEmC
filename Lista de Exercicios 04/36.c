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



    for (int a=0; a<10; a++)
    {
        printf("digite um valor para a posição [%d]:\n",a);
        scanf("%f",&V[a]);
    }

    min=V[0];


printf("\nVetor ordenado:\n");
    for (int a=0; a<tam; a++)
    {
        for (int b=a+1; b<tam; b++)
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
}

