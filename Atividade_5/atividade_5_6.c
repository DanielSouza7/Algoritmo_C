/* Atividade 5 - OPERADORES RELACIONAIS, LÓGICOS e ESTRUTURAS CONDICIONAIS
Aluno: DANIEL SOUZA - UC23100767*/

/* Exercício 6 --> Codifique um programa que lê um número inteiro. A seguir o programa
deve imprimir uma mensagem para o usuário dizendo se o número digitado é par. Se o número
não for par, o programa não deve fazer nada. */

#include<stdio.h>

int main (void) {
    int num;
    
    printf("Escreva um numero --> ");
    scanf("%d", &num);

    // Usando modulo para saber se o número é par ou não
    if (num % 2 == 0)
        printf("\nO numero digitado eh PAR");

    return 0;
}