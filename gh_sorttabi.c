/*Escreve numeros ordenados*/

#include <stdio.h>

int main (void)
{
    int numero[5], i, j, x;
    puts("\n\nClassificação de elementos numericos\n\n");

    //Entrada de dados
    for (i = 0; i < 5; i++)
    {
        printf("Informe o %d.0 valor:  ", i + 1);
        fflush(stdin);
        scanf("%d", &numero[i]);
    }

    //classificação - processamento:
    for(i = 0; i < 4; i++)
        for(j = i + 1; j < 5; j++)
            if (numero[i] > numero[j])
            {
                x = numero[i];
                numero[i] = numero[j];
                numero[j] = x;
            }
    
    //Apresentando dos dados
    puts("\n\n");
    for(i = 0; i < 5; i++)
        printf("%d ", numero[i]);
    
    puts("\n\n");

    return 0;
}