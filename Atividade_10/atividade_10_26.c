/* Atividade 10 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 26 --> Faça um programa que calcule o desvio padrão de um vetor V
contendo n = 10 números, onde m é a média do vetor.
    Desvio Padrão = raiz(  (somatorio(v-m)²) / n )
*/

#include <stdio.h>
#include <math.h>

int main (void) {
    
    int vetor[10];
    int soma = 0;
    double media, desvio_padrao, somatorio_dp = 0;

    for (int i = 0; i < 10; ++i) {
        printf("Digite um número --> ");
        scanf("%d", &vetor[i]);

        soma += vetor[i]; // para calcular a média
    }
    
    media = (double)soma / 10;

    // Somatório de: (V[i] - média)²
    for (int i = 0; i < 10; ++i) {
        somatorio_dp += pow(vetor[i] - media, 2);
    }

    desvio_padrao = sqrt(somatorio_dp / 10);

    printf("\nDesvio padrão dos elementos do vetor é %.5lf.", desvio_padrao);

    return 0;
}