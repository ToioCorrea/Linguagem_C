/*
Utilizando as funções printf() e scanf(), escreva um código para calcular:

O valor de y como função de x, segundo a função y(x) = 3x + 1, num domínio real. O valor de x deve ser solicitado ao usuário. O valor de y deve ser apresentado na tela da seguinte forma: O valor de ‘y’ para ‘x’ igual a? é: ?.


*/

#include <stdio.h>
int main(){
int x , y;

printf("y(x) = 3x + 1\n\n");
printf("Digite o x: ");
scanf("%d", &x);

y = (3 * x) + 1;

printf("O valor de \'y\' para \'x\' é igual a %d\n", y);

return 0;

}

