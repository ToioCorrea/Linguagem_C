/*
Escreva um programa que declare um vetor de números inteiros com tamanho 6. Solicite ao usuário que digite os valores para preencher o vetor. Em seguida, o programa deve trocar o valor do primeiro elemento com o valor do último elemento do vetor. Exiba o vetor resultante na tela após a troca.
*/

#include <stdio.h>
int main(){

int num[6];
int i, temp;

printf("Digite valores para preencher o vetor");

for(i=0; i<6; i++){
scanf("%d",&num[i]);
}

temp = num[0];
num[0] = num[5];
num[5] = temp;

printf("Vetores apos a troca");
for(i=0 ; i<6 ; i++){
    printf("%d ",num[i]);
}

printf("\n");

return 0;



}