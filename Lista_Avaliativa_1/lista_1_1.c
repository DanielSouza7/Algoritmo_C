/* LISTA AVALIATIVA 1 ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 1 - Criar um algoritmo que receba o valor de x, e calcule e imprima o valor de f(x).
*/

#include <stdio.h>
#include <math.h>

int main (void){
    float x, y;

    printf("Entre com o valor de X --> ");
    scanf("%f", &x);

    y = ((5*x)+3)/sqrt(x*x-16);

    printf("O valor da funcao de X sera --> %.2f", y);

    return 0;
}