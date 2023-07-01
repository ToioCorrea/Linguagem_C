/*
Escreva um programa que solicite ao usuário uma nota entre 0 e 100 e atribua uma classificação para essa nota de acordo com a seguinte tabela:

Nota maior ou igual a 90: "A"
Nota entre 80 e 89: "B"
Nota entre 70 e 79: "C"
Nota entre 60 e 69: "D"
Nota menor que 60: "F"
Utilize três ou mais estruturas 'if-else' para realizar essa classificação. Exiba a classificação correspondente à nota informada pelo usuário.

*/

#include <stdio.h>
int main(){

int nota;

printf("Digite sua nota entre 1 e 100: ");
scanf("%d", &nota);

if(nota>=0 && nota<=100){


    if(nota>=90){
        printf("Sua classificação é 'A'\n");
    }
    else if(nota>=80 && nota<=89){
        printf("Sua classificação é 'B'\n");
    }
    else if(nota>=70 && nota<=79){
        printf("Sua classificação é 'C'\n");
    }
    else if(nota>=60 && nota<=69){
        printf("Sua classificação é 'D'\n");
    }
    else{
        printf("Sua classificação é 'F'\n");
    }   

}

else{
    printf("Sem classificação. Digite sua nota entre 1 e 100\n");

}

return 0;
}
