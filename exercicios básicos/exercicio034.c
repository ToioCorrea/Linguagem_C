/*Faça um Programa que peça um número correspondente a um determinado ano e em seguida informe se este ano é ou não bissexto.*/

#include <stdio.h>
int main()
{
int ano;

printf("Digite o ano desejado: ");
scanf("%i", &ano);

if(ano % 4 == 0)
printf("O ano é bissexto");
else
printf("Não é ano bissexto");

return 0;
}