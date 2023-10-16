/* Atividade 10 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 15 --> Leia um vetor com 20 números inteiros. Escreva os elementos
do vetor eliminando elementos repetidos.
*/

#include <stdio.h>

int main (void) {

    int vetor[20];
    int repetido;

    for(int i = 0; i < 20; i++){
        printf("Digite um número --> ");
        scanf("%d", &vetor[i]);
    }
    
    printf("-------------------------------------------\n");
    printf("Elementos DISTINTOS do vetor\n");
    
    for(int i = 0; i < 20; i++){
        repetido = 0;
        for(int j = i + 1; j < 21; j++){
            
            if(vetor[i] == vetor[j]){
                repetido = 1;
                break;
            }
        }

        if (repetido != 1) {
            printf("   %d\n", vetor[i]);
        }
    }
    
    return 0;
}