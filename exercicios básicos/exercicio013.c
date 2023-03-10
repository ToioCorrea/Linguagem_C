/*Faça um programa que leia um caractere do teclado e imprima o caractere seguinte (posterior) na tela. Dica: veja o que acontece ao se adicionar um valor numérico inteiro a uma variável do tipo caractere.
Ex: entrada = a, saida = b 
*/

#include <stdio.h>
int main(){
    
char ch, c;

printf("Digite uma letra: ");
scanf("%c", &ch);

c = ch++; 


printf("entrada = %c, saida = %c", c, ch);

return 0;

}