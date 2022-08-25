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




    for (int a=0; a<tam; a++)
    {
        printf("digite um valor para a posição [%d]:\n",a);
        scanf("%f",&V[a]);
        for(int b=0;b<a;b++){
            if(V[a]<V[b]){
                min=V[b];
                V[b]=V[a];
                V[a]=min;
            }
        }

    }
    printf("\nVetor:\n");
    for (int a=0; a<tam; a++){
        printf("%f ",V[a]);
    }
}







