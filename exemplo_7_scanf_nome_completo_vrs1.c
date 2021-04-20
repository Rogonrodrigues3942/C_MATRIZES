//Pede dados pessoais - scanf() - nome completo - pagina 117 - versao 1

#include <stdio.h>

int main(){

    char nome[40];

    puts("\nInsira o nome completo: ");
    scanf("%[^\n]", nome);
    printf("\nOla, %s!!\n\n", nome);
    
    return 0;
}