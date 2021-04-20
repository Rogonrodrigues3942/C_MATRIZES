/*Leitura, escrita e ordenação - alfabética - 2ª versão - página 127*/

#include <stdio.h>
#include <string.h>

int main(){

    int i, j;
    char nome[4][40], x[40];
    puts("\n\n\tListagem de Nomes Ordenados\n\n");

    //Entrada de dados
    for(j = 0; j <= 3; j++){
        printf("Insira o %02d.o nome: ", j + 1);
        fflush(stdin);
        fgets(nome[j], 40, stdin);
    }

    //Classificação por ordem alfabética - Processamento
    for(i = 0; i <= 2; i++)
        for(j = i + 1; j <=3; j++)
            if(strcmp(nome[i], nome[j]) > 0){
                strcpy(x, nome[i]);
                strcpy(nome[i], nome[j]);
                strcpy(nome[j], x);
            }

    //Apresentação de nomes classificação por ordem alfabética
    for(j = 0; j <= 3; j++)
        printf("\n%d.o nome --> %s", j + 1, nome[j]);

    return 0;
}
