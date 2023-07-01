/*
Escreva um programa que solicite ao usuário um número inteiro e classifique-o em uma das seguintes categorias: positivo, negativo ou zero. Utilize três estruturas 'if-else' para realizar essa classificação. Se o número for maior que zero, exiba a mensagem "Número positivo". Se o número for menor que zero, exiba a mensagem "Número negativo". Caso contrário, exiba a mensagem "Número zero".
*/

#include <stdio.h>
int main(){

int num;

printf("Digite um numero:");
scanf("%d", &num);

if(num>0){
    printf("O numero é Positivo.\n");
}
else if(num<0){
    printf("O numero é Negativo.\n");
}
else{
    printf("Numero zero\n");
}

return 0;

}