#include <stdio.h>
int main(){

float prod1,prod2,prod3;

    printf("Digite os valores dos 3 produtos: ");
    scanf("%f%f%f", &prod1,&prod2,&prod3);

    if((prod1< prod2) && (prod1<prod3) ){
        printf("Menor valor é: %2.f\n",prod1);
    }
    else if((prod2<prod3) && (prod2<prod1)){
        printf("Menor valor é: %2.f\n", prod2);
    }
    else{
        printf("Menor valor é: %2.f\n", prod3);
    }


    if(prod1>prod2 && prod1>prod3){
        printf("Maior valor é: %2.f\n",prod1);
    }
    else if(prod2>prod1 && prod2>prod3){
        printf("Maior valor é: %2.f\n",prod2);
    }
    else{
        printf("Maior valor é: %2.f\n", prod3);
    }


    return 0;


}