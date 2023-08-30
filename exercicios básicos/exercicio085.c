/*
Escreva um programa que solicite ao usuário que digite duas palavras ou frases. O programa deve concatenar as duas strings (juntar uma após a outra) e exibir o resultado na tela.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char frase1[100];
    char frase2[100];

printf("Digite uma frase ou palavra: ");
scanf(" %[^\n]", frase1);

printf("Digite a segunda frase ou palavra: ");
scanf(" %[^\n]", frase2);


printf("Frase: %s", strcat(frase1, frase2));

return 0;
}
