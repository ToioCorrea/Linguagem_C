/*Faça um Programa que leia um número e exiba o dia correspondente da semana. (1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.*/

//USANDO IF ELSE

#include <stdio.h>
int main()
{
int num;

    printf("Digite um numero de 1 a 7: ");
    num = getchar();

if(num=='1')
printf("1-Domingo");
else if(num=='2')
printf("2-Segunda");
else if(num=='3')
printf("3-Terça");
else if(num=='4')
printf("4-Quarta");
else if(num=='5')
printf("5-Quinta");
else if(num=='6')
printf("6-Sexta");
else if(num=='7')
printf("7-Sábado");
else
printf("Valor Inválido");

return 0;
}