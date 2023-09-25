/* Atividade 3 - OPERADORES RELACIONAIS ----- Aluno: DANIEL SOUZA - UC23100767
Exercício 2 --> Leia o salário e imprima se ganha mais que o mínimo. */

#include<stdio.h>

int main(void) {
    
    float salario;

    printf("Digite seu salario --> R$ ");
    scanf("%f", &salario);
    printf("\n");

    if(salario > 1320) {
        printf("Voce ganha mais que o salario minimo :)");
    }
    else if(salario == 1320) {
        printf("Voce recebe o salario minimo :/");
    }
    else {
        printf("Voce recebe menos que o salario minimo :(");
    }

    return 0;
}