/*Leitura, escrita e ordenação - alfabética - pagina 127*/

#include <stdio.h>
#include <string.h>

int main(){

    int i, j;
    char nome[10][40], x[40];
    printf("\nListagem de nomes\n\n");

    /*Entrada de dados*/
    for(i = 0; i <= 9; i++){
        printf("Digite o %2d.o nome: ", i + 1);
        fflush(stdin);
        fgets(nome[i], 40, stdin);
    }

    /*Ordenação de strings - Processamento*/
    for(i = 0; i <= 8; i++)
        for(j = i + 1; j <= 9; j++)
            if(strcmp(nome[i], nome[j]) > 0){
                strcpy(x, nome[i]);
                strcpy(nome[i], nome[j]);
                strcpy(nome[j], x);
            }
    
    /*Apresentando ordenação*/
    for(i = 0; i <= 9; i++)
        printf("Nome: %2d.o --> %s", i + 1, nome[i]);
}