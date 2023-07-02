/*
Escreva um programa que solicite ao usuário três números inteiros e determine qual é o maior, o menor e o número do meio. O programa deve exibir essas informações na tela.

O programa deve seguir as seguintes regras:

Determine qual é o maior número entre os três e exiba a mensagem "Maior número: <valor>".
Determine qual é o menor número entre os três e exiba a mensagem "Menor número: <valor>".
Determine qual é o número do meio entre os três e exiba a mensagem "Número do meio: <valor>".
*/

#include <stdio.h>
int main(){

int num1, num2, num3, maior, meio, menor;

printf("Digite três numeros: ");
scanf("%d%d%d", &num1, &num2, &num3);



//Maior
if(num1 > num2 && num1>num3){
    maior = num1;
}
else if(num2>num1 && num2 > num3){
    maior = num2;
}
else{
    maior = num3;
}

//Menor
if(num1<=num2 && num1<=num3){
    menor = num1;
}
else if(num2<=num1 && num2<=num3){
    menor = num2;
}
else{
    menor = num3;
}

//Meio
if((num1 >= num2 && num1<= num3) || (num1 >= num3 && num1 <=num2)){
    meio = num1;
}
else if((num2 >= num3 && num2 <= num1) || (num2 >=num1 && num2<=num3)){
    meio = num2;
}
else{
    meio = num3;
}

printf("Maior Valor: %d\n", maior);
printf("Menor Valor: %d\n", menor);
printf("Número do meio: %d\n", meio);

return 0;


}