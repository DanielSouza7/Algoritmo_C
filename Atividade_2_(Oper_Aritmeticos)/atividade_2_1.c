/* Atividade 2 - OPERADORES ARITIMÉTICOS ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 1 --> Escreva um programa que receba dois números e mostre a soma, a subtração,
a multiplicação e a divisão desses números.*/

#include<stdio.h>

int main(void) {
    
    int num1, num2, soma, sub, mult;
    float div;
    
    printf("Escreva dois numeros --> ");
    scanf("%d %d", &num1, &num2);

    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    printf("\nA soma sera --> %d", soma);
    printf("\nA subtracao sera --> %d", sub);
    printf("\nA multiplicacao sera --> %d", mult);
    printf("\nA divisao sera --> %.2f\n", div);

    return 0;
}