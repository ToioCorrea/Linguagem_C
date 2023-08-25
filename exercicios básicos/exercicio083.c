/*
Escreva um programa que declare um vetor de números inteiros com tamanho 8. Solicite ao usuário que digite os valores para preencher o vetor. Em seguida, o programa deve ordenar os elementos do vetor em ordem crescente, utilizando um algoritmo de ordenação de sua escolha (por exemplo, Bubble Sort ou Selection Sort). Por fim, exiba o vetor ordenado na tela.
*/



//Bubble Sort ou Selection Sort

#include <stdio.h>

void selectionSort(int vetor[], int tamanho) {
    int i, j, minIndex, temp;
    for (i = 0; i < tamanho - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[minIndex]) {
                minIndex = j;
            }
        }
        // Troca o elemento mínimo com o elemento atual
        temp = vetor[i];
        vetor[i] = vetor[minIndex];
        vetor[minIndex] = temp;
    }
}

int main() {
    int vetor[8];
    int i;

    printf("Digite 8 números inteiros:\n");

    for (i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }

    selectionSort(vetor, 8);

    printf("Vetor ordenado:\n");
    for (i = 0; i < 8; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

/*
#include <stdio.h>

void bubbleSort(int vetor[], int tamanho) {
    int i, j, temp;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j+1]) {
                // Troca os elementos
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
}

int main() {
    int vetor[8];
    int i;

    printf("Digite 8 números inteiros:\n");

    for (i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }

    bubbleSort(vetor, 8);

    printf("Vetor ordenado:\n");
    for (i = 0; i < 8; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}


*/