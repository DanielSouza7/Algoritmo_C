/* Atividade 3 - OPERADORES RELACIONAIS ----- Aluno: DANIEL SOUZA - UC23100767
Exercício 1 --> Leia a idade e imprima se a pessoa é maior de idade. */

#include<stdio.h>

int main(void){
    
    int idade;

    printf("Digite sua idade --> ");
    scanf("%d", &idade);
    printf("\n");

    if(idade >= 18){
        printf("Voce eh maior de idade.");
    }
    else {
        printf("Voce eh menor de idade.");
    }

    return 0;
}