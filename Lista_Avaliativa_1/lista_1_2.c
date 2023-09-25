/* LISTA AVALIATIVA 1 ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 2 - Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem
1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima
quantos anos serão necessários para que Zé seja maior que Chico.
*/

#include <stdio.h>
#include <math.h>

int main (void) {
    int ano = 0;
    float chico, ze;

    do {
        chico = 1.50 + 0.02 * ano;
        ze = 1.10 + 0.03 * ano;

        ano++;
    } while (ze < chico);

    printf("------------------------------------------------------------------\n");
    printf("--- Serao necessarios %d anos para que Ze seja maior que Chico ---\n", ano);
    printf("------------------------------------------------------------------\n");

    return 0;
}