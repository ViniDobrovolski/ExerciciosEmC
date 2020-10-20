#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int a,b,c,d,e,f;

    printf("digite o dia da primeira data:\n");
    scanf("%d",&a);

    printf("digite o mes da primeira data:\n");
    scanf("%d",&b);

    printf("digite o ano da primeira data:\n");
    scanf("%d",&c);

    printf ("A data é %d/%d/%d\n\n",a,b,c);

    printf("digite o dia da segunda data:\n");
    scanf("%d",&d);

    printf("digite o mes da segunda data:\n");
    scanf("%d",&e);

    printf("digite o ano da segunda data:\n");
    scanf("%d",&f);

    printf ("A segunda data é %d/%d/%d\n\n",d,e,f);

    if (f>c)
        printf("A primeira data é maior");

    else if (c>f)
        printf("A segunda data é maior");

    if (c==f)
    {
        if (e>b)
            printf("A primeira data é maior");
        else if (b>e)
            printf("A segunda data é maior");

        if (b==e)
        {
            if(d>a)
                printf("A primeira data é maior");
            else if (a>d)
                printf("A segunda data é maior");

        }
    }



}
