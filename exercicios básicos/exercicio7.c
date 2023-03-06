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