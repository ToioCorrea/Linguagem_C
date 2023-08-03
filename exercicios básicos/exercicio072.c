/*
Calcular a média de um conjunto de números
Escreva um programa que declare um vetor de números inteiros com tamanho 5. Solicite ao usuário que digite os valores para preencher o vetor. Em seguida, calcule a média dos números do vetor e exiba o resultado na tela.
*/

#include <stdio.h>
int main(){

int vet[5];
int i;
int soma=0;
float media;


printf("Digite os valores:");

for(i=0; i<5; i++){
scanf("%d", &vet[i]);
soma+=vet[i];
}

media =soma/5; 


printf("A média dos números digitados é: %2f\n", media);

    return 0;
}