/*
Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.

Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê: salário bruto. quanto pagou ao INSS. quanto pagou ao sindicato. o salário líquido. calcule os descontos e o salário líquido, conforme a tabela abaixo:

+ Salário Bruto : R$
- IR (11%) : R$
- INSS (8%) : R$
- Sindicato ( 5%) : R$
= Salário Liquido : R$
*/
#include <stdio.h>
int main(){

float IR, inss, sindicato, salario_liquido, descontos, salario;

printf("Digite o seu salário: ");
scanf("%f", &salario);

IR = salario * 0.11;
inss =  salario * 0.08;
sindicato = salario * 0.05; 
descontos = IR + inss + sindicato;
salario_liquido = salario - descontos;

printf("+ Salário Bruro : R$%2.f\n", salario);
printf("- IR (11%%) : R$%.2f\n", IR);
printf("- INSS (8%%) : R$%.2f\n", inss);
printf("- Sindicato (5%%) : R$%.2f\n", sindicato);
printf("= Salário Liquido : R$%.2f\n", salario_liquido);

return 0;

}