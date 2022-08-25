#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int vet;
    int *x;


    printf("Informe o tamanho do vetor:\n ");
    scanf("%d",&vet);

    x = (int*) malloc(vet*sizeof(int));
    if (x==NULL){
        printf("Valor de memória indisponivel");
        exit(1);
    }


    for (int i=0;i<vet;i++)
    {
        printf("\nDigite um valor para o vetor na posição %d :",i);
        scanf("%d",&x[i]);
    }

     for (int i=0;i<vet;i++)
    {
        printf("\nO valor que está na posição %d do vetor é: %d",i,x[i]);

    }
    free(x);


}
