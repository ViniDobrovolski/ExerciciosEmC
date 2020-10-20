
//Resposta: A solução não está correta pois está com condições erradas e encadeamento errado do ELSE-IF.
// O Correto seria:

#include <stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
int a;
printf("Digite um número inteiro:");
scanf("%d", &a);
if( ( a % 2 == 0) && (a<100) )
printf("O número é par e menor que 100\n");
else if  (( a % 2 == 0) &&( a>=100 ))
printf("O número é par e maior ou igual a 100\n");
else if( ( a % 2 != 0) && (a<100) )
printf("O número é ímpar e menor que 100\n");
else if (( a % 2 != 0) && (a>=100))
printf("O número é ímpar e maior que 100\n");
}

