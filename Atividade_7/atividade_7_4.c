/* Atividade 7 - ESTRUTURAS DE REPETIÇÃO ----- Aluno: DANIEL SOUZA - UC23100767 */

/* Exercício 4 --> Faça um programa que determine e mostre os cinco primeiros
múltiplos de 3 considerando números maiores que 0.
*/

#include<stdio.h>
int main (void){
    int contador;

    printf("-----------------------------------------\n");
    printf("--- Os cinco primeiros multiplos de 3 ---\n");
    printf("-----------------------------------------\n");

    for (contador = 0; contador <= 12; contador+=3) {
        printf("   %d\n", contador);    
    }

    return 0;
}