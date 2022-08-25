//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>



int main()
{
    setlocale(LC_ALL, "");
    int tam=5;
    int X[tam];
    int Y[tam];
    int aux=0;
    int soma,produto;





    for(int a=0; a<tam; a++)
    {
        printf("Digite o valor para a posição %d do VETOR X\n",a);
        scanf("%d",&X[a]);
        printf("\n");
        printf("Digite o valor para a posição %d do VETOR Y\n",a);
        scanf("%d",&Y[a]);
        printf("\n");
    }

//SOMA
for(int a=0;a<tam;a++){
    soma=X[a]+Y[a];
    printf("Soma dos valores nas posições [%d]: %d\n",a,soma);
}
printf("\n");

//PRODUTO
for(int a=0;a<tam;a++){
    produto=X[a]*Y[a];
    printf("Produto dos valores nas posições [%d]: %d\n",a,produto);
}

//DIFERENÇA
printf("\nValores do vetor X que são diferentes do vetor Y:");
for(int a=0; a<tam; a++)
    {
        for(int b=0; b<tam; b++){
            if(X[a]!=Y[b]){
                aux++;
            }
            if(aux==5-a){
                printf("%d ",X[a]);
            }
        }
}
//INTERSEÇÃO
printf("\n");
printf("\nValores que são iguais nos dois vetores:");
for(int a=0; a<tam; a++)
    {
        for(int b=0; b<tam; b++){
            if(X[a]==Y[b]){
                printf("%d ",X[a]);
            }
        }
}

//UNIÃO
printf("\nTodos elementos de X e os de Y que não estão em X:");
for(int a=0; a<tam; a++){
    printf("%d ",X[a]);
}
for(int a=0; a<tam; a++){
    for(int b=0; b<tam; b++){
        if(X[a]!=Y[b]){
            printf("%d ",Y[b]);

        }
    }
}


}
