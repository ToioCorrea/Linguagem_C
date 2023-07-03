/*
Escreva um programa que solicite ao usuário números inteiros positivos e calcule a soma desses números. O programa deve continuar solicitando números ao usuário até que ele insira zero. Em seguida, deve exibir a soma dos números fornecidos.
*/

#include <stdio.h>
int main(){

int num;
int soma = 0;

printf("Digite numeros inteiro ou <0> para sair");
scanf("%d", &num);


while(num!=0){
    soma += num;
    printf("Digite numeros inteiro ou <0> para sair");
    scanf("%d", &num);
}

printf("A soma dos numeros fornecidos é: %d\n", soma);


return 0;

}