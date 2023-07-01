/*
Escreva um programa que solicite ao usuário o valor de um produto e aplique um desconto de acordo com as seguintes regras:

Se o valor do produto for maior ou igual a R$ 100, aplique um desconto de 10%.
Se o valor do produto for maior ou igual a R$ 50 e menor que R$ 100, aplique um desconto de 5%.
Caso contrário, não aplique nenhum desconto.
O programa deve exibir o valor original do produto, o valor do desconto aplicado (se houver) e o valor final com desconto (se aplicável).

*/

#include <stdio.h>
int main(){

float valor, desconto, valor_final;

printf("Digite o valor do produto: ");
scanf("%f", &valor);


if(valor >=100 ){

desconto = valor * (10.00/100.00);
valor_final = valor - desconto;

    printf("Desconto de 10%%\n\n");
    printf("Valor original: %2.f\n", valor);
    printf("Valor do desconto: %2.f\n", desconto);
    printf("Valor Final: R$%2.f\n", valor_final);
}
else if(valor>=50 && valor<100){

desconto = valor * (5.00/100.00);
valor_final = valor - desconto;

    printf("Desconto de 5%%\n\n");
    printf("Valor original: %2.f\n", valor);
    printf("Valor do desconto: %2.f\n", desconto);
    printf("Valor Final: R$%2.f\n", valor_final);
}

else{
    printf("Não possui desconto\n\n");
    printf("Valor original: %2.f\n", valor);
    printf("Valor Final: R$%2.f\n", valor_final);
}

}