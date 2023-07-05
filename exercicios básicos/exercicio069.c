/*
Escreva um programa que declare um vetor de números inteiros com tamanho 5. Em seguida, solicite ao usuário que digite os valores para preencher o vetor. Por fim, o programa deve calcular e exibir a soma de todos os elementos do vetor.
*/

#include <stdio.h>
int main(){

int vet[5];
int i, soma=0;

printf("Digite valores para preencher o vetor: ");

for(i=0 ; i<5 ;i++){
    scanf("%d", vet[i]);
    soma += vet[i];
}

printf("Soma = %d", soma);

return 0;

}