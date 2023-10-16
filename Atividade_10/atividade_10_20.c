/* Atividade 10 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 20 --> Escreva um programa que leia números inteiros no intervalo [0 a 50]
e os armazene em um vetor com 10 posições. Preencha um segundo vetor apenas com os
números ímpares do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.
*/

#include <stdio.h>

int main (void) {
    
    int vetor[10], i;
    int vetor_impares[10], j = 0;
       
    for (int i = 0; i < 10; i++){
        do{
            printf("Digite um número (entre 0 e 50) --> ");
            scanf("%d", &vetor[i]);

            if (vetor[i] < 0 || vetor[i] > 50){
                printf("Número INVALIDO   ");
            }
        } while (vetor[i] < 0 || vetor[i] > 50);

        if (vetor[i] % 2 != 0){
            vetor_impares[j] = vetor[i];
            j++;
        }
    }
    printf("-------------------------------------------\n");

    // Vetor de entrada
    printf("Vetor com os valores definidos pelo usuário\n");
    for(i = 0; i < 10; i+=2){
		printf("    %d    %d\n", vetor[i], vetor[i+1]);
	}
    printf("\n-------------------------------------------\n");
	
    // Vetor com os impares do vetor de entrada
    printf("Vetor com apenas os elementos ÍMPARES\n");
    for(i = 0; i < j; i+=2){
		printf("    %d", vetor_impares[i]);
        if (i + 1 < j){
            printf("    %d\n", vetor_impares[i+1]);
        }
    }
    printf("\n-------------------------------------------\n");

    return 0;
}