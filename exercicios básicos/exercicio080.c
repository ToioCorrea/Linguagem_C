/*
Escreva um programa que declare um vetor de números inteiros com tamanho 8. Solicite ao usuário que digite os valores para preencher o vetor. Em seguida, o programa deve calcular a média dos valores do vetor. Depois disso, exiba os valores do vetor que estão acima da média calculada.
*/

#include <stdio.h>
int main(){


int vetor[8];
float soma=0.0;
int i, media, superior;

printf("Digite os valores para preecher o vetor");

for(i=0; i<8 ; i++){
    scanf("%d", &vetor[i]);
    soma += vetor[i];
}

media = (float) soma / 8;

printf("Media dos valores do vetor", media);
printf("Valores maior que a media\n");

for(i=0 ; i<8 ; i++){
    if(vetor[i]>media){
    printf("%d",vetor[i]);
    }
}

printf("\n");

return 0;


}