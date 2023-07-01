/*
Escreva um programa que solicite ao usuário três números inteiros representando os lados de um triângulo. O programa deve verificar se esses valores podem formar um triângulo válido. Se os valores puderem formar um triângulo válido, exiba a mensagem "É um triângulo válido". Caso contrário, exiba a mensagem "Não é um triângulo válido".
*/

#include <stdio.h>
int main(){

int num1, num2, num3;

printf("Digite os três lados do triângulo: ");
scanf("%d%d%d", &num1, &num2, &num3);

if(num1 + num2 > num3){
    printf("É triangulo\n");
}
else if(num1+num3>num2){
    printf("É triangulo");
}
else if(num2 + num3 >num1){
    printf("É triangulo");
}
else{
        printf("Não é triangulo");
}

return 0;

}