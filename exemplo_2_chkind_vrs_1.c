/*Checa indice:par ou impar - pag 106*/

#include <stdio.h>

int main(){

    float a[6], b[6];
    int i;

    printf("\n\nCalculo de indices - par ou impar\n\n");

    //entrada de dados
    for(i = 0; i < 6; i++){
        printf("Insira o %d.o elemento: ", i + 1);
        scanf("%f", &a[i]);
    }

    //Processamento de dados
    for (i = 0; i < 6; i++){
        if(i % 2 == 0)
            b[i] = a[i] * 5;
        else 
            b[i] = a[i] + 5;
    }

    //Apresentando as matrizes
    for(i = 0; i < 6; i++)
        printf("\na[%2d] = %6.2f | b[%2d] = %6.2f", i + 1, a[i], i + 1, b[i]);

    return 0;
}