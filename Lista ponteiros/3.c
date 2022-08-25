#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "");

int a,b;

printf("Digite um valor para A e um valor para B respectivamente\n");
scanf("%d\n%d",&a,&b);

int *ptrA=&a,*ptrB=&b;

if(ptrA>ptrB)
{
    printf("Endereço de A:%d e endereço de B: %d\n",ptrA,ptrB);
    printf ("O endereço de A é maior");
}
else
    if(ptrB>ptrA){
    printf("Endereço de A:%d e endereço de B: %d\n",ptrA,ptrB);
    printf ("O endereço de B é maior");
}

}
