/* Atividade 7 - ESTRUTURAS DE REPETIÇÃO ----- Aluno: DANIEL SOUZA - UC23100767 */

/* Exercício 2 --> Faça um programa que leia um número inteiro positivo N e
imprima todos os números naturais de 0 até N em ordem decrescente.  
*/

#include<stdio.h>
int main (void){
    int numero, contador;

    printf("Escreva um numero inteiro positivo --> ");
    scanf("%d", &numero);

    printf("\n-----------------------------------------\n");
    printf("--- Ordem DECRESCENTE do numero ate 0 ---\n");
    printf("-----------------------------------------\n");

    for (contador = numero; contador >= 0; contador--){
        printf("    %d\n", contador);
    }

    return 0;
}