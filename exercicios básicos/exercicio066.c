/*
Escreva um programa que solicite ao usuário um número inteiro e exiba a tabuada desse número de 1 a 10. O programa deve repetir esse processo até que o usuário digite zero para sair.
*/

#include <stdio.h>
int main(){

int num, i=1;


do{
printf("Digite um numero inteiro:");
scanf("%d", &num);


    if(num!=0){
        printf("Taboada do numero %d:\n", num);

        do{
         printf("%d x %d = %d\n", num, i, num*i);
         i++;
    }while(i<=10);
  }

}while(num!=0);

return 0;

}