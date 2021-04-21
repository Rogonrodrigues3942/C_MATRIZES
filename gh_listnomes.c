/*Leitura e escrita de 10 nomes.*/

#include <stdio.h>

int main (void)
{
    int i;
    char nome[10][40];

    puts("\n\nListagem de nomes\n\n");

    //Entrada de dados

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %2d.o nome ....: ", i + 1);
        fflush(stdin);
        fgets(nome[i], 40, stdin);
    }

    /*Apresentação de nomes*/
    for(i = 0; i < 10; i++)
        printf("Nome ..: %2d.o ---> %s", i + 1, nome[i]);

    return 0;
}