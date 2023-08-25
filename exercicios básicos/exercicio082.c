/*
Escreva um programa que declare um vetor de números inteiros com tamanho 10. Solicite ao usuário que digite os valores para preencher o vetor. Em seguida, peça ao usuário para digitar um número inteiro que deseja buscar no vetor. O programa deve verificar se o número está presente no vetor e exibir a posição (índice) onde o número foi encontrado. Caso o número não esteja presente, exiba uma mensagem indicando isso.
*/

#include <stdio.h>
int main(){

int vetor[10];
int i, buscar;

printf("Digite os valores: ");

for(i=0 ; i<10 ; i++){
    scanf("%d", &vetor[i]);
}

printf("Numero que vc quer buscar no vetor");
scanf("%d", &buscar);


for(i=0 ; i<10 ;i++){
if(vetor[i]==buscar){
    printf("Posição %d", i);
    break;    
    }
}

if (i == 10) {
        printf("O número %d não foi encontrado no vetor.\n", buscar);
    }

return 0;
}