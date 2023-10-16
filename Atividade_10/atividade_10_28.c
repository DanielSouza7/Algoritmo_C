/* Atividade 10 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 28 --> Leia 10 números inteiros e armazene em um vetor V. Crie dois novos
vetores v1 e v2. Copie os valores ímpares de V para v1, e os valores pares de V para
v2. note que cada um dos vetores v1 e v2 têm no máximo 10 elementos, mas nem todos os
elementos são utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.
*/

#include <stdio.h>

int main (void) {
    
    int vetor_V[10];
    int vetor_v1[10], cont_v1 = 0; // Ímpares
    int vetor_v2[10], cont_v2 = 0; // Pares

    for(int i = 0; i < 10; i++){
        printf("Digite um número --> ");
        scanf("%d", &vetor_V[i]);
    }

    for(int i = 0; i < 10; i++){
        if (vetor_V[i] % 2 != 0){
            vetor_v1[cont_v1] = vetor_V[i];
            cont_v1++;
        }
        else{
            vetor_v2[cont_v2] = vetor_V[i];
            cont_v2++;
        }
    }

    // Imprimir vetor_v1
    printf("\n-------------------------------------\n");
    printf("Vetor v1 - Elementos Ímpares\n");
    for(int i = 0; i < cont_v1; i++){
        printf("  Vetor_v1[%d] = %d\n", i, vetor_v1[i]);
    }
    
    // Imprimir vetor_v2
    printf("\n-------------------------------------\n");
    printf("Vetor v2 - Elementos Pares\n");
    for(int i = 0; i < cont_v2; i++){
        printf("  Vetor_v2[%d] = %d\n", i, vetor_v2[i]);
    }

    return 0;
}