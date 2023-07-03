/*
Escreva um programa que solicite ao usuário uma senha e verifique se ela corresponde a uma senha pré-definida. O programa deve continuar solicitando uma senha até que a senha correta seja fornecida. Quando a senha correta for inserida, o programa deve exibir uma mensagem de confirmação.
*/

#include <stdio.h>
int main(){


int senha;
const int senha_valida = 1234;

printf("Digite sua senha: ");
scanf("%d", &senha);


while(senha!=senha_valida){
    printf("Senha Inválida\nDigite sua senha novamente:");
    scanf("%d", &senha);
}

printf("Acesso Permitido\n");

return 0;

}