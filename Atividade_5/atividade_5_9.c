/* Atividade 5 - OPERADORES RELACIONAIS, LÓGICOS e ESTRUTURAS CONDICIONAIS
Aluno: DANIEL SOUZA - UC23100767*/

/* Exercício 9 --> Uma empresa decide dar um aumento aos seus funcionários de acordo com uma
tabela que considera o salario atual e o tempo de serviço de cada funcionário. Os funcionários
com menor salario terão um aumento proporcionalmente maior do que os funcionários com um salario
maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional
de salário. Faça um programa que leia:
    • o valor do salario atual do funcionário; 
    • o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).

Use as tabelas abaixo para calcular o salario reajustado deste funcionário e imprima o valor do
salario final reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum aumento.

| Salário Atual | Reajuste | Tempo de Serviço | Bônus  |
--------------------------------------------------------
|  até R$ 500   |   25%    | abaixo de 1 ano  |  sem   |       X < 1
|  até R$ 1000  |   20%    |  de 1 a 3 anos   | R$ 100 |  1 <= X < 4
|  até R$ 1500  |   15%    |  de 4 a 6 anos   | R$ 200 |  4 <= X < 7
|  até R$ 2000  |   10%    |  de 7 a 10 anos  | R$ 300 |  7 <= X < 10
| acima R$ 2000 |   sem    | mais de 10 anos  | R$ 500 | 10 <= X         */

#include<stdio.h>

int main (void) {
    
    float salarioAtual, tempoServico, salarioFinal, reajuste;
    
    printf("Digite o salario atual do funcionario --> ");
    scanf("%f", &salarioAtual);
    printf("Digite o tempo de servico do funcionario --> ");
    scanf("%f", &tempoServico);

    // Para aqueles com salário de até R$ 500,00.
    if((salarioAtual <= 500) && (tempoServico < 1)) {
        reajuste = salarioAtual * 0.25 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    } 
    else if((salarioAtual <= 500) && (tempoServico >= 1) && (tempoServico < 4)) {
        reajuste = (salarioAtual * 0.25) + 100 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual <= 500) && (tempoServico >= 4) && (tempoServico < 7)) {
        reajuste = (salarioAtual * 0.25) + 200 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual <= 500) && (tempoServico >= 7) && (tempoServico < 10)) {
        reajuste = (salarioAtual * 0.25) + 300 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual <= 500) && (tempoServico >= 10)) {
        reajuste = (salarioAtual * 0.25) + 500 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    
    // Para aqueles com salário maior que R$ 500,00 e menor que R$ 1.000,00.
    if((salarioAtual > 500) && (salarioAtual <= 1000) && (tempoServico < 1)) {
        reajuste = salarioAtual * 0.20 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    } 
    else if((salarioAtual > 500) && (salarioAtual <= 1000) && (tempoServico >= 1) && (tempoServico < 4)) {
        reajuste = (salarioAtual * 0.20) + 100 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 500) && (salarioAtual <= 1000) && (tempoServico >= 4) && (tempoServico < 7)) {
        reajuste = (salarioAtual * 0.20) + 200 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 500) && (salarioAtual <= 1000) && (tempoServico >= 7) && (tempoServico < 10)) {
        reajuste = (salarioAtual * 0.20) + 300 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 500) && (salarioAtual <= 1000) && (tempoServico >= 10)) {
        reajuste = (salarioAtual * 0.20) + 500 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    
    // Para aqueles com salário maior que R$ 1.000,00 e menor que R$ 1.500,00.
    if((salarioAtual > 1000) && (salarioAtual <= 1500) && (tempoServico < 1)) {
        reajuste = salarioAtual * 0.15 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    } 
    else if((salarioAtual > 1000) && (salarioAtual <= 1500) && (tempoServico >= 1) && (tempoServico < 4)) {
        reajuste = (salarioAtual * 0.15) + 100 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 1000) && (salarioAtual <= 1500) && (tempoServico >= 4) && (tempoServico < 7)) {
        reajuste = (salarioAtual * 0.15) + 200 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 1000) && (salarioAtual <= 1500) && (tempoServico >= 7) && (tempoServico < 10)) {
        reajuste = (salarioAtual * 0.15) + 300 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 1000) && (salarioAtual <= 1500) && (tempoServico >= 10)) {
        reajuste = (salarioAtual * 0.15) + 500 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    
    // Para aqueles com salário maior que R$ 1.500,00 e menor que R$ 2.000,00.
    if((salarioAtual > 1500) && (salarioAtual <= 2000) && (tempoServico < 1)) {
        reajuste = salarioAtual * 0.10 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    } 
    else if((salarioAtual > 1500) && (salarioAtual <= 2000) && (tempoServico >= 1) && (tempoServico < 4)) {
        reajuste = (salarioAtual * 0.10) + 100 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 1500) && (salarioAtual <= 2000) && (tempoServico >= 4) && (tempoServico < 7)) {
        reajuste = (salarioAtual * 0.10) + 200 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 1500) && (salarioAtual <= 2000) && (tempoServico >= 7) && (tempoServico < 10)) {
        reajuste = (salarioAtual * 0.10) + 300 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 1500) && (salarioAtual <= 2000) && (tempoServico >= 10)) {
        reajuste = (salarioAtual * 0.10) + 500 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    
    // Para aqueles com salário maior que R$ 2.000,00.
    if((salarioAtual > 2000) && (tempoServico < 1)) {
        printf("\nEsse funcionario nao recebera reajuste!");
    } 
    else if((salarioAtual > 2000) && (tempoServico >= 1) && (tempoServico < 4)) {
        reajuste = (salarioAtual * 0) + 100 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 2000) && (tempoServico >= 4) && (tempoServico < 7)) {
        reajuste = (salarioAtual * 0) + 200 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 2000) && (tempoServico >= 7) && (tempoServico < 10)) {
        reajuste = (salarioAtual * 0) + 300 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 2000) && (tempoServico >= 10)) {
        reajuste = (salarioAtual * 0) + 500 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    
    return 0;
}