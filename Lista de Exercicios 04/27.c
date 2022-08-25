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
    int aux=0;
    int primo;




    for(int a=0; a<tam; a++)
    {
        printf("VETOR V posição %d\n",a);
        scanf("%d",&V[a]);

    }

    for(int a=0; a<tam; a++)
    {
        primo=1;
        for(int b=2; b<V[a]; b++)
        {
            if(V[a]%b==0)
                primo=0;
        }
if(primo==1)
   printf("O número %d é primo e esta na posição: %d\n",V[a],a);



    }
}
