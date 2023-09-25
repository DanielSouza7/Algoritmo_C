/* Atividade 3 - OPERADORES RELACIONAIS ----- Aluno: DANIEL SOUZA - UC23100767
Exercício 3 --> Leia a altura e imprima se é maior que 1.8m. */

#include<stdio.h>

int main(void) {
    
    int altura;

    printf("Digite sua altura em centimetros --> ");
    scanf("%d", &altura);
    printf("\n");

    if(altura > 180) {
        printf("Voce eh maior que 1,80 metro.");
    }
    else if(altura < 180) {
        printf("Voce eh menor que 1,80 metro.");
    }
    else {
        printf("Voce tem exatamente 1,80 metro.");
    }

    return 0;
}