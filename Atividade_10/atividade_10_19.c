/* Atividade 10 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 19 --> Faça um vetor de tamanho 50 preenchido com os seguinte valor:
(i + 5 * i) % (i + 1), sendo i a posição do elemento no vetor. Em seguida
imprima o vetor na tela.
*/

#include <stdio.h>

int main (void) {
    
    int vetor[50];

    for(int i = 0; i < 50; i++){
        vetor[i] = (i + 5 * i) % (i + 1);
    }
    printf("---------------------------------\n");
    printf("vetor[i] = (i + 5 * i) %% (i + 1)\n");
    printf("---------------------------------\n");
    printf("Vetor:\n");
    
    for(int i = 0; i < 50; i++){
        printf("   vetor[%d] = %d\n", i, vetor[i]);
    }
       
    return 0;
}