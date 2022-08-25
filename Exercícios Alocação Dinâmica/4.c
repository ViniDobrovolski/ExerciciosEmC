#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void stringfun(int x)
{
    char *s;

    s=(char*) malloc(x*sizeof(char));

    printf("\nDigite a sua string de tamanho %d:\n",x-1);

    fflush(stdin);
    gets(s);

    printf("\n%s\n",s);

    for (int a=0;s[a]!='\0';a++)
    {
        if(s[a]!='a'&& s[a]!='A' && s[a]!='e' && s[a]!='E' && s[a]!='i' && s[a]!='I' && s[a]!='o' && s[a]!='O' && s[a]!='u' && s[a]!='U'){

             printf("%c",s[a]);
        }
        else{

             printf("*");
        }
    }


}

int main()
{
    setlocale(LC_ALL, "");

    int tamstr;

    printf("Digite o tamanho da string:\n");
    scanf("%d",&tamstr);

    stringfun(tamstr);



}
