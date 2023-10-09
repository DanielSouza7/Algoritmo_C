/* Atividade 9 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 4 --> Faça um programa que leia um vetor de 8 posiçoes e, em seguida, leia também
dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa
deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.
*/

#include <stdio.h>

int main (void) {

    int vetor[8];
    int x, y, soma = 0;

    for (int i = 0; i < 8; i++){
        printf("Digite um número --> ");
        scanf("%d", &vetor[i]);
    }
    printf("----------------------------------------------------------\n");
    do {
        printf("Digite a posição x do vetor (posição entre 0 e 7) --> ");
        scanf("%d", &x);
        printf("Digite a posição y do vetor (posição entre 0 e 7) --> ");
        scanf("%d", &y);
        printf("----------------------------------------------------------\n");

        if((x >= 0) && (x < 8) && (y >= 0) && (y < 8)){
            for(int i = 0; i < 8; i++){
                if(i == x){
                    soma += vetor[i];
                }
                if(i == y){
                    soma += vetor[i];
                }
            }
        } else {
            printf("\nValores de X e Y INVÁLIDOS\n");
        }
    
    } while (x < 0 || x > 7 || y < 0 || y > 7);

    printf("\nSoma dos valores das posições %d e %d = %d", x, y, soma);
    

    return 0;
}