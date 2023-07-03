/*
Escreva um programa que solicite ao usuário um número inteiro positivo e faça uma contagem regressiva a partir desse número até zero. O programa deve exibir cada número da contagem regressiva na tela.
*/

#include <stdio.h>
int main(){

int num;


printf("Digite um numero: ");
scanf("%d", &num);

while(num>=0){
    printf(" %d ", num);
    num--;
}

return 0;

}