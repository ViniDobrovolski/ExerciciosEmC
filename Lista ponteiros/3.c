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
    printf("Endere�o de A:%d e endere�o de B: %d\n",ptrA,ptrB);
    printf ("O endere�o de A � maior");
}
else
    if(ptrB>ptrA){
    printf("Endere�o de A:%d e endere�o de B: %d\n",ptrA,ptrB);
    printf ("O endere�o de B � maior");
}

}
