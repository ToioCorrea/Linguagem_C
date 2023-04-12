/*Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido*/

//USA O IF-ELSE

#include <stdio.h>
int main()
{
char letra;

    printf("Digite 'f' para Feminino e 'm' para masculino: ");
    letra = getchar();

    if (letra == 'f' || letra == 'F') 
    printf("F - Feminino");
    else if ( letra == 'm' || letra == 'M')
    printf("M - Masculino");
    else
    printf("Sexo inválido");

    return 0;
}