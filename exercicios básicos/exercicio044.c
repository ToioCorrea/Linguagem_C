/*
Escreva um programa que solicite ao usuário um número inteiro e verifique se o número é positivo. Se o número for positivo, exiba uma mensagem na tela indicando que o número é positivo. Caso contrário, não faça nada.
*/

#include <stdio.h>
int main(){

int num;

printf("Digiteum numero inteiro: ");
scanf("%d", &num);

if(num>=0){
    printf("O numero é positivo\n");
}

return 0;
}