/*
Escreva um programa que solicite ao usuário as medidas dos três lados de um triângulo e determine se o triângulo é equilátero, isósceles ou escaleno. Além disso, se o triângulo for isósceles, verifique se ele também é isósceles retângulo (possui dois lados iguais e um ângulo reto). O programa deve exibir a classificação correspondente ao triângulo informado.

O programa deve seguir as seguintes regras:

Se todos os lados forem iguais, exiba a mensagem "Triângulo equilátero".
Se pelo menos dois lados forem iguais, exiba a mensagem "Triângulo isósceles".
Se todos os lados forem diferentes, exiba a mensagem "Triângulo escaleno".
Se o triângulo for isósceles e também possuir um ângulo reto, exiba a mensagem "Triângulo isósceles retângulo".
*/

#include <stdio.h>
int main(){

float lado1, lado2, lado3;

printf("Digite os três lados de um Triângulo: ");
scanf("%f%f%f", &lado1, &lado2, &lado3);

if(lado1==lado2 && lado1==lado3){
    printf("Triângulo Equilátero\n");
}
else if(lado1==lado2 ||lado2==lado3||lado1==lado3){
    printf("Triângulo iśosceles\n");{
    if(lado1>lado2+lado3 || lado2>lado1+lado3 || lado3> lado1+lado2)
        printf("Triângulo Iósceles Retângulo\n");
    }
}
else{
    printf("Triãngulo Escaleno\n");
}

return 0;
}
