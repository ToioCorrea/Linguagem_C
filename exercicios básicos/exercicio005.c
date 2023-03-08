/*Faça um programa que converta metros para centimetros*/

#include <stdio.h>
int main(){

float metros , centimetros;

printf("Digite o valor em metros: ");
scanf("%f", &metros);

centimetros = metros * 100;

printf("%.2f metros equivalem %.2f centimetros", metros, centimetros);

return 0;

}