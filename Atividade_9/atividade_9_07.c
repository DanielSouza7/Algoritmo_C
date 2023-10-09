/* Atividade 9 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 7 --> Escreva um programa que leia 10 números inteiros e os armazene em um vetor.
Imprima o vetor, o maior elemento e a posiçăo que ele se encontra.
*/

#include<stdio.h>

int main (void) {

    int vetor[10];
    int maior, posicao_maior;

    for (int i = 0; i < 10; i++){
        printf("Digite um número --> ");
        scanf("%d", &vetor[i]);
    }
    
    maior = vetor[0];
    
    for(int i = 0; i < 10; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            posicao_maior = i;
        }       
    }

    printf("\n-----------------------------");
    printf("\n   Maior valor = %d", maior);
    printf("\n   Posição maior valor = %d", posicao_maior);
    printf("\n-----------------------------");

    return 0;
}