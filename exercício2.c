/*Faça um programa que peça um número e então mostre na tela o numero informado*/

#include <stdio.h>
int main(){

    float numero;
    //criar uma variável do tipo float, chamada 'numero'
    printf("Digite um número: 3");
    scanf("%f", &numero);
    // & = guarda no endereço de memória o 'numero'
    printf("O numero digitado foi: %2.f", numero); 
    //%2.f = duas casa de precisão
    //expressão 'numero' indica o valor que será impresso em %2.f

return 0;    
}
