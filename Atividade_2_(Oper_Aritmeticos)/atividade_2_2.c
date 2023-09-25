/* Atividade 2 - OPERADORES ARITIMÉTICOS ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 2 --> Escreva um programa que receba um número qualquer e mostre o seu dobro.*/

#include<stdio.h>

int main(void) {
    int num, dobro;
    
    printf("Escreva um numero --> ");
    scanf("%d", &num);

    dobro = num * 2;

    printf("\nO dobro sera --> %d\n", dobro);

    return 0;
}