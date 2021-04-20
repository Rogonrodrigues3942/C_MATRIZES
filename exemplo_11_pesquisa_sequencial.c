//Pesquisa sequencial com caracteres - pág. 128 e 129

#include <stdio.h>
#include <string.h>

int main(){

    int i, acha;
    char nome[5][40], pesq[40], resp;
    printf("\nPesquisa sequencial de nomes\n\n");

    //Entrada de dados
    for(i = 0; i <= 4; i++)
    {
        printf("Digite o %2d.0 nome: ", i + 1);
        fflush(stdin);
        fgets(nome[i], 40, stdin);
    }

    //Processamento de pesquisa enquanto resp = 's'
    resp = 's';
    while(resp == 'S' || resp == 's'){
        printf("\n\nEntre o nome a ser pesquisado: ");
        fflush(stdin);
        fgets(pesq, 40, stdin);
        i = 0;
        acha = 0;

        while(i <= 4 && acha == 0)
            if(strcmp(pesq, nome[i]) == 0)
                acha == 1;
            else 
                i++;
        if ( acha == 1 )
            printf("\n%s foi localizado na posicao %d.", pesq, i + 1);
        else 
            printf("\n%s não foi localizado!!", pesq);
            printf("\n\nConitnua? [S]im ou [N]ão + <enter>: ");
            fflush(stdin);
            resp = getchar();
    }

    return 0;
}