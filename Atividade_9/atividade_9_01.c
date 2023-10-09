/* Atividade 9 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 1 --> Faça um programa que possua um vetor denominado 'A' que armazene
6 números inteiros. O programa deve executar os seguintes passos:
        (a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
        (b) Armazane em uma variável inteira (simples) a soma entre os valores das
            posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
        (c) Modifique o vetor na posição 4, atribundo a esta posiçao o valor 100.
        (d) Mostre na tela cada valor do vetor A, um em cada linha.
*/

#include<stdio.h>

int main (void) {

    int vetor_A[6] = {1,0,5,-2,-5,7};
    int soma = 0;

    for (int i = 0; i < 6; i++){
        // Soma dos elementos A[0], A[1] e A[5]
        if ((i == 0) || (i == 1) || (i == 5)){
            soma += vetor_A[i];
        }
        if(i == 4){
            vetor_A[i] = 100;
        }
        // Imprimindo os elementos do vetor
        printf("\n     Elemento %d do vetor A = %d", i, vetor_A[i]); 
    }

    printf("\n\n     Soma dos elementos A[0], A[1] e A[5] = %d\n", soma);

    return 0;
}