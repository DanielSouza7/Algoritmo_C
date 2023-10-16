/* Atividade 10 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 21 --> Faça um programa que receba do usuário dois vetores, A e B,
com 10 números inteiros cada. Crie um novo vetor denominado C calculando
C = A - B. Mostre na tela os dados do vetor C.
*/

#include <stdio.h>

int main (void) {
    
    int vetor_a[10], vetor_b[10], vetor_c[10];
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
    
    // Vetor C
    printf("Vetor C = Vetor A - Vetor B\n");
    
    for (i = 0; i < 10; i++){
        
        vetor_c[i] = (vetor_a[i]) - (vetor_b[i]);

        printf("   Vetor_C[%d] = %d\n", i, vetor_c[i]);
    }

    return 0;
}