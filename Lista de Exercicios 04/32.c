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
        printf("Digite o valor para a posi��o %d do VETOR X\n",a);
        scanf("%d",&X[a]);
        printf("\n");
        printf("Digite o valor para a posi��o %d do VETOR Y\n",a);
        scanf("%d",&Y[a]);
        printf("\n");
    }

//SOMA
for(int a=0;a<tam;a++){
    soma=X[a]+Y[a];
    printf("Soma dos valores nas posi��es [%d]: %d\n",a,soma);
}
printf("\n");

//PRODUTO
for(int a=0;a<tam;a++){
    produto=X[a]*Y[a];
    printf("Produto dos valores nas posi��es [%d]: %d\n",a,produto);
}

//DIFEREN�A
printf("\nValores do vetor X que s�o diferentes do vetor Y:");
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
//INTERSE��O
printf("\n");
printf("\nValores que s�o iguais nos dois vetores:");
for(int a=0; a<tam; a++)
    {
        for(int b=0; b<tam; b++){
            if(X[a]==Y[b]){
                printf("%d ",X[a]);
            }
        }
}

//UNI�O
printf("\nTodos elementos de X e os de Y que n�o est�o em X:");
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
