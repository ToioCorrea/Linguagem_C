/*
Exercício de Soma dos Dígitos:
Escreva um programa que solicite ao usuário um número inteiro positivo e calcule a soma de seus dígitos utilizando um loop 'for'. Exiba o resultado na tela.
*/

#include <stdio.h>
int main(){

int num, soma = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    while (num > 0) {
        soma += num % 10;  // Adiciona o último dígito ao total da soma
        num /= 10;  // Remove o último dígito do número
    }

    printf("A soma dos dígitos é: %d\n", soma);

    return 0;
}
