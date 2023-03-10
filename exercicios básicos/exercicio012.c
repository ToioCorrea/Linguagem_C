/*
Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.
*/

#include <stdio.h>
int main(){
    float lado, area, dobro;

printf("Digite o lado do quadrado: ");
scanf("%f", &lado);

area = lado * lado;
dobro = area * 2;

printf("A area é %.2f e O dobro da área é %.2f", area , dobro);

return 0;
}