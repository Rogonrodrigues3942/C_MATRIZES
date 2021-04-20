/*Calculo de Media de 8 alunos com 4 notas - páginas 111 e 112*/

#include <stdio.h>

int main(){

    float md[8][4], numero;
    int i, j;

    printf("\n\nLeitura de notas\n\n");
    
    //Entrada das notas
    for(i = 0; i < 8; i++){
        printf("\nInforme as notas do %d.o aluno: \n", i + 1);
        for(j = 0; j < 4; j++){
            printf("%d.a nota: ", j + 1);
            scanf("%f", &numero);
            md[i][j] = numero;
        }
    }

    //Saída das notas]
    for(i = 0; i < 8; i++){
        printf("\n As notas do %d.o sao: \n\n", i + 1);
        for(j = 0; j < 4; j++)
            printf("%d.a nota: %5.2f \n", j + 1, md[i][j]);
    }

    return 0;
}