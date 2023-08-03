/*Escreva um programa que declare dois vetores de números inteiros com o mesmo tamanho. Em seguida, solicite ao usuário que digite os valores para preencher os vetores. O programa deve realizar a multiplicação dos elementos dos dois vetores, ou seja, multiplicar o primeiro elemento do primeiro vetor com o primeiro elemento do segundo vetor, o segundo elemento do primeiro vetor com o segundo elemento do segundo vetor, e assim por diante. Por fim, exiba os resultados das multiplicações na tela.*/

#include <stdio.h>
int main(){

int i, tamanho;


printf("Digite valores para preencher os vetores");
scanf("%d", &tamanho);

int vetor1[tamanho];
int vetor2[tamanho];
int resultado[tamanho];

printf("Digite os valores do primeiro vetor");
for(i=0;i<tamanho;i++){
    scanf("%d", &vetor1[i]);
}

printf("Digite os valores do segundo vetor");
for(i=0;i<tamanho;i++){
    scanf("%d", vetor2[i]);
}

for(i=0;i<tamanho;i++){
    resultado[i] = vetor1[i] * vetor2[i];
}

printf("Resultado da multiplicação");
for(i=0;i<tamanho;i++){
printf("%d", resultado[i]);
}
printf("\n");

return 0;
}