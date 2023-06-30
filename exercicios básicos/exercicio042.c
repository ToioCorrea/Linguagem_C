/*
Exercício de Impressão de Padrão:
Desenvolva um programa que use um loop 'for' para imprimir o seguinte padrão na tela:
*
**
***
****
*****

*/

#include <stdio.h>
int main(){

int numLinhas, i, j;

    printf("Digite o número de linhas do padrão: ");
    scanf("%d", &numLinhas);

    for (i = 1; i <= numLinhas; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}