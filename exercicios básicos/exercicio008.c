/*

Utilizando as funções printf() e scanf(), escreva o código para calcular:


a)O equivalente em Fahrenheit (F) para uma temperatura dada na escala Celsius (C). Fórmula de conversão: F = 9/5 * C + 32. A temperatura em Celsius deve ser solicitada ao usuário. O equivalente em Fahrenheit deve ser apresentado na tela da seguinte forma: Celsius = ? equivale a Fahrenheit = ?.

*/

//A)

#include <stdio.h>
int main(){
    float fahrenheit , celsius;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius + 160) / 5; 
    printf("Celsius = \'%.2f\' equivale a Fahrenheit = \'%.2f\'", celsius, fahrenheit);

return 0;    

}

