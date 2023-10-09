/* Atividade 9 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 6 --> Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá
ser impresso o maior e o menor elemento do vetor.
*/

#include <stdio.h>

int main (void) {

    int vetor[10];
    int maior, menor;

    for (int i = 0; i < 10; i++){
        printf("Digite um número --> ");
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];
    
    for(int i = 0; i < 10; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }

    printf("\n--------------------------");
    printf("\n   Maior valor = %d", maior);
    printf("\n   Menor valor = %d", menor);
    printf("\n--------------------------");

    return 0;
}