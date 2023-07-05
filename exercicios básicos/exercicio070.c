/*
Escreva um programa que declare um vetor de números inteiros com tamanho 7. Em seguida, solicite ao usuário que digite os valores para preencher o vetor. O programa deve encontrar e exibir o maior elemento presente no vetor.
*/

#include <stdio.h>
int main(){

int vet[7];
int i, maior;

printf("Digite valores para preencher o vetor: ");

for(i=0 ; i<7 ; i++){
    scanf("%d", vet[i]);
}

maior = vet[0];

    for (i = 1; i < 7; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }

    printf("O maior elemento do vetor é: %d\n", maior);



return 0;
}

