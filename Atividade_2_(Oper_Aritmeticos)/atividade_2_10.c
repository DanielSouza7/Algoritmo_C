/* Atividade 2 - OPERADORES ARITIMÉTICOS ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 10 --> O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o
percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler
o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor.*/

#include<stdio.h>

int main(void) {
    
    float custoFabrica, distribuidor, perDistribuidor=28, impostos, perImpostos=45, carroNovo;
    
    printf("Custo de fabrica do carro --> R$ ");
    scanf("%f", &custoFabrica);
    
    distribuidor = custoFabrica*perDistribuidor/100;
    impostos = custoFabrica*perImpostos/100;
    carroNovo = custoFabrica + distribuidor + impostos;

    printf("\nO valor pago ao distribuidor sera --> R$ %.2f", distribuidor);
    printf("\nO valor pago em impostos sera --> R$ %.2f\n", impostos);
    printf("\nO valor do carro novo sera --> R$ %.2f\n", carroNovo);

    return 0;
}