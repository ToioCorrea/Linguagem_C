/*
Exercício de Fatorial:
Escreva um programa que receba um número inteiro positivo do usuário e calcule o fatorial desse número usando um loop 'for'. Em seguida, exiba o resultado na tela.

Lembre-se de que o fatorial de um número N é o produto de todos os números inteiros positivos de 1 até N. Por exemplo, o fatorial de 5 é calculado da seguinte forma: 5! = 5 x 4 x 3 x 2 x 1 = 120.

Você pode implementar esse exercício por conta própria, usando um loop 'for' para calcular o fatorial do número fornecido pelo usuário
*/

#include <stdio.h>
int main(){

int num, i;
unsigned long long fatorial = 1;


printf("Digite um numero inteiro: ");
scanf("%d", &num);

for(i=1 ; i<=num ; i++){
fatorial*=i;
}

printf("O fatorial de %d é: %llu\n", num,fatorial);

return 0;

}