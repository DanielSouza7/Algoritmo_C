/* Atividade 2 - OPERADORES ARITIMÉTICOS ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 5 --> Dado um valor em reais e a cotação do dólar, converta esse valor para dólares.*/

#include<stdio.h>

int main(void) {
    
    float reais, cotacao, dolar;
    
    printf("Digite o valor, em reais, para convercao --> R$ ");
    scanf("%f", &reais);
    printf("Digite a cotacao do dolar --> "); //R$ 4,97 na data 19 de agosto de 2023
    scanf("%f", &cotacao);

    dolar = reais / cotacao;

    printf("\nA quantidade de dolares sera: $ %.2f\n", dolar);

    return 0;
}