#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "");

    int *vet,qtde=1,num;

    vet=(int*)malloc(qtde*sizeof(int));

    do
    {
        printf("Digite um valor:\n");
        scanf("%d",&num);

        if(qtde!=1 && num>0)
        {
            vet=(int*)realloc(vet,qtde*sizeof(int));
        }

        vet[(qtde-1)]=num;

        qtde++;

    }
    while(num>0);
for(int a=0;a<qtde;a++){
    printf("%d\n",vet[a]);
}

}
