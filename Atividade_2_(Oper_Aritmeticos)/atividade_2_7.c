/* Atividade 2 - OPERADORES ARITIMÉTICOS ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 7 --> Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área.*/

#include<stdio.h>
#include<math.h> // usando por conta do POW usado na linha 13.

int main(void) {
    
    float raio, area;
    
    printf("Digite o raio de um circulo --> ");
    scanf("%f", &raio);
    
    area = 3.14159265 * (pow(raio, 2));

    printf("A area do circulo sera --> %.2f\n", area);
    
    return 0;
}