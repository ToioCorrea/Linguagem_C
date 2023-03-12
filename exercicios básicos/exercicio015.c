/*Escreva um programa em C que receba a idade do usuário em anos e imprima na tela sua idade em minutos (desconsidere a existência de anos bissextos)
*/

#include <stdio.h>
int main(){

int idade;
float minutos;

printf("Digite sua idade em anos: ");
scanf("%d", &idade);

minutos = idade * 24 * 60 * 365;

printf("Sua idade em minutos é: %.2f", minutos);

return 0;
}