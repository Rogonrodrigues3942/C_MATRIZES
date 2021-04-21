/*Pede dados pessoais*/

#include <stdio.h>

int main (void)
{
    char nome[10], sb_nome[15];
    puts("Informe seu nome ............:");
    scanf("%s", nome);
    puts("Informe seu sobre nome ......:");
    scanf("%s", sb_nome);

    printf("Seja bem vindo %s %s!!\n\n", nome, sb_nome);

    return 0;

}