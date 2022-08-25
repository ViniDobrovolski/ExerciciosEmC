//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL, "");
    int tam=50;
    int A[tam];






    for(int a=0; a<tam; a++)
    {
        A[a]=(a+ 5 * a)%(a+ 1);
    }



for (int a=0;a<tam;a++){

        printf ("%d ",A[a]);

    }

}


