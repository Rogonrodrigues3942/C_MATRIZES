/*Leitura e escrita de 10 nomes - pag 118 - função fflush()*/

#include <stdio.h>

int main(){

    int i;
    char nome[10][40];

    printf("\n\nListagem de nomes\n\n");

    //Entrada de dados
    for(i = 0; i <= 9; i++){
        printf("Digite o %02d.o nome: ", i + 1) ;
        fflush(stdin);
        fgets(nome[i], 40, stdin);
        //scanf("%40[^\n]", nome[i]);
    }

    printf("\n");
    
    //Apresentação dos nomes
    for(i = 0; i <= 9; i++)
        printf("Nome: %2d --> %s", i + 1, nome[i]);
        
    return 0;
}