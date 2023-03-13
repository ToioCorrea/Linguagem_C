/*
Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.

Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00.

Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.
*/

#include <stdio.h>
int main(){

float tamanho, lata, preço_total, preço_lata, quantidade, litro;

printf("Digite o tamanho em m2 da área a ser pintada: ");
scanf("%f", &tamanho);

litro = 3;
lata = 18 * litro;
preço_lata = 80;
quantidade = (tamanho / lata);
preço_total = quantidade * preço_lata;

printf("A quantidade de latas a ser comprada é: %.2f\n", quantidade);
printf("Preço Total: %.2f", preço_total);

return 0;

}