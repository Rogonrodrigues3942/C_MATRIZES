//Soma de elementos impares de um vetor - pag 108

#include <stdio.h>

int main(){

    int a[5];
    int i, soma = 0;

    puts("Somatorio de elementos impares\n");

    //Entrada de dados
    for(i = 0; i < 5; i++){
        printf("Insira o %2d.0 elemento: ", i + 1);
        scanf("%d", &a[i]);
    }

    //Processamento de elementos
    for(i = 0; i < 5; i++){
        if(a[i] % 2 != 0)
            soma += a[i];
    }

    printf("\nO somatorio de elementos impares equivale a: %6d", soma);

    return 0;
}
