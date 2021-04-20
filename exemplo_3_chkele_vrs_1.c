//Soma de elementos impares de um vetor - pag 108

#include <stdio.h>

int main(){

    int i, soma = 0, a[5];

    printf("\n\nSoma de elementos impares\n\n");

    //Entrada de dados
    for( i = 0; i < 5; i++){
        printf("Insira o %2d.o elemento: ", i + 1);
        scanf("%d", &a[i]);
    }

    //Processando dados
    for(i = 0; i < 5; i++){
        if(a[i] % 2 != 0)
            soma += a[i];
    }

    printf("\nO total soma dos impares equivale a: %d.\n\n", soma);

    return 0;
}