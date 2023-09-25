/* Atividade 4 - OPERADORES RELACIONAIS, LÓGICOS e ESTRUTURAS CONDICIONAIS
Aluno: DANIEL SOUZA - UC23100767*/

/* Exercício 3 --> Dados três valores A, B e C, construa um algoritmo, que imprima os
valores de forma ascendente (do menor para o maior). */

#include<stdio.h>

int main (void) {
    int num1, num2, num3, maior, menor, meio;
    
    printf("Escreva tres numeros inteiros --> ");
    scanf("%d%d%d", &num1, &num2, &num3);

    // Determinando qual sera o maior número
    if(num1>num2 && num1>num3){
        maior = num1;
    }
    else if(num2>num1 && num2>num3){
        maior = num2;
    }
    else {
        maior = num3;
    }

    // Determinando qual sera o menor número
    if(num1<num2 && num1<num3){
        menor = num1;
    }
    else if(num2<num1 && num2<num3){
        menor = num2;
    }
    else {
        menor = num3;
    }
    
    // Determinando qual sera o número do meio
    if((maior==num1 && menor==num2) || (maior==num2 && menor==num1)){
        meio = num3;
    }
    else if((maior==num1 && menor==num3) || (maior==num3 && menor==num1)){
        meio = num2;
    }
    else {
        meio = num1;
    }

    // imprimindo na ordem ascendente
    printf("Numeros ordenados de forma ascendente:\n");
    printf("1 --> %d\n", menor);
    printf("2 --> %d\n", meio);
    printf("3 --> %d\n", maior);

    return 0;
}