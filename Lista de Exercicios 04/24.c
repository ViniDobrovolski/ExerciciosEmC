//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL, "");
    int tam=5;
    int A[tam];
    float B[tam];
    float max=0;
    int nummax;
    float min=3;
    int nummin;


    for(int a=0; a<tam; a++)
    {
        printf("Numero do aluno %d:\n",a);
        scanf("%d",&A[a]);
        printf("Altura do aluno %d:\n",a);
        scanf("%f",&B[a]);
        }





for (int a=0;a<tam;a++){
        if(B[a]>max){
            max=B[a];
            nummax=a;
        }
        if(B[a]<min){
            min=B[a];
            nummin=a;
        }
}

printf("\nAluno mais baixo: %d com a altura %.1f\n",A[nummin],B[nummin]);

printf("Aluno mais alto: %d com a altura %.1f",A[nummax],B[nummax]);



}


