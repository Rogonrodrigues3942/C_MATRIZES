/*Escreve numeros ordenados - página 124*/

#include <stdio.h>

int main(){

    int num[5], i, j, x;

    puts("\n\nClassificacao em ordem crescente no vetor\n\n");

    //Entrada de dados
    for (i = 0; i <= 4; i++){
        printf("Entre com %2d.o valor: ", i + 1);
        fflush(stdin);
        scanf("%d", &num[i]);
    }

    //Processamento - classificando o vetor em ordem crescente
    for(i = 0; i < 4; i++)
        for(j = i + 1; j < 5; j++)
            if(num[i] > num[j]){
                x = num[i];
                num[i] = num[j];
                num[j] = x;
            }
    
    //Apresentando o vetor ordenado
    printf("\n\nnum[5] = ");
    for(i = 0; i < 5;  i++)
        printf("%d ", num[i]);
    

    return 0;
}