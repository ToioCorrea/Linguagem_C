/*
Faça um programa que calcule as raízes de uma equação do segundo grau, na forma ax² + bx + c.

O programa deverá pedir os valores de a, b e c e fazer as consistências, informando ao usuário nas seguintes situações:

Se o usuário informar o valor de A igual a zero, a equação não é do segundo
    grau e o programa não deve fazer pedir os demais valores,
    sendo encerrado;
Se o delta calculado for negativo, a equação não possui raízes reais.
    Informe ao usuário e encerre o programa;
Se o delta calculado for igual a zero a equação possui apenas uma raiz
    real; informe-a ao usuário;
Se o delta for positivo, a equação possui duas raiz reais;
    informe-as ao usuário;
*/

//USANDO IF-ELSE

#include <stdio.h>
#include <math.h>
int main()
{

float a, b, c, delta, raiz1, raiz2, raizdelta;

printf("Informe o valor de A: ");
scanf("%f", &a);
if(a == 0)
printf("A equação não é do segundo grau");
else 
{
    printf("Informe o valor de B: ");
    getchar();
    scanf("%f", &b);
    printf("Informe o valor de C:");
    getchar();
    scanf("%f", &c);

    delta = pow(b, 2) - (4*a*c); //pow(base, expoente)

    if(delta < 0 )
    printf("Delta menor que zero\nA equação não possui raizes");
    else if(delta==0)
    {
    raiz1 = (-b) / (2*a);
    printf("Delta é zero\nRaiz: %2.f", raiz1);
    }
    else
    {
    raiz1 = (-b + sqrt(delta))/(2*a); //sqrt() = permite tirar a raiz
    raiz2 = (-b - sqrt(delta))/(2*a);
    printf("Delta maior que zero\nRaiz 1: %2.f\nRaiz 2: %2.f", raiz1, raiz2);
    }

}


return 0;

}