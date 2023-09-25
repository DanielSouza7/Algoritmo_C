/* Atividade 2 - OPERADORES ARITIMÉTICOS ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 3 --> Dadas as medidas de uma sala, informe sua área.*/

#include<stdio.h>

int main(void) {
    
    float largura, comprimento, area;
    
    printf("Escreva a largura --> ");
    scanf("%f", &largura);
    printf("Escreva o comprimento --> ");
    scanf("%f", &comprimento);

    area = largura * comprimento;

    printf("\nA area calculada sera --> %.2f\n", area);

    return 0;
}