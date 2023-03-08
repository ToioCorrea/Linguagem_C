/*
Utilizando as funções printf() e scanf(), escreva um código para calcular:

A média aritmética de quatro números inteiros. Solicite os quatro números ao usuário com apenas duas linhas de comando. A média deve ser apresentada na tela da seguinte forma: Média aritmética entre ?, ?, ? e ? = ?.

*/

#include <stdio.h>
int main(){

int media , num1, num2, num3, num4;

printf("Digite quatro numeros: ");
scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

media = (num1 + num2 + num3 + num4)/4;

printf("Média aritmética entre %d, %d, %d e %d = %d", num1,num2,num3,num4,media);

}