/* Atividade 9 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 3 --> Ler um conjunto de números reais, armazenando-o em vetor e
calcular o quadrado das componentes deste vetor, armazenando o resultado em outro
vetor. 0s conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.
*/

#include<stdio.h>

int main (void) {

    int vetor_a[10]; // entrada
    int vetor_b[10]; // cada elemento deve ser o quadrado do elemento do vetor_a

    for (int i = 0; i < 10; i++){
        printf("Digite um número --> ");
        scanf("%d", &vetor_a[i]);

        vetor_b[i] = vetor_a[i] * vetor_a[i];
    }
    printf("-------------------------------------");
    for (int i = 0; i < 10; i++){
        printf("\nA[%d] = %d  -->  ", i, vetor_a[i]);
        printf("B[%d] = %d", i, vetor_b[i]);
    }
    printf("\n-------------------------------------");

    return 0;
}