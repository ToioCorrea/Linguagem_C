/*
Escreva um programa que solicite ao usuário um número inteiro positivo e verifique se esse número é primo. O programa deve exibir uma mensagem indicando se o número é primo ou não.
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int numero;
    bool primo = true;
    int i = 2;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    do {
        if (numero % i == 0) {
            primo = false;
            break;
        }
        i++;
    } while (i < numero);

    if (primo) {
        printf("%d é um número primo.\n", numero);
    } else {
        printf("%d não é um número primo.\n", numero);
    }

    return 0;
}