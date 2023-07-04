/*
Escreva um programa que solicite ao usuário uma sequência de números inteiros (terminada por zero) e calcule a média desses números. O programa deve exibir a média na tela.
*/

#include <stdio.h>
int main(){

    int num, soma=0, quantidade=0;
    float media;

do{
    printf("Digite uma sequencia de numero<zero para terminar>");
    scanf("%d", &num);

    if(num!=0){
        soma += num;
        quantidade++;
    }

}
while(num!=0);

if (quantidade > 0) {
        media = (float) soma / quantidade;
        printf("A média dos números digitados é: %.2f\n", media);
    } else {
        printf("Nenhum número foi digitado.\n");
    }

return 0;
}