#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int vet;
    int *x;
    int par=0,impar=0;


    printf("Informe o tamanho do vetor:\n ");
    scanf("%d",&vet);

    x = (int*) malloc(vet*sizeof(int));
    if (x==NULL)
    {
        printf("Valor de mem�ria indisponivel");
        exit(1);
    }


    for (int i=0; i<vet; i++)
    {
        printf("\nDigite um valor para o vetor na posi��o %d :",i);
        scanf("%d",&x[i]);
    }

    for (int i=0; i<vet; i++)
    {
        if(x[i]%2==0)
        {
            par++;
        }
        if(x[i]%2==1)
        {
            impar++;
        }

    }

    printf("\nA quantidade de n�meros pares � %d e de �mpares � %d",par,impar);
    free(x);


}
