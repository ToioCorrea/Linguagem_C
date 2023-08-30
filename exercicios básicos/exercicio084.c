/*
Escreva um programa que solicite ao usuário que digite uma frase ou uma palavra. O programa deve contar quantos caracteres (incluindo espaços) a frase ou palavra possui e exibir esse número na tela
*/

#include <stdio.h>
#include <string.h>
int main(){

char frase [20];

printf("Digite uma frase ou palavra:");
scanf(" %[^\n]", frase);
printf("Foi digitado %s, que contém %ld caracteres", frase, strlen(frase));


return 0;
}