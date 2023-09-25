/* Atividade 4 - OPERADORES RELACIONAIS, LÓGICOS e ESTRUTURAS CONDICIONAIS
Aluno: DANIEL SOUZA - UC23100767*/

/* Exercício 2 --> Construa um algoritmo que dado quatro valores, A, B, C e D,
o algoritmo imprima o maior e o menor valor. */

#include<stdio.h>

int main (void){
    int num1, num2, num3, num4;
    
    printf("Escreva quatro numeros inteiros --> ");
    scanf("%d%d%d%d", &num1, &num2, &num3,&num4);

    // Determinando o MAIOR número
    if(num1>num2 && num1>num3 && num1>num4){
        printf("\nO maior numero --> %d\n", num1);
    }
    if(num2>num1 && num2>num3 && num2>num4){
        printf("\nO maior numero --> %d\n", num2);
    }
    if(num3>num1 && num3>num2 && num3>num4){
        printf("\nO maior numero --> %d\n", num3);
    }
    if(num4>num1 && num4>num2 && num4>num3){
        printf("\nO maior numero --> %d\n", num4);
    }

    // Determinando o MENOR número
    if(num1<num2 && num1<num3 && num1<num4){
        printf("\nO menor numero --> %d\n", num1);
    }
    if(num2<num1 && num2<num3 && num2<num4){
        printf("\nO menor numero --> %d\n", num2);
    }
    if(num3<num1 && num3<num2 && num3<num4){
        printf("\nO menor numero --> %d\n", num3);
    }
    if(num4<num1 && num4<num2 && num4<num3){
        printf("\nO menor numero --> %d\n", num4);
    }

    return 0;
}