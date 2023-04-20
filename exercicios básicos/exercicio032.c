/*Faça um Programa que peça os 3 lados de um triângulo. O programa deve informar se os valores podem ser um triângulo. Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.

Dicas: Três lados formam um triângulo quando a soma de quaisquer dois lados for maior que o terceiro; Triângulo Equilátero: três lados iguais; Triângulo Isósceles: todos os dois lados iguais; Triângulo Escaleno: três lados diferentes*/

//USANDO IF-ELSE

#include <stdio.h>
int main()
{
float soma, lado1, lado2, lado3;

    printf("Digite os 3 lados do Triângulo: ");
    scanf("%f%f%f", &lado1, &lado2, &lado3);

if((lado1+lado2 > lado3) && (lado2 +lado3 > lado1) && (lado1 +lado3 > lado2)){

if((lado1 == lado2) && (lado2== lado3))
printf("Triângulo Equilátero");
else if((lado1 == lado2) || (lado2 == lado3) || (lado3==lado1))
printf("Triângulo Isósceles");
else
printf("Triangulo Escaleno");
}

else 
printf("Não é Triângulo!");




}