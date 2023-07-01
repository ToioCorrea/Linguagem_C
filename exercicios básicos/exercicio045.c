/*
Escreva um programa que solicite ao usuário um número inteiro e verifique se o número é par ou ímpar. Se o número for par, exiba uma mensagem na tela indicando que o número é par. Caso contrário, exiba uma mensagem indicando que o número é ímpar.
*/

#include <stdio.h>
int main(){

int num;

printf("Digite um numero inteiro: ");
scanf("%d", &num);

if(num % 2 == 0){
    printf("O numero %2d é par\n", num);
}
else{
    printf("O numero %2d é impar\n", num);
}

return 0;
}

