#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tempr;
    double vlr_tmp;
    double result;

    printf("Digite F para Fahrenheit ou C para Celsius:\n");
    scanf("%c",&tempr);

    if (tempr=='c'){

        printf("Qual o valor da temperatura?\n");
        scanf("%lf",&vlr_tmp);
        result= (vlr_tmp*1.8)+32;
        printf("O valor da temperatura convertido em Fahrenheit eh: %.2lf", result);
    }

  else if (tempr=='f'){

        printf("Qual o valor da temperatura?\n");
        scanf("%lf",&vlr_tmp);
        result= (vlr_tmp-32)/1.8;
        printf("O valor da temperatura convertido em Celsius eh: %.2lf", result);

  }


    }
