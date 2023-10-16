/* Atividade 10 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 18 --> Faça um programa que leia um vetor de 10 números. Leia um número X.
Conte os múltiplos de um número inteiro X num vetor e mostre-os na tela.
*/

#include <stdio.h>

int main (void) {
    
    int vetor[10];
    int x, conte = 0;

    for (int i = 0; i < 10; i++){
        printf("Digite um número --> ");
        scanf("%d", &vetor[i]);
    }
    printf("\n------------------------------\n");
    printf("Determine o valor de X --> ");
    scanf("%d", &x);
    printf("------------------------------\n");
    for (int i = 0; i < 10; i++){
        if (vetor[i] % x == 0){
            conte++;
            printf("   O número %d é multiplo de %d.\n", vetor[i], x);
        }
    }

    printf("\nO vetor possui %d elementos múltiplos de %d.\n", conte, x);
    return 0;
}