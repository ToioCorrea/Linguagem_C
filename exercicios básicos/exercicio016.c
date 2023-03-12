/*
Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre: o produto do dobro do primeiro com metade do segundo. a soma do triplo do primeiro com o terceiro. o terceiro elevado ao cubo.
*/

#include <stdio.h>
int main(){

int num1, num2;
float real, a, b, c;

printf("Digite 2 numeros inteiros e um numero real: ");
scanf("%i%i%f", &num1, &num2, &real);

a = (num1*2) + (num2/2);
b = (num1*3)+real;
c = real*real*real;


printf("O produto do dobro do primeiro com ametade do segundo: %.2f\n", a);
printf("Soma do triplo do primeiro com o terceiro: %.2f\n", b);
printf("Terceiro numero elevado ao cubo: %.2f\n", c);

return 0;

}