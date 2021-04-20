//Pede dados pessoais - scanf() - nome completo - pagina 117

#include <stdio.h>

int main(){

    char nome[40];

    printf("Entre o nome completo: ");
    scanf("%[^\n]", nome);
    printf("Ola, %s", nome);

    return 0;
}
