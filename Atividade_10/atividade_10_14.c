/* Atividade 10 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 14 --> Faça um programa que leia um vetor de 10 posições e verifique se
existem valores iguais e os escreva na tela.
*/

#include <stdio.h>

int main (void) {

    int vetor[10];
    int repetido = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite um número --> ");
        scanf("%d", &vetor[i]);
    }
    printf("--------------------------------------\n");
    
    for(int i = 0; i < 10; i++){
        
        for(int j = i + 1; j < 10; j++){
            
            if(vetor[i] == vetor[j]){
                printf("  O número %d está repetindo.\n", vetor[i]);
                repetido = 1;
                break;
            }
        }
    }    
    
    if(repetido != 1){
        printf("  Não tem valores repetidos");            
    }

    printf("--------------------------------------\n");    
    
    return 0;
}