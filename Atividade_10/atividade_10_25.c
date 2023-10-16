/* Atividade 10 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 25 --> Faça um programa que preencha um vetor de tamanho 100 com os
100 primeiros naturais que não são múltiplos de 7 ou que terminam com 7.
*/

#include <stdio.h>

int main (void) {
    
    int vetor[100];
    int numero = 0;

    for(int i = 0; i < 100; i++){
        if ((numero % 7 != 0) && (numero % 10 != 7)){
            vetor[i] = numero;
        } else {
            i--;
        }
        numero++;
    }

    printf("\nPrimeiros naturais que não são múltiplos de 7 ou que terminam com 7:\n");
    for(int i = 0; i < 100; i++){
        printf("%d    ", vetor[i]);
    }

    return 0;
}