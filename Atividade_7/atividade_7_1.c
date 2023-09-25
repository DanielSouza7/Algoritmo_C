/* Atividade 7 - ESTRUTURAS DE REPETIÇÃO ----- Aluno: DANIEL SOUZA - UC23100767 */

/* Exercício 1 --> Faça um programa que leia um número inteiro positivo N
e imprima todos os números naturais de 0 até N em ordem crescente. 
*/

#include<stdio.h>
int main (void){
    int numero, contador;

    printf("Escreva um numero inteiro positivo --> ");
    scanf("%d", &numero);
    
    printf("\n-----------------------------------------\n");
    printf("--- Ordem CRESCENTE de 0 ate o numero ---\n");
    printf("-----------------------------------------\n");

    for (contador = 0; contador <= numero; contador++){
        printf("    %d\n", contador);
    }

    return 0;
}