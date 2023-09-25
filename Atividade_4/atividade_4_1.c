/* Atividade 4 - OPERADORES RELACIONAIS, LÓGICOS e ESTRUTURAS CONDICIONAIS
Aluno: DANIEL SOUZA - UC23100767*/

/* Exercício 1 --> Escreva um algoritmo que leia um número e imprima a raiz quadrada do número
caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo. */

#include<stdio.h>
#include<math.h> //biblioteca matemática

int main (void) {
    int numero, quadrado;
    float raiz;
    
    printf("Escreva um numero --> ");
    scanf("%d", &numero);

    raiz = sqrt(numero);
    quadrado = pow(numero, 2);

    if (numero >= 0)
        printf("\nA raiz quadrada sera --> %.2f", raiz);
    
    else
        printf("\nO quadrado do numero sera --> %d", quadrado);
    
    return 0;
}