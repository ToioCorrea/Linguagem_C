/*
Escreva um programa que solicite ao usuário um número inteiro positivo N. O programa deve calcular a soma de todos os números pares no intervalo de 1 a N.

O programa deve seguir as seguintes etapas:

Solicitar ao usuário um número inteiro positivo N.
Utilizar o comando 'for' para percorrer todos os números no intervalo de 1 a N.
Verificar se cada número é par.
Se o número for par, adicionar o valor à soma acumulativa.
Ao final do laço, exibir a soma acumulativa dos números pares.
*/

#include <stdio.h>
int main(){


int i, num;
int soma;


printf("Digite um numero: ");
scanf("%d", &num);

for(i = 1 ; i<=num ; i++)
    if(i % 2==0){
    soma +=i;
    }

printf("Soma acumulativa do numeros pares de 1 a %d é: %d",num,soma);

return 0;

}