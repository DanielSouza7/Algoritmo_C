/* Atividade 9 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 11 --> Faça um programa que preencha um vetor com 10 números reais, calcule
e mostre a quantidade de números negativos e a soma dos números positivos desse vetor.
*/

#include<stdio.h>

int main (void) {
    int vetor[10];
    int soma_positivos = 0;
    int quatidade_negativos = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite um número --> ");
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 10; i++){
        if(vetor[i] > 0){
            soma_positivos += vetor[i];
        }
        else{
            quatidade_negativos++;
        }  
    }
    printf("\n-----------------------------------");
    printf("\n  Soma dos positivos = %d", soma_positivos);
    printf("\n  Quantidade de negativos = %d", quatidade_negativos);
    printf("\n-----------------------------------\n");

    return 0;
}