/*
Escreva um programa que declare um vetor de números inteiros com tamanho 7. Solicite ao usuário que digite os valores para preencher o vetor. Em seguida, o programa deve calcular e exibir a média dos valores presentes no vetor.
*/

#include <stdio.h>
int main(){

int vetor[7];
int i, soma =0.0;
float media;

printf("Digite valores para preencher o vetor");

for(i=0 ; i<7 ; i++){
    scanf("%d", &vetor[i]);
    soma+=vetor[i];
}

media = (float) soma/7;

printf("A media dos valores eh: %.2f\n", media);

return 0;

}