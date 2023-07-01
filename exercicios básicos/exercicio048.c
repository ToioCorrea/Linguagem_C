/*
Escreva um programa que solicite ao usuário um ano e verifique se o ano fornecido é bissexto. Um ano é considerado bissexto se for divisível por 4, mas não divisível por 100, exceto se for divisível por 400. Se o ano for bissexto, exiba a mensagem "É um ano bissexto". Caso contrário, exiba a mensagem "Não é um ano bissexto".
*/


#include <stdio.h>
int main(){

int ano;

printf("Digite o ano: ");
scanf("%d", &ano);

if((ano % 4 == 0 && ano % 100 !=0) || ano % 400 == 0){
    printf("O ano é bissexto");
}
else{
    printf("O ano não é bissexto");
}


return 0;


}