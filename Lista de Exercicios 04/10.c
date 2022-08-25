//Vinicius Dobrovolski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "");
    int alunos=15;
    int A[alunos];
    float media;


printf("Digite as notas dos alunos: \n");

    for(int a=1; a<=alunos; a++)
    {
        printf("Nota do aluno %d :\n",a);
        scanf("%d",&A[a]);
        media=media+A[a];


    }
    media=media/alunos;

    printf("A media geral da turma foi: %.1f",media);

    }


