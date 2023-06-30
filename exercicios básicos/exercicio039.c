/*
Escreva um programa que utilize um loop 'for' para calcular a soma de todos os números pares de 1 a 100 e exiba o resultado final.
*/

#include <stdio.h>
int main(){

int i, soma=0;

for(i=1 ; i<=100 ; i++){
if(i % 2 == 0)
soma += i;
}
printf("A soma de todos os numero pares é: %d", soma);


return 0;
}



