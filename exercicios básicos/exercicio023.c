/*Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo*/

#include <stdio.h>
int main()
{
float num;    
    printf("Digite um numero: ");
    scanf("%f", &num);

    if(num > 0)
    printf("O valor é positivo");
    else
    printf("O valor é negativo");

    return 0;
}