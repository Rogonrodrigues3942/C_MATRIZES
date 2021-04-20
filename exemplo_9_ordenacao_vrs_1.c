/*Escreve numeros ordenados - 2ª versão - página 124*/

#include <stdio.h>

int main(){

    int num[5], i, j, x;

    puts("\n\n\tClassificacao em ordem crescente do vetor\n\n");

    //Entrada de dados - 1º laço for
    for(i = 0; i < 5; i++){
        printf("Insira o %2d.o valor: ", i + 1);
        fflush(stdin);
        scanf("%d", &num[i]);
    }

    //Processamento - classificação dos valores em ordem crescente no vetor
    for(i = 0; i <= 3; i++)
        for(j = i + 1; j <= 4; j++) //este trecho compara os os elementos nas posições posteriores a num[i]
            if(num[i] > num[j] ){
                x = num[i];
                num[i] = num[j];
                num[j] = x;
            }

    //Saída do processamento dos dados
    for(j = 0; j <= 4; j++)
        printf("\nO valor do %2d.o elemento: %d.", j + 1, num[j] );

    printf("\n\n");

    return 0;
}
