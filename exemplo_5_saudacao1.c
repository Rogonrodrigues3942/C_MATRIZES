//Pede dados pessoais - pagina 114

#include <stdio.h>

int main(){

    char nome[10], sb_nome[15];

    printf("Informe seu nome ......: ");
    scanf("%s", nome);
    printf("Informe seu sobre nome .: ");
    scanf("%s", sb_nome);
    printf("Seja bem vindo, %s %s\n\n", nome, sb_nome);

    return 0;
}