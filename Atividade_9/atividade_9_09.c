/* Atividade 9 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 9 --> Crie um programa que lê 6 valores inteiros pares e, em seguida,
mostre na tela os valores lidos na ordam inversa.
*/

#include <stdio.h>

int main (void) {

    int vetor[6];
    int numero, cont = 0;

    do {
        printf("Digite um número par --> ");
        scanf("%d", &numero);

        if(numero % 2 == 0){
            vetor[cont] = numero;
            cont++;
        } else {
            printf("\nNúmero INVALIDO, digite novamente.\n");
        }
    
    }while(cont < 5);
    
    printf("-----------------------------------\n");
    printf("Ordem NORMAL");
    for(int i = 0; i < 5; i++){
        printf("\n    %d", vetor[i]);
    }

    printf("\n-----------------------------------\n");
    printf("Ordem INVERSA");
    for(int i = 4; i >= 0; i--){
        printf("\n    %d", vetor[i]);
    }
    printf("\n-----------------------------------\n");

    return 0;
}