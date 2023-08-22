/*Voce  ira calcular o valor total de um investimento. Peça ao usuário o tempo de investimento(em anos), a taxa de retorno(anual), e o valor investido hoje). Imprima o montante acumiulado ao final e os juros obtidos com o investimento
taxa 11% ao ano
*/

#include <stdio.h>
int main(){

float taxa, aporte, valor_acumulado, juros;
int i, tempo;

printf("Digite o tempo(em anos) que deseja manter o investimento: ");
scanf("%d", &tempo);

printf("Digite a taxa de retorno(anual) do banco: ");
scanf("%f", &taxa);

printf("Digite o valor do primeiro investimento: ");
scanf("%f", &aporte);


valor_acumulado = aporte;

for(i=0; i < tempo; i++){
    valor_acumulado = valor_acumulado * (1+taxa);
}

juros = valor_acumulado - aporte;

printf("Montante acumulado: %2.f\n", valor_acumulado);
printf("Juros obtidos com o ivestimento: %2.f\n", juros);


return 0;


}