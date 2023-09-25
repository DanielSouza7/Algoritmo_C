/* Atividade 4 - OPERADORES RELACIONAIS, LÓGICOS e ESTRUTURAS CONDICIONAIS
Aluno: DANIEL SOUZA - UC23100767*/

/* Exercício 5 --> Construir um algoritmo que leia um número e imprima se ele é
igual a 5, a 200, a 400, se está no intervalo entre 500 e 1000, ou se ela está fora
dos escopos anteriores.  */

#include<stdio.h>

int main (void) {
    int num;
    
    printf("Escreva um numero inteiro --> ");
    scanf("%d", &num);
    printf("\n");

    // Determinando qual sera o maior número
    if(num==5){
        printf("O numero digitado eh igual a 5");
    }
    else if(num==200){
        printf("O numero digitado eh igual a 200");
    }
    else if(num==400){
        printf("O numero digitado eh igual a 400");
    }
    else if(num>500 && num<1000){
        printf("O numero digitado esta no intervalo entre 500 e 1000");
    }
    else{
        printf("O numero digitado esta fora dos parametros permitidos:\n");
        printf("    - igual a 5 ou 200 ou 400\n");
        printf("    - no intervalo entre 500 e 1000\n");
    }

    return 0;
}