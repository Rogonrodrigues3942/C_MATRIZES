/*Pede dados pessoais - fgets()*/

#include <stdio.h>

int main(void)
{
    char nome[20], sb_nome[20];

    puts("Informe seu nome ..........: ");
    fgets(nome, 20, stdin);
    puts("Informe seu sobre nome ....: ");
    fgets(sb_nome, 20, stdin);

    printf("\n\nSeja bem vindo %s %s!!\n\n", nome, sb_nome);
    
    return 0;
}