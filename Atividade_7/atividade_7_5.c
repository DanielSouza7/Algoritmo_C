/* Atividade 7 - ESTRUTURAS DE REPETIÇÃO ----- Aluno: DANIEL SOUZA - UC23100767 */

/* Exercício 5 --> Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
*/

#include<stdio.h>
int main (void){
    int soma = 0, contador;

    printf("-------------------------------------\n");
    printf("--- A soma dos 50 primeiros pares ---\n");
    printf("-------------------------------------\n");

    for (contador = 0; contador <= 100; contador+=2) {    
    
        soma = soma + contador;
    }
    
    printf("   %d\n", soma);
    
    return 0;
}