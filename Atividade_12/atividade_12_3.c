/* ATIVIDADE 12 - FUNÇÕES - DANIEL SOUZA UC2310767

EXERCICIO 3 - Faça um procedimento que receba uma matriz A(10,10),
por parâmetro, e realize as seguintes trocas:
    - a linha 2 com a linha 8;
    - a coluna 4 com a coluna 10;
    - a diagonal principal com a secundária;
    - a linha 5 com a coluna 10;

O procedimento deve retornar a matriz alterada.
*/

#include <stdio.h>

void troca_linhas (int matriz [10][10]);
void troca_colunas (int matriz [10][10]);
void troca_diagonal (int matriz [10][10]);
void troca_linha_coluna (int matriz[10][10]);
void imprimir_matriz (int matriz[10][10]);

int main () {
    int matriz[10][10];
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz [i][j] = i * 10 + j + 1;
        }
    }

    printf("\n----------------------------- MATRIZ ORIGINAL -----------------------------\n");
    imprimir_matriz (matriz);
    printf("\n");
    
    troca_linhas (matriz);
    troca_colunas (matriz);
    troca_diagonal (matriz);
    troca_linha_coluna (matriz);

    return 0;
}


// Função que trocará a linhas 2 pela 8
void troca_linhas (int matriz[10][10]) {
    
    printf("\n-------------------------- Trocar linhas 2 pela 8 -------------------------\n");
    
    for (int i = 0; i < 10; i++) {
        int aux = matriz[1][i];
        matriz[1][i] = matriz[7][i];
        matriz[7][i] = aux;
    }
    
    imprimir_matriz (matriz);

    return;
}

// Função que trocará a coluna 4 pela 10
void troca_colunas (int matriz[10][10]) {
    
    printf("\n------------------------- Trocar coluna 4 pela 10 -------------------------\n");

    for (int i = 0; i < 10; i++) {
        int aux = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = aux;
    }

    imprimir_matriz (matriz);

    return;
}

// Função que trocará a diagonal primária pela secundária
void troca_diagonal (int matriz[10][10]) {
    
    printf("\n----------------------------- Trocar diagonais ----------------------------\n");

    for (int i = 0; i < 10; i++) {
            int aux = matriz[i][i];
            matriz[i][i] = matriz[i][9-i];
            matriz[i][9-i] = aux;
    }

    imprimir_matriz (matriz);

    return;
}

// Função que trocará a linha 5 com a coluna 10
void troca_linha_coluna (int matriz[10][10]) {
    
    printf("\n---------------------- Trocar linha 5 pela coluna 10 ----------------------\n");

    for (int i = 0; i < 10; i++) {
        int aux = matriz[4][i];
        matriz[4][i] = matriz[i][9];
        matriz[i][9] = aux;
    }

    imprimir_matriz (matriz);

    return;
}

// Função para imprimir a matriz
void imprimir_matriz (int matriz[10][10]) {
    for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 10; j++) {
            printf("%d\t", matriz[i][j]);
        }

        printf("\n");
    }

    return;
}