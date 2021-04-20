/*Calculo de Media de 8 alunos com 4 notas - páginas 111 e 112*/

#include <stdio.h>

int main(){

    //declaração de variáveis
    float nota[8][4], valor;
    int i, j;

    puts("\nPrograma de notas escolares\n");
    
    //Entrada de dados
    for(i = 0; i < 8; i++){
        printf("\nInsira as notas do %d.o aluno: \n ", i + 1);
        for(j = 0; j < 4; j++){
            printf("%d.a nota: ", j + 1);
            scanf("%f", &valor);
            nota[i][j] = valor;
        }
    }

    //Saída de dados
    for(i = 0; i < 8; i++){
        printf("\n%d.o aluno as notas sao: ", i + 1);
        for(j = 0; j < 4; j++){
            printf("%6.3f ", nota[i][j]);

        }
    }

    return 0;
}