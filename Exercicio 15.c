#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    char sexo;
    int idade;
    int contri;

    printf ("Digite M se � do sexo masculino ou F se � do sexo feminino:\n");
    scanf("%c",&sexo);

    printf ("Digite a sua idade:\n");
    scanf("%d",&idade);

    printf ("Digite o seu tempo de contribui��o:\n");
    scanf("%d",&contri);

    if (sexo=='m')
    {
        if (idade>= 63 && idade <65)
        {
            if (contri >= 15)
                printf ("Aposent�vel");
            else
                printf ("N�o Aposent�vel");
        }

        else if (idade >= 65)
        {
            if (contri>= 10)
                printf ("Aposent�vel");
            else
                printf ("N�o Aposent�vel");
        }
    }
   else if (sexo=='f')
        if (idade>= 61 && idade <63)
        {
            if (contri >= 15)
                printf ("Aposent�vel");
            else
                printf ("N�o Aposent�vel");
        }
       else if (idade >= 63)
        {
            if (contri>= 10)
                printf ("Aposent�vel");
            else
                printf ("N�o Aposent�vel");
        }

}
