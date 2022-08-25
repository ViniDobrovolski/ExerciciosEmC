//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>



int main()
{
    setlocale(LC_ALL, "");
    int tam=6;
    int V[tam];
    int soma=0;
    int impr;

    for(int a=0;a<tam;a++){
        printf("Digite o valor para a posição %d\n",a);
        scanf("%d",&V[a]);
        printf("\n");
    }

printf("Numeros pares:\n");
for(int a=0;a<tam;a++){
        if(V[a]%2==0){
            printf("%d ",V[a]);
            soma=soma+V[a];

}

}
printf("\n\nSoma dos numeros pares: %d\n",soma);


printf("\nNumeros impares:\n");
for(int a=0;a<tam;a++){
        if(V[a]%2==1){
            printf("%d ",V[a]);
            impr=impr+V[a];

}

}
printf("\n\nSoma dos numeros impares: %d\n",impr);

}

