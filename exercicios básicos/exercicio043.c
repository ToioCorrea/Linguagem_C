/*
Escreva um programa que solicite ao usuário um número inteiro positivo e verifique se esse número é primo. Utilize um loop 'for' para percorrer todos os números de 2 até a metade do valor fornecido. Exiba na tela se o número é primo ou não.
*/

#include <stdio.h>
int main(){

int num, i, ehPrimo = 1;

printf("Digite um numero inteiro: ");
scanf("%d", &num);

for(i=2 ; i<=num /2 ; i++){
    if(num % i ==  0){
        ehPrimo = 0;
        break;

  }

}
if (ehPrimo) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    return 0;
}