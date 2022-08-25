//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL, "");
    int tam=5;
    int A[tam];
    int escolha;



    for(int a=0; a<tam; a++)
    {
        scanf("%d",&A[a]);


    }

printf("Digite 0 para finalizar o programa, 1 para mostrar o vetor na ordem direta ou 2 para mostrar o vetor na ordem inversa: \n");
do {
scanf("%d",&escolha);

switch(escolha){
case 1:
    printf("\n%d %d %d %d %d \n",A[0],A[1],A[2],A[3],A[4]);
    break;

case 2:
    printf("\n%d %d %d %d %d \n",A[4],A[3],A[2],A[1],A[0]);
    break;

case 0:
    printf("\nPrograma finalizado");
    return 0;

default:
    printf("\nCódigo invalido\n");

           }
}
while (escolha!=0);

return 0;
}

