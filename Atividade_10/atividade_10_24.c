/* Atividade 10 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 24 --> Faça um programa que leia dez conjuntos de dois valores, o primeiro
representando o número do aluno e o segundo representando a sua altura em metros.
Encontre o aluno mais baixo e o mais alto. Mostre o número do aluno mais baixo e do
aluno mais alto, juntamente com suas alturas.
*/

#include <stdio.h>

int main (void) {
    
    float aluno[10];
    float maior, menor;
    int maior_aluno, menor_aluno;

    for(int i = 0; i < 10; i++){
        printf("Digite a altura do aluno --> ");
        scanf("%f", &aluno[i]);
    }

    maior = aluno[0];
    maior_aluno = 0;

    for(int i = 0; i < 10; i++){
        if(aluno[i] > maior){
            maior = aluno[i];
            maior_aluno = i;
        }
    }
    printf("\nO aluno nº %d é o mais alto da turma, com %.2f metro.", maior_aluno, maior);

    menor = aluno[0];
    menor_aluno = 0;
    
    for(int i = 0; i < 10; i++){
        if(aluno[i] < menor){
            menor = aluno[i];
            menor_aluno = i;
        }
    }
    printf("\nO aluno nº %d é o mais baixo da turma, com %.2f metro.", menor_aluno, menor);

    return 0;
}