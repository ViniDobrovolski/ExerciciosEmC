#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "");

int a=1;
float b=2;
char c='c';

printf("INT:%d,FLOAT:%f,CHAR:%c\n",a,b,c);

int *ptrA=&a;
float *ptrB=&b;
char *ptrC=&c;

*ptrA = 2;
*ptrB = 3;
*ptrC = 'D';

printf("INT:%d,FLOAT:%f,CHAR:%c",a,b,c);


}
