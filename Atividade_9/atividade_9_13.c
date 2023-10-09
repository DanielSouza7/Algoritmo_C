/* Atividade 9 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 13 --> Fazer um programa para ter 5 valores e, em seguida, mostrar a posição onde
se encontram o maior e o menor valor.
*/

#include<stdio.h>

int main (void) {

    int vetor[5];
    int maior, menor;
    int posicao_maior = 0, posicao_menor = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite um número --> ");
        scanf("%d", &vetor[i]);
    }
    
    maior = vetor[0];
    menor = vetor[0];

    for(int i = 0; i < 5; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            posicao_maior = i;
        }
        if(vetor[i] < menor){
            menor = vetor[i];
            posicao_menor = i;
        }
    }
    
    printf("--------------------------------------");
    printf("\n  Maior valor = %d", maior);
    printf("\n  Posição do MAIOR valor = %d", posicao_maior);
    printf("\n--------------------------------------");
    printf("\n  Menor valor = %d", menor);
    printf("\n  Posição do MENOR valor = %d", posicao_menor);
    printf("\n--------------------------------------\n");

    return 0;
}