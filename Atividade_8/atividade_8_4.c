/* Atividade 8 - ESTRUTURAS DE REPETIÇÃO ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 4 --> Faça um algoritmo que leia um número positivo e imprima seus divisores.
Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.
*/

#include <stdio.h>

int main (void){
    int num, i, div = 1;

    printf("Escreva um número --> ");
    scanf("%d", &num);
    printf("Seus divisores --> ");

    for (i = 0; i < num; i++){
        if ( num % div == 0){
            printf("   %d", div);
        }
        div++;
    }
       
    return 0;
}