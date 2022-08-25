//Vinicius Dobrovolski 
//EXERCICIO ERRADO/ NÃO CONSEGUI FAZER 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>




int main()
{
    setlocale(LC_ALL, "");
    int tam=5;
    int VA[tam];
    int VB[tam];
    int a,b;
    int soma;

printf("Digite um número para A: \n");
scanf("%d",&a);
printf("Digite um número para B: \n");
scanf("%d",&b);

// preenchendo vetor da letra A
for (int a=5;a>0;a--){
    scanf("%d ",&VA[a]);
}
//preenchendo vetor da letra B
for (int a=5;a>0;a--){
    scanf("%d ",&VB[a]);

    //SOMA
    for (int a=5;a>0;a--){
            soma=VA[a]+VB[a];
    if(soma>=10){
        VA[a+1]++;
        soma=0;
        printf("%d\n",soma);
    }
    else
        printf("%d\n",soma);
    }


}
}

