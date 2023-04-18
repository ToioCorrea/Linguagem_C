/*Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N-Noturno.

Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.
*/

//USANDO O IF-ELSE

#include <stdio.h>
int main()
{
char c;
    printf("Em qual turno você estuda?<M>-matutino <V>-vespertino <N>-noturno: ");
    c = getchar();

    if(c=='M'|| c=='m')
    printf("Bom Dia!");
    else if(c=='V' || c=='v')
    printf("Boa Tarde!");
    else if(c=='N' || c=='n')
    printf("Boa Noite!");
    else
    printf("Valor Inválido");

return 0;

}