/*Checa indice:par ou impar - pag 106*/
#include <stdio.h>

int main (){

    int a[6], b[6];
    int i;

    printf("\n\nCalculo com checagem do indice da matriz\n\n");

    //Entrada de dados
    for( i = 0; i < 6; i++){
        printf("Informe um valor para o elemento nr. %2d: ", i);
        scanf("%d", &a[i]);
    }

    //Processamento par ou impar
    for(i = 0; i < 6; i++){
        if( i % 2 == 0)
            b[i] = a[i] * 5;
        else 
            b[i] = a[i] + 5;
    }

    //Apresentando as matrizes
    for(i = 0; i < 6; i++)
        printf("\na[%2d] = %2d | b[%2d] = %2d", i + 1, a[i], i + 1, b[i]);
    return 0;
}