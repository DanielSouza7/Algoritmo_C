/* Atividade 9 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 5 --> Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.
*/

#include<stdio.h>

int main (void) {

    int vetor[10];
    int pares = 0;

    for (int i = 0; i < 10; i++){
        printf("Digite um número --> ");
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0){
            pares++;
        }
    }
    printf("\n-----------------------------");
    printf("\n   Quantidade de pares = %d", pares);
    printf("\n-----------------------------");
    

    return 0;
}