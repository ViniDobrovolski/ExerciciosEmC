#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{


    setlocale(LC_ALL, "");

    int vet;
    int num;
    int *x;


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

    printf("\nDigite um n�mero para ser o X:");
    scanf("%d",&num);

    for (int i=0; i<vet; i++)
    {
        if(x[i]%num==0 && x[i]!=num)
        {


            printf("\nO n�mero %d � multiplo de %d",x[i],num);
        }
    }




    free(x);




}
