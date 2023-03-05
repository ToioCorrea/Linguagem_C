/*Façã um Programa que peça 4 notas bimentrais e mostre a média*/

#include <stdio.h>
int main(){
    
float nota1, nota2, nota3, nota4, media;

printf("Digite suas quatro notas: ");
scanf("%f%f%f%f", &nota1,&nota2,&nota3,&nota4);

media = (nota1+nota2+nota3+nota4)/4;

printf("Sua média é: %.2f", media);

return 0;
}


/*OUTRO JEITO DE FAZER O PROGRAMA

#include <stdio.h>
int main()
{
    float nota1, nota2, nota3, nota4, media;
    printf("Digite a nota do bimestre 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota do bimestre 2: ");
    getchar();
    scanf("%f", &nota2);
    printf("Digite a nota do bimestre 3: ");
    getchar();
    scanf("%f", &nota3);
    printf("Digite a nota do bimestre 4: ");
    getchar();
    scanf("%f", &nota4);
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("A media eh %.2f", media);
    return 0;
} */
