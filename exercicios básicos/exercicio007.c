/*Faça um Programa que peça o raio de um círculo, calcule e mostre sua área*/

#include <stdio.h>
int main(){
const float PI = 3.14;

float raio, area;    

printf("Digite o valor do raio: ");
scanf("%f", &raio);

area = PI * raio * 2;

printf("O raio é \'%2.f\' e sua área é %2.f", raio, area);

return 0;
}

/*Comando “const”

Sintaxe: const <tipo_de_dado> < nome_da_constante > = <valor>;
- Declara uma constante para um tipo de dado específico;
- Usa espaço na memória RAM;
- O programa não compila se houver no código novo comando de atribuição para a constante (assignment of read-only variable).
*/