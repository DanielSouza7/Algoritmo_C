/* ATIVIDADE 12 - FUNÇÕES - DANIEL SOUZA UC23100767

EXERCICIO 4 - Faça um procedimento que receba, por parâmetro, uma matriz 61x10.
O procedimento deve somar individualmente as colunas da matriz e armazenar o
resultado na 61a linha da matriz. O procedimento deve retornar a matriz alterada.
*/

#include <stdio.h>

void somar (int matriz[61][10]);
void imprimir_matriz (int matriz[61][10]);


int main () {
    int matriz[61][10];
    
    for (int i = 0; i < 61; i++) {
        for (int j = 0; j < 10; j++) {
            matriz [i][j] = i * 10 + j;
        }
    }

    somar (matriz);
    imprimir_matriz (matriz);
    
    return 0;
}

// Função para imprimir a matriz
void imprimir_matriz (int matriz[61][10]) {
    for (int i = 0; i < 61; i++) {

        for (int j = 0; j < 10; j++) {
            printf("%d\t", matriz[i][j]);
        }

        printf("\n");
    }

    return;
}

// Função para somar
void somar (int matriz[61][10]) {
    for (int j = 0; j < 10; j++) {
        matriz[60][j] = 0;
    }
    for (int j = 0; j < 10; j++) {
        for (int i = 0; i < 60; i++) {
            matriz[60][j] += matriz[i][j];
        }
    }
}