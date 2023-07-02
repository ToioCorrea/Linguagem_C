/*
Exercício de Calculadora Simples:
Escreva um programa que solicite ao usuário dois números e um operador matemático (+, -, *, /). O programa deve realizar a operação matemática especificada pelo usuário e exibir o resultado.

O programa deve seguir as seguintes etapas:

Solicitar ao usuário dois números e o operador matemático.
Utilizar a estrutura 'switch' para identificar o operador e realizar a operação matemática correspondente (+ para adição, - para subtração, * para multiplicação, / para divisão).
Exibir o resultado da operação na tela.
*/

#include <stdio.h>
int main(){


int num1, num2, op;

printf("Digite dois numeros: ");
scanf("%d%d", &num1, &num1);

printf("Digite um operador: + - * / ");
op=getchar();

switch(op)
{
    case '+':
    printf("Adição = %d\n", num1+num2);
    break;

    case '-':
    printf("Subtração = %d\n", num1-num2);
    break;

    case '*':
    printf("Multiplicação = %d\n", num1*num2);
    break;

    case '/':
    printf("Divisão = %d\n", num1/num2);
    break;

    default:
    printf("Operador não reconhecido\n");
}

return 0;


}