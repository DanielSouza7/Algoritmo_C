/* Atividade 10 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 17 --> Leia um vetor de 10 posições e atribua valor 0 para todos os
elementos que possuírem valores negativos.
*/

#include <stdio.h>

int main (void) {

    int vetor[10];

    for (int i = 0; i < 10; i++){
        printf("Digite um número --> ");
        scanf("%d", &vetor[i]);
    }
    printf("-------------------------------------\n");
    for (int i = 0; i < 10; i++){
        if(vetor[i] < 0){
            vetor[i] = 0;
        }

        printf("   Vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}