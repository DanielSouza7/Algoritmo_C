/* Atividade 7 - ESTRUTURAS DE REPETIÇÃO ----- Aluno: DANIEL SOUZA - UC23100767 */

/* Exercício 3 --> Faça um programa que leia um número inteiro N e depois imprima
os N primeiros números naturais ímpares (sem usar comando condicional).   
*/

#include<stdio.h>
int main (void){
    int numero, contador;

    printf("Escreva um numero inteiro positivo --> ");
    scanf("%d", &numero);
    
    printf("\n---------------------------------------------------\n");
    printf("--- Numeros IMPARES de 0 ate o numero escolhido ---\n");
    printf("---------------------------------------------------\n");

    for (contador = 1; contador <= numero; contador+=2) {
        printf("   %d\n", contador);
    }

    return 0;
}