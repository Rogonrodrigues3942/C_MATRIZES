/*Calculo de Média : 8 alunos - página 105*/

#include <stdio.h>

int main(){

    float md[8];
    float media = 0, soma = 0;
    int i;

    printf("\nCalculo de media escolar\n\n");

    for (i = 0; i <= 7; i++){
        printf("Informe a %d.a nota:  ", i+ 1);
        scanf("%f", &md[i]);
        soma += md[i];
    }

    printf("%5.2f", soma);

     media = (float)soma /8;
    printf("\nMedia do grupo equivale a: %6.2f.\n\n", media);
    
    return 0;
}