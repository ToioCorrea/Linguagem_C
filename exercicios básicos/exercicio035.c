/*Faça um Programa que peça uma data no formato dd/mm/aaaa e determine se a mesma é uma data válida.*/

#include <stdio.h>
int main()
{

int dia, mes, ano;

printf("Digite a data no formato dd/mm/aaaa: ");
scanf("%i/%i/%i", &dia, &mes, &ano);

if(ano < 0)
printf("Ano inválido!");
else 
{
    if(mes < 1 || mes > 12)
    printf("Mês inválido!");
    else if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
    {
        if(dia>0 && dia<32)
        printf("Data válida!");
        else 
        printf("Dia inválido!");
    }
    else if(mes==2 || mes==4 || mes==6 || mes==11)
    {
        if(dia>0 && dia<31)
        printf("Data Válido!");
        else 
        printf("Dia inválido!");
    }
    else 
    {
        if(ano % 4 == 0)
        {
            if(dia > 0 && dia<30)
            printf("Data Válida!");
            else 
            printf("Dia inválido!");
        }
    else 
    {
        if(dia >0 && dia<29)
        printf("Data Válida!");
        else 
        printf("Dia inválido!");
    }
    }
    }

}


