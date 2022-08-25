//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL, "");
    int tam=5;
    float A[tam];
    float B[tam];
    float escalar;






    for(int a=0; a<tam; a++)
    {
        printf("VETOR A posição %d\n",a);
        scanf("%f",&A[a]);
        printf("VETOR B posição %d\n",a);
        scanf("%f",&B[a]);



        }





for (int a=0;a<tam;a++){
        escalar=escalar+(A[a]*B[a]);

}

printf("\nVETOR A: %.1f %.1f %.1f %.1f %.1f \n",A[0],A[1],A[2],A[3],A[4]);
printf("\nVETOR B: %.1f %.1f %.1f %.1f %.1f \n",B[0],B[1],B[2],B[3],B[4]);
printf("Produto escalar: %.1f",escalar);




}


