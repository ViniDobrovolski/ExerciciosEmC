#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{


    setlocale(LC_ALL, "");

    int *lot,*numU,*acerto,numacerto=0;

    lot=(int*) malloc(6*sizeof(int));
    numU=(int*) malloc(6*sizeof(int));


    for(int a=0; a<6; a++)
    {
        printf("Digite um número da loteria:\n");
        scanf("%d",&lot[a]);
    }


    for(int a=0; a<6; a++)
    {
        printf("Digite um número do seu bilhete da loteria:\n");
        scanf("%d",&numU[a]);
    }


    acerto=(int*) malloc(numacerto*sizeof(int));


    for(int a=0; a<6; a++)
    {
        for(int b=0; b<6; b++)
        {
            if(lot[a]==numU[b])
            {
                numacerto++;
                acerto[a]=numU[b];

            }
        }

    }
printf("\nNúmeros sorteados:\n");
for(int a=0; a<6; a++)
    {
        printf("%d\n",lot[a]);

    }

    printf("\nNúmeros acertados:\n");
for(int a=0; a<numacerto; a++)
    {
        printf("%d\n",acerto[a]);

    }
}
