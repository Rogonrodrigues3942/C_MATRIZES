/*Calculo de Média : 8 alunos - página 105*/

#include <stdio.h>

int main(){

    float md[4];
    float soma = 0, media =0;
    int i;

    printf("\n\nPrograma calculo de media\n\n");

    for(i = 0; i <= 3; i++){
        printf("Insira a %d.a nota: ", i + 1);
        scanf("%f", &md[i]);
        soma += md[i];
    }

    media = (float) soma / 4;
    printf("\nA media da classe equivale a: %6.2f.\n\n", media);

    return 0;
}