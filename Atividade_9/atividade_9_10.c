/* Atividade 9 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 10 --> Faça um programa para ler a nota da prova de 15 alunos e armazene
num vetor, calcule a imprima a média geral.
*/

#include<stdio.h>
#define alunos 15

int main (void) {
    float nota[alunos];
    float soma = 0;
    float media = 0;

    for(int i = 0; i < alunos; i++){
        printf("Nota do aluno --> ");
        scanf("%f", &nota[i]);
        
        soma += nota[i];
    }
    printf("-----------------------------------\n");

    media = soma / alunos;

    printf("   Média geral = %.2f", media);
    printf("\n-----------------------------------\n");
    return 0;
}