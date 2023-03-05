/*Faça um programa que peça dois numero e imprima a soma*/

#include <stdio.h>
int main(){

    float numero1, numero2, soma;
//criar 3 variáveis ;  2(numero1&numero2) para guardar numero digitado e 1(soma) para somar os numeros
    printf("Digite um numero: ");
    scanf("%f", &numero1);

    printf("Digite outro numero: ");
    getchar();
    //getchar = ler um unico caracter do teclado
    scanf("%f", &numero2);

soma = numero1 + numero2;
//código de formatação

    printf("A soma dos numeros é: %2.f", soma);

    return 0;
}