/*
Escreva um programa que solicite a idade de uma pessoa e verifique se ela é maior de idade. Caso a idade seja igual ou superior a 18 anos, exiba a mensagem "Maior de idade". Caso contrário, exiba a mensagem "Menor de idade".
*/

#include <stdio.h>
int main(){

int idade;

printf("Digite um numero inteiro: ");
scanf("%d", &idade);

if(idade>=18){
    printf("Maior de idade\n");
}
else{
    printf("Menor de idade\n");
}

return 0;
}

