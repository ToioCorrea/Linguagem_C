/*2) Implemente um código com as seguintes características:
• Tenha como comentário a frase: Meu primeiro programa.
• Defina uma constante chamada letra e atribua a ela o caractere A.
• Mostre na tela o endereço e conteúdo da sua constante na memória.
• Defina uma variável chamada num do tipo número inteiro.
• Mostre na tela o endereço e conteúdo da sua variável na memória.
• Atribua à sua variável o valor 10.
• Mostre na tela o endereço e conteúdo da sua variável na memória após a atribuição do
valor.
• Por fim, apresente na tela o tamanho da sua constante e da sua variável na memória.
*/

#include <stdio.h>
int main(){

const char letra = 'A'; 
int num = 10;

printf("Meu primeiro programa\n\n\n");

printf("endereço da constante: %p\n", &letra);
printf("Conteúdo da constante: %d\n\n", letra);

printf("Endereço da variável: %p\n", &num);
printf("conteudo da variável: %i\n\n", num);

printf("tamanho da constante = %lu\n", sizeof(letra));
printf("Tamanho da variável = %lu\n\n", sizeof(num));

return 0;

}



/* \n = pular linha
Comando “const” = Sintaxe: const <tipo_de_dado> < nome_da_constante > = <valor>;

Declarando uma variável em C:
int num; 
-declara uma variável chamada “num”, que
-armazena valores do tipo inteiro (números inteiros)
Atribuindo um valor a uma variável (já declarada):
num = 10;

O operador sizeof() é usado para descobrir o tamanho, em bytes, de uma variável ou tipo de dados em C. Ele é útil para determinar o espaço de armazenamento necessário para uma determinada variável ou estrutura. 
*/