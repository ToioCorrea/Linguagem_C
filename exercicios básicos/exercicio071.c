/*
Escreva um programa que declare um vetor de números inteiros com tamanho 10. Solicite ao usuário que digite os valores para preencher o vetor. Em seguida, o programa deve solicitar ao usuário um número inteiro e contar quantas vezes esse número aparece no vetor. Por fim, exiba a quantidade de ocorrências na tela.
*/

#include <stdio.h>
int main(){

int vetor[10];
int i, num, ocorrencias=0;

printf("Digite valores: ");

for(i=0 ; i<10; i++){
    scanf("%d", vetor[i]);
}

prinf("Agora digite outro numero: ");
scanf("%d", &num);

for (i = 0; i < 10; i++) {
        if (vetor[i] == num) {
            ocorrencias++;
        }
    }

    printf("O número %d ocorre %d vezes no vetor.\n", num, ocorrencias);

    return 0;
}