/*
Como corrigir o problema. mantendo uma só função para calcular a soma e o produto?

#include <stdio.h>

void soma_produto(int a, int b, int soma, int produto){

    soma = a + b;
    produto = a * b;
}

int main(){

    int s,p;
    soma_produto(2,5,s,p);

    printf("Soma = %d Produto = %d", s, p);

return 0;
}

*/

#include <stdio.h>

void soma_produto(int a, int b, int *soma, int *produto){

    soma = a + b;
    produto = a * b;
}

int main(){

    int s,p;
    soma_produto(2,5,s,p);

    printf("Soma = %d Produto = %d", &s, &p);

return 0;
}

