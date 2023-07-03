/*
Escreva um programa que solicite ao usuário um número inteiro positivo. O programa deve calcular a soma dos dígitos desse número.

O programa deve seguir as seguintes etapas:

Solicitar ao usuário um número inteiro positivo.
Utilizar o comando 'for' para percorrer cada dígito do número.
Extrair cada dígito do número e somá-lo à soma acumulativa.
Ao final do laço, exibir a soma dos dígitos.
*/

#include <stdio.h>
int main(){

int num, soma, digito;

printf("Digite um numero inteiro: ");
scanf("%d", &num);

for(; num>0 ; num /=10){
    digito = num % 10;
    soma += digito;
}

printf("A soma dos digitos é: %d", soma);

} 