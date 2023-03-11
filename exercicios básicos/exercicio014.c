/*Elabore um programa que leia do teclado a idade, a altura e o sexo de uma pessoa e escreva uma frase apresentando estes dados.
• Ex.:
Entre com dados (idade, altura, sexo): 51
1.95
F
A pessoa tem 51 anos, 1.95 de altura e é do sexo F.
*/

#include <stdio.h>
int main(){
    int idade;
    float altura;
    char sexo, m, f;

printf("Digite sua idade, altura e sexo(<m/f>): ");
scanf("%d%f%c", &idade, &altura, &sexo);


printf("Você tem %d anos de idade, %.2f de altura e é do sexo %c", idade, altura, sexo);

return 0;
}

