
//Resposta: A solu��o n�o est� correta pois est� com condi��es erradas e encadeamento errado do ELSE-IF.
// O Correto seria:

#include <stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
int a;
printf("Digite um n�mero inteiro:");
scanf("%d", &a);
if( ( a % 2 == 0) && (a<100) )
printf("O n�mero � par e menor que 100\n");
else if  (( a % 2 == 0) &&( a>=100 ))
printf("O n�mero � par e maior ou igual a 100\n");
else if( ( a % 2 != 0) && (a<100) )
printf("O n�mero � �mpar e menor que 100\n");
else if (( a % 2 != 0) && (a>=100))
printf("O n�mero � �mpar e maior que 100\n");
}

