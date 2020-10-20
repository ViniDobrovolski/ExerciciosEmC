#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    int troca;

    printf("Digite um valor para a variavel x:\n");
    scanf("%d", &x);

    printf("Digite um valor para a variavel y:\n");
    scanf("%d",&y);

    troca= x;
    x= y;
    y= troca;


    printf("Os valores invertidos das variaveis x e y sao respectivamente:%d %d",x,y);



}
