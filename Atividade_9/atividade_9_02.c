/* Atividade 9 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 2 --> Crie um programa que lê 6 valores inteiros e, em seguida,
mostre na tela os valores lidos.
*/

#include<stdio.h>

int main (void) {

    int vetor[6];

    for (int i = 0; i < 6; i++){
        printf("Digite um número --> ");
        scanf("%d", &vetor[i]);
    }
    printf("\n-------------------------------------");
    for (int i = 0; i < 6; i++){
        printf("\n   Elemento %d do vetor A = %d", i, vetor[i]); 
    }
    printf("\n-------------------------------------\n");

    return 0;
}