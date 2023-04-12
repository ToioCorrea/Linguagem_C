/*Faça um Programa que peça dois números e imprima o maior deles.*/

#include <stdio.h>
int main()
{
float num, num1, num2;

    printf("Digite do numeros: ");
    scanf("%f %f", &num1, &num2);
    num = num1 > num2 ? num1 : num2;
    printf("O maior numero digitado é: %.2f ", num);

return 0;
}