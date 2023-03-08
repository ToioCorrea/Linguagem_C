/*
Segundo o plano da disciplina, a média final de um aluno é dada por: (P1 + P2 + T)/3. Implemente um programa que leia as notas de P1, P2 e T de um dado aluno e imprima sua média final. 

Atenção: cuidado para que a divisão por 3 seja feita na soma das notas, e não apenas em um dos termos.
*/

#include <stdio.h>
int main(){

    float p1, p2, t, media;

printf("Digite a nota da primeira prova(P1): ");
scanf("%f", &p1);
printf("Digite a nota da segunda prova(P2): ");
scanf("%f", &p2);
printf("Digite a nota da Tarefa: ");
scanf("%f", &t);

media = (p1 + p2 +t) / 3;

printf("Sua média final é: %.2f", media);

return 0;

}
