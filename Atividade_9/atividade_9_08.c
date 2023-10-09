/* Atividade 9 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 8 --> Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os
valores lidos na ordem inversa.
*/

#include <stdio.h>

int main (void) {

    int vetor[6];

    for (int i = 0; i < 6; i++){
        printf("Digite um número --> ");
        scanf("%d", &vetor[i]);
    }
    printf("-------------------------------\n");
    printf("  Valores na ordem INVERSA\n");
    for(int i = 5; i >= 0; i--){
        printf("     %d\n", vetor[i]);
    }

    return 0;
}