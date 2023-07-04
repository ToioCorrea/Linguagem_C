/*
Escreva um programa que solicite ao usuário um número inteiro positivo e calcule a soma de todos os números pares entre 1 e esse número (inclusive). O programa deve exibir a soma na tela.
*/

#include <stdio.h>
int main(){

int num, soma=0;

printf("Digite um numero: ");
scanf("%d", &num);

do {
    soma += num;
}
while(num % 2 == 0);

printf("Soma: %d", soma);

return 0;

}