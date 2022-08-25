//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL, "");
    int tam=128;
    int V[tam];
    int aux=0;
    int b=0;




    for( int a=0;a<tam ; a++)
    {
       if(a%7!=0 || a%10!=7){
        V[a]=a;
        aux++;
       }
      if(a%10==7||a%7==0)
        V[a]=0;
}

for( int a=0;a<tam ; a++){
    printf("%d ",V[a]);
}

printf("\n%d",aux);
}



