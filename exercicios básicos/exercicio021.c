/*
Faça um Programa para uma loja de tintas.

O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.

Considere que a cobertura da tinta é de 1 litro para cada 6 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00 ou em galões de 3,6 litros, que custam R$ 25,00.

Informe ao usuário as quantidades de tinta a serem compradas e os respectivos preços em 3 situações:

comprar apenas latas de 18 litros;
comprar apenas galões de 3,6 litros;
misturar latas e galões, de forma que o preço seja o menor.
    Acrescente 10% de folga e sempre arredonde os valores para cima,
    isto é, considere latas cheias.
*/

#include <stdio.h>
int main(){

float valor_latas, valor_galoes, rend_lata, preco_lata, rend_galao, preco_galao, tamanho, preco_latasegaloes, galoes, latas;

rend_lata = 6 * 18;
preco_lata = 80;
rend_galao = 3.6 * 6;
preco_galao = 25;


printf("Digite o tamanho em m2 da aerea a ser pintada: ");
scanf("%f", &tamanho);

latas = tamanho / rend_lata;
galoes = tamanho/ rend_galao;
valor_latas = latas * 80;
valor_galoes = galoes * 25;


printf("comprar %.2f Latas, custanto R$%.2f\n", latas, valor_latas);
printf("Comprar %.2f Galões, custanto R$%.2f\n", galoes, valor_galoes);

return 0;


}