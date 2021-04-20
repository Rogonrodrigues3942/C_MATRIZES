//Pede dados pessoais - fgets() - pagina 115 - 1ª versão

#include <stdio.h>

int main(){

    char nome[20], sb_nome[20];

    printf("\nInforme seu nome .......: ");
    fgets(nome, 20, stdin);
    printf("Informe seu sobre nome ...: ");
    fgets(sb_nome, 20, stdin);
    printf("\nSeja bem vindo, %s %s!!\n\n", nome, sb_nome);
    
    return 0;
}
