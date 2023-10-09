/* Atividade 8 - ESTRUTURAS DE REPETIÇÃO ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 3 --> Escreva um programa que leia um número inteiro, maior ou igual a zero,
do usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no
termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois
termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.
*/

#include <stdio.h>

int main (void){
    int num, i;
    int elemento1 = 0, elemento2 = 1, elemento3;

    printf("--------- SEQUÊNCIA DE FIBONACCI ---------");
    printf("\n------------------------------------------");
    printf("\nPosição do elemento a ser impresso --> ");
    scanf("%d", &num);

    for (i = 2; i < num; i++){ // O i é igual a 2 porque já foi determinado os dois primeiros elementos da squencia de Fibonacci (fib1 = 0; fib2 = 1)
        elemento3 = elemento1 + elemento2;
        elemento1 = elemento2;
        elemento2 = elemento3;
    }

    printf("\nElemento da posição %dº --> %d", num, elemento3);

    return 0;
}