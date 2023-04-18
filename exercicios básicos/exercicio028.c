/*As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e eles contrataram para desenvolver o programa que calculará os reajustes.

Faça um programa que recebe o salário de um colaborador e reajuste segundo o seguinte preenchido, com base no salário atual:

salários até R$ 280,00 (incluindo) : aumento de 20%
salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
salários de R$ 1500,00 em diante :
    aumento de 5% Após o aumento ser realizado,
informe na tela:
    o salário antes do reajuste;
    o percentual de aumento aplicado;
    o valor do aumento;
    o novo salário, após o aumento.
*/

//USANDO IF-ELSE

#include <stdio.h>
int main()
{
float salario_atual, aumento, novo_salario, diferenca;

    printf("Digite seu salário atual: ");
    scanf("%f", &salario_atual);

    if(salario_atual<=280)
    aumento = 20;
    else if(salario_atual<=700)
    aumento = 15;
    else if (salario_atual<=1500)
    aumento = 10;
    else 
    aumento = 5;

    diferenca = salario_atual * (aumento/100 );
    novo_salario = diferenca + salario_atual;

    printf("Salário Anterior: R$%.2f\n", salario_atual);
    printf("Percentual de aumento aplicado: %2.f%%\n", aumento);
    printf("Valor do Aumento: R$%2.f\n", diferenca);
    printf("Novo salário, após aumento: R$%.2f\n", novo_salario);





}
        
