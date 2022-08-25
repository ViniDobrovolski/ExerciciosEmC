//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>



int main()
{
    setlocale(LC_ALL, "");
    int tam=10;
    int V[tam];
  double media=0,desvio=0;






    for(int a=0; a<tam; a++)
    {
        printf("VETOR V posição %d\n",a);
        scanf("%d",&V[a]);

        }


for(int a=0; a<tam; a++){
    media=media+V[a];
}
media=media/tam;

for(int a=0; a<tam; a++){
    desvio=desvio+pow((V[a]-media),2);
}

desvio=desvio/(tam-1);
desvio=sqrt(desvio);

printf("O desvio padrão é: %.4lf",desvio);





}
