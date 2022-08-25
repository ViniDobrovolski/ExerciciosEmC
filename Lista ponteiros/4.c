#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ponteiro(int *a,int b)
{
    *a = *a+b;

}

int main()
{
    setlocale(LC_ALL, "");
    int a=1,b=2;

    int *ptrA;
    *ptrA=&a;

    ponteiro(*ptrA,b);

    printf("Valor de A: %d",a);



}
