/*
Escreva um programa que solicite ao usuário as medidas dos três lados de um triângulo e determine o tipo de triângulo formado. O programa deve verificar as seguintes condições:

Se todos os lados forem iguais, exiba a mensagem "Triângulo equilátero".
Se pelo menos dois lados forem iguais, exiba a mensagem "Triângulo isósceles".
Caso contrário, exiba a mensagem "Triângulo escaleno".
*/

#include <stdio.h>
int main(){

float lado1, lado2, lado3;

printf("Digite os três lados de um Triângulo: ");
scanf("%f%f%f", &lado1, &lado2, &lado3);


if(lado1==lado2 && lado1==lado3){
    printf("Triângulo Equilátero\n");
}
else if(lado1==lado2 || lado2==lado3 || lado3==lado1){
    printf("Triângulo Isósceles\n");
}
else{
    printf("Triângulo Escaleno\n");
}

return 0;
}
