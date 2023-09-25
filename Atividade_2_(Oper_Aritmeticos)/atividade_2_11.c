/* Atividade 2 - OPERADORES ARITIMÉTICOS ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 11 --> Uma revendedora de carros usados paga a seus funcionários vendedores um salário
fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas
por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor
total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva
o salário final do vendedor.*/

#include<stdio.h>

int main(void) {
    
    int carrosVendidos;
    float salarioFixo, gratificacao, valorVendas, comissao, valorporCarro, salarioFinal;
    
    printf("Digite seu salario fixo --> R$ ");
    scanf("%f", &salarioFixo);
    printf("Digite quantos carros voce vendeu --> ");
    scanf("%d", &carrosVendidos);
    printf("Digite o valor total da vendas --> R$ ");
    scanf("%f", &valorVendas);
    printf("Digite quanto voce recebe de comissao por cada venda --> R$ ");
    scanf("%f", &valorporCarro);

    comissao = carrosVendidos * valorporCarro;
    gratificacao = valorVendas * 0.05;
    salarioFinal = salarioFixo + gratificacao + comissao;
    
    printf("\nSua gratificacao de 5%% do valor total de vendas --> R$ %.2f", gratificacao);
    printf("\nSua comissao por cada venda --> R$ %.2f\n", comissao);
    printf("\nSeu salario total desse mes --> R$ %.2f\n", salarioFinal);
    
    return 0;
}