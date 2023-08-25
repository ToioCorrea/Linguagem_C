/*
Faça um programa pra determinar se um inteiro digitado pelo unuário é primo. O calculo de ser feito em uma função chamada verifica_primo, que rtorna 1 caso o numero seja primo e 0, caso contrario. No programa principal, você ira imprimir se o numero é ou não primo
*/

#include <stdio.h>
int verefica_primo(int num){
    if(num <=1){
        return 0;
    }
    for(int i=2; i*i <= num; i++){
       if (num % i== 0){
            return 0;
        }
    }
return 1;

}

int main(){
    int numero;

printf("Digite um numero: ");
scanf("%d", &numero);

if(verefica_primo(numero)){
    printf("O numero é primo");
   }   
   else{
    printf("O numero não é primo");
}

return 0;
}

