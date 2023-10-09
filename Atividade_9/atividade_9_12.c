/* Atividade 9 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 12 --> Fazer um programa para ler 5 valores e, em seguida mostra
todos as valores lidos juntamente com o maior, o menor e a média dos valores.
*/

#include<stdio.h>

int main (void) {

    int vetor[5];
    int maior, menor, soma = 0;
    float media = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite um número --> ");
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    media = (float)soma / 5;
    
    maior = vetor[0];
    menor = vetor[0];

    for(int i = 0; i < 5; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }

    printf("-----------------------------------");
    printf("\n  Maior valor = %d", maior);
    printf("\n  Menor valor = %d", menor);
    printf("\n  Soma = %d", soma);
    printf("\n  Média = %.2f", media);
    printf("\n-----------------------------------\n");
    

    return 0;
}