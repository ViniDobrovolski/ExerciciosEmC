//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL, "");
    int tam=10;
    int A[tam];
    int x;
    int contadora;




    for(int a=0; a<tam; a++)
    {
        scanf("%d",&A[a]);
    }

    printf("Digite um número para X: \n");
    scanf("%d",&x);

for (int a=0;a<tam;a++){
    if (A[a]%x==0){
        printf ("%d ",A[a]);
        contadora++;
    }

}
printf("\nA quantidade de numeros multiplos de %d foi: %d",x,contadora);
}

