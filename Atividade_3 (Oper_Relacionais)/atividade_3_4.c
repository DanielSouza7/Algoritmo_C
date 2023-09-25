/* Atividade 3 - OPERADORES RELACIONAIS ----- Aluno: DANIEL SOUZA - UC23100767
Exercício 4 --> Leia o peso e imprima se é menor que 60kg. */

#include<stdio.h>

int main(void) {
    
    float peso;

    printf("Digite seu peso em quilos --> ");
    scanf("%f", &peso);
    printf("\n");

    if(peso < 60) {
        printf("Voce pesa menos que 60 kg");
    }
    else if(peso == 60) {
        printf("Voce pesa exatos 60 kg");
    }
    else {
        printf("Voce pesa mais que 60 kg");
    }

    return 0;
}