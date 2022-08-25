//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "");
    int A[5];
    int max=0,min=10000000;
    int pos1=0,pos2=0;





    for(int a=0; a<5; a++)
    {
        scanf("%d",&A[a]);

        if(A[a]>max)
        {
            max=A[a];
            pos1=a;
        }
        if(A[a]<min)
        {
            min=A[a];
            pos2=a;
        }




    }


    printf("A posição do maior valor foi: %d\n",pos1);
    printf("A posição do menor valor foi: %d\n",pos2);


}


