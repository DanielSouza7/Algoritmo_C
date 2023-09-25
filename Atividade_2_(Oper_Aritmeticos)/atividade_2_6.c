/* Atividade 2 - OPERADORES ARITIMÉTICOS ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 6 --> Faça um programa em que o usuário digite o custo de uma determinada mercadoria,
em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo
teclado). Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de
lucro da mercadoria.*/

#include<stdio.h>

int main(void){
    
    float compra, frete, despesas, compraBruta, venda, lucroBruto, lucro;
    
    printf("Digite o custo da mercadoria --> R$ ");
    scanf("%f", &compra);
    printf("Digite o valor do frete --> R$ ");
    scanf("%f", &frete);
    printf("Digite o valor de despesas eventuais --> R$ ");
    scanf("%f", &despesas);

    compraBruta = compra + frete + despesas;
    
    printf("\nO valor bruto da compra da mercadoria foi de R$ %.2f", compraBruta);
    printf("\nDigite o valor que sera cobrada na venda da mercadoria --> R$ ");
    scanf("%f", &venda);

    lucroBruto = venda - compraBruta;
    lucro = (lucroBruto / compraBruta) * 100;

    printf("\nO lucro sera: R$ %.2f", lucroBruto);
    printf("\nA porcentagem de lucro sera --> %.2f%%\n", lucro);

    return 0;
}