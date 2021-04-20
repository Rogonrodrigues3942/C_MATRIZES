//Soma de elementos impares de um vetor - pag 108

#include <stdio.h>

int main (){

    int a[5];
    int soma = 0, i;

    printf("Somatorio de elementos impares\n\n");

    //Entrada de dados
    for(i = 0; i < 5; i++){
        printf("Informe um valor para o elemento nr.%2d: ", i);
        scanf("%d", &a[i]);
    }

    //Processamento elemento impar
    for(i = 0; i < 5; i++){
        if(a[i] % 2 != 0)
            soma += a[i];
    }

    //Apresentando as soma
    printf("\nA soma dos elementos equivale a: %4d\n\n", soma);

    return 0;
}