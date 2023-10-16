/* Atividade 10 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 22 --> Faça um programa que leia dois vetores de 10 posições e calcule
outro vetor contendo, nas posições pares os valores do primeiro e nas posições
impares os valores do segundo.
*/

#include <stdio.h>

int main (void) {
    
    int vetor_a[10], vetor_b[10], vetor_c[20];
    int i = 0;

    // Entradas do vetor A
    for(i = 0; i < 10; i++){
        printf("Digite um número (vetor A)--> ");
        scanf("%d", &vetor_a[i]);
    }
    printf("--------------------------------------\n");
    
    // Entradas do vetor B
    for(i = 0; i < 10; i++){
        printf("Digite um número (vetor B)--> ");
        scanf("%d", &vetor_b[i]);
    }
    printf("--------------------------------------\n");

    for(i = 0; i < 20; i++){
        // posições pares --> recebe valor do vetor A
        if (i % 2 == 0){
            vetor_c[i] = vetor_a[i/2];
        }
        // posições impares --> recebe valor do vetor B
        else {
            vetor_c[i] = vetor_b[i/2]; // 1 dividido por 2 em numeros inteiros é 0
        }
    }

    for(i = 0; i < 20; i++){
        printf("   Vetor_C[%d] = %d\n", i, vetor_c[i]);
    }

    return 0;
}