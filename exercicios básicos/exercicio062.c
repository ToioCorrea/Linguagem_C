/*
Escreva um programa que solicite ao usuário um número inteiro positivo N e, em seguida, faça uma contagem regressiva a partir desse número até zero. O programa deve imprimir cada número no processo.
*/

#include <stdio.h>
int main(){

int num;


printf("Digite um numero: ");
scanf("%d", &num);

while(num>=0){
    printf(" %d ", num); 
    num --;
}

return 0;

}