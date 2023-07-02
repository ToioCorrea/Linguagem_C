/*
Escreva um programa que solicite ao usuário as notas de três provas (P1, P2, P3) e seus respectivos pesos (W1, W2, W3). O programa deve calcular e exibir a média ponderada das provas, considerando os pesos fornecidos.

O programa deve seguir as seguintes etapas:

Solicitar ao usuário as notas e pesos das três provas.
Calcular a média ponderada utilizando a fórmula: Média Ponderada = (P1 * W1 + P2 * W2 + P3 * W3) / (W1 + W2 + W3)
Exibir o resultado da média ponderada na tela.
*/

#include <stdio.h>
int main(){

int prova1, prova2, prova3;
int peso1, peso2, peso3;
int media;

printf("Digite as notas da prova 1:\n");
scanf("%d", &prova1);
printf("Digite as notas da prova 2:\n");
scanf("%d", &prova2);
printf("Digite as notas da prova 3:\n");
scanf("%d", &prova3);

printf("Digite o peso utilizado na prova 1:\n");
scanf("%d", &peso1);
printf("Digite o peso utilizado na prova 2:\n");
scanf("%d", &peso2);
printf("Digite o peso utilizado na prova 3:\n");
scanf("%d", &peso3);

media = ((prova1*peso1+prova2*peso2+prova3*peso3)/(peso1+peso2+peso3));

printf("Sua média eh:%d", media);

return 0;


}