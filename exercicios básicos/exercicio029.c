/*Faça um programa para o calculado de uma folha de pagamento, sabendo que os descontos são do Imposto de Renda, que dependem do salário bruto (conforme tabela abaixo) e 10% para o INSS e que o FGTS corresponde a 11% do Salário Bruto, mas não é descontado (é a empresa que deposita).

O Salário Líquido corresponde ao Salário Bruto menos os descontos. O programa deve pedir ao usuário o valor da sua hora e a quantidade de horas trabalhadas no mês.

Desconto do IR: Salário Bruto até 900 (inclusive) - isento Salário Bruto até 1500 (inclusive) - desconto de 5% Salário Bruto até 2500 (inclusive) - desconto de 10% Salário Bruto acima de 2500 - desconto de 20%

Imprima na tela as informações, dispostas conforme o exemplo abaixo. No exemplo o valor da hora é 5 e a quantidade de hora é 220.

    Salário Bruto: (5 * 220)        : R$ 1100,00
    (-) IR (5%)                     : R$   55,00
    (-) INSS ( 10%)                 : R$  110,00
    FGTS (11%)                      : R$  121,00
    Total de descontos              : R$  165,00
    Salário Liquido                 : R$  935,00*/

#include <stdio.h>
int main()
{
float valor_hora , quantidade_hora, IR,CIR, INSS, FGTS, descontos, salario_bruto, salario_liquido;


    printf("O valor cobrado por hora trabalhada: ");
    scanf("%f", &valor_hora);

    printf("Digite quantas horas você trabalhou nesse mês: ");
    scanf("%f", &quantidade_hora);

salario_bruto = valor_hora * quantidade_hora;

if(salario_bruto<=900)
IR = 0;
else if(salario_bruto<=1500)
IR = 5;
else if(salario_bruto<=2500)
IR = 10;
else
IR = 20;

CIR = salario_bruto * (IR/100.0);
INSS = salario_bruto * (10/100.0);
FGTS = salario_bruto * (11/100.0);
descontos = INSS + CIR;
salario_liquido = salario_bruto - descontos;

printf("\nSalário Bruto       :R$%2.f", salario_bruto);
printf("\n(-) IR(%1.f%%)          :R$%2.f", IR, CIR);
printf("\n(-) INSS(10%%)       :R$%2.f", INSS);
printf("\nFGTS (11%%)          :R$%2.f", FGTS);
printf("\nTotal descontos     :R$%2.f", descontos);
printf("\nSalário Líquido     :R$%2.f", salario_liquido);

return 0;

}