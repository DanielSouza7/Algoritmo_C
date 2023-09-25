/* Atividade 2 - OPERADORES ARITIMÉTICOS ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 9 --> Escreva um algoritmo para ler o salário mensal atual de um funcionário e
o percentual de reajuste. Calcular e escrever o valor do novo salário.*/

#include<stdio.h>

int main(void) {
    
    float salarioAtual, reajuste, salarioNovo;
    
    printf("Digite o salario atual --> R$ ");
    scanf("%f", &salarioAtual);
    printf("O reajuste salarial, em porcentagem, sera de --> ");
    scanf("%f", &reajuste);

    salarioNovo = salarioAtual + (salarioAtual*reajuste/100);

    printf("\nO novo salario sera --> R$ %.2f\n", salarioNovo);

    return 0;
}