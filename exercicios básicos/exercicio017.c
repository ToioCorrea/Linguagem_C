/*
Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula:
(72.7*altura) - 58
*/

#include <stdio.h>
int main(){

float altura, peso_ideal;

printf("Digite sua altura: ");
scanf("%f", &altura);

peso_ideal = (72.7 * altura) - 58;

printf("Seu peso ideal é: %.2fKg", peso_ideal);


}