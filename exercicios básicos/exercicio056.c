/*
Escreva um programa que solicite ao usuário um número de 1 a 7 representando um dia da semana. O programa deve exibir o nome do dia correspondente ao número fornecido.

O programa deve seguir as seguintes regras:

Se o número for 1, exiba "Domingo".
Se o número for 2, exiba "Segunda-feira".
Se o número for 3, exiba "Terça-feira".
Se o número for 4, exiba "Quarta-feira".
Se o número for 5, exiba "Quinta-feira".
Se o número for 6, exiba "Sexta-feira".
Se o número for 7, exiba "Sábado".
Se o número estiver fora do intervalo de 1 a 7, exiba "Número inválido".
O programa deve utilizar a estrutura 'switch' para realizar a verificação e exibir o nome do dia correspondente.
*/

#include <stdio.h>
int main(){

int num;

printf("Digite um numero de 1 a 7 para representar o dia da semana: ");
scanf("%d", &num);

switch(num)
{
    case '1':
    printf("Domingo");
    break;
    
    case '2':
    printf("Segunda-feira");
    break;

    case '3':
    printf("Terça-feira");
    break;

    case '4':
    printf("Quarta-feira");
    break;

    case '5':
    printf("Quinta-feira");
    break;

    case '6':
    printf("Sexta-feira");
    break;

    case'7':
    printf("Sábado");
    break;

    default:
    printf("Numero Inválido");

}

}