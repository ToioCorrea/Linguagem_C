/*
Faça um programa que lê as duas notas parciais passadas por um aluno numa disciplina ao longo de um semestre, e calcule a sua média.

A receber de conceitos obedecem à tabela abaixo: Média de Aproveitamento Conceito Entre 9.0 e 10.0 A Entre 7.5 e 9.0 B Entre 6.0 e 7.5 C Entre 4.0 e 6.0 D Entre 4.0 e zero E

O algoritmo deve mostrar na tela as notas, a média, o conceito correspondente à mensagem “APROVADO” se o conceito for A, B ou C ou “REPROVADO” se o conceito for D ou E.
*/

//USANDO IF-ELSE

#include <stdio.h>
int main()
{
float nota1, nota2, media; 
char aproveitamento;

    printf("Digite sua PRIMEIRA nota: ");
    scanf("%f", &nota1);
    printf("Digite sua SEGUNDA nota: ");
    scanf("%f", &nota2);

media = (nota1+nota2)/2;



if (media >= 9 )
aproveitamento = 'A';
else if(media >= 7.5 )
aproveitamento='B';
else if(media >=6 )
aproveitamento='C';
else if(media >=4 )
aproveitamento = 'D';
else
aproveitamento='E';

if(aproveitamento == 'E' || aproveitamento == 'D')
printf("\n REPROVADO\n Aproveitamento: %c", aproveitamento);
else 
printf("\n APROVADO\n Aproveitamento: %c", aproveitamento);


return 0;
}