/* ATIVIDADE 12 - FUNÇÕES - DANIEL SOUZA UC23100767

EXERCICIO 1 - Fazer um programa que solicita o total gasto pelo cliente de uma loja, imprime as
opções de pagamento, solicita a opção desejada e imprime o valor total das prestações (se houverem).
    a) Opção: a vista com 10% de desconto
    b) Opção: em duas vezes (preço da etiqueta)
    c) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00).

OBS: fazer uma função que imprime as opções, solicita a opção desejada e retorna a opção escolhida.
No programa principal, testar a opção escolhida e ativar a função correspondente (uma função para
cada opção).
    parcela = valor * (taxa_decimal / (1 - ( 1 / (1 + taxa_decimal) ^ meses) ) )
*/

#include <stdio.h>
#include <math.h>

void parcelas(float valor);
void opcoes_100(float valor);
void opcoes(float valor);


int main (void) {
    float valor;
    printf("Digite o valor total da compra --> R$ ");
    scanf("%f", &valor);

    if (valor < 100){
        opcoes(valor);
    } else {
        opcoes_100(valor);
    }
    
    return 0;
}


// Função das parcelas entre 3 e 10
void parcelas(float valor){
    int div3;
    float parcela, valor_final;

    do {
        printf("\n     Em quantas vezes deseja dividir (3 a 10) --> ");
        scanf("%d", &div3);

        switch (div3) {
        case 3:
            printf("\n        Compra sera dividida em 3 vezes (juros 3%% ao mes).");
            // parcela = valor * (taxa_decimal / (1 - ( 1 / (1 + taxa_decimal) ^ meses) ) )
            parcela = valor * (0.03 / (1 - (1 / pow((1 + 0.03), 3) ) ) );
            printf("\n           3 Parcelas de R$ %.2f", parcela);
            valor_final = parcela * 3;
            printf("\n           Valor final = R$ %.2f", valor_final);
            break;
        
        case 4:
            printf("\n        Compra sera dividida em 4 vezes (juros 3%% ao mes).");
            parcela = valor * (0.03 / (1 - (1 / pow((1 + 0.03), 4) ) ) );
            printf("\n           4 Parcelas de R$ %.2f", parcela);
            valor_final = parcela * 4;
            printf("\n           Valor final = R$ %.2f", valor_final);
            break;
        
        case 5:
            printf("\n        Compra sera dividida em 5 vezes (juros 3%% ao mes).");
            parcela = valor * (0.03 / (1 - (1 / pow((1 + 0.03), 5) ) ) );
            printf("\n           5 Parcelas de R$ %.2f", parcela);
            valor_final = parcela * 5;
            printf("\n           Valor final = R$ %.2f", valor_final);
            break;
        
        case 6:
            printf("\n        Compra sera dividida em 6 vezes (juros 3%% ao mes).");
            parcela = valor * (0.03 / (1 - (1 / pow((1 + 0.03), 6) ) ) );
            printf("\n           6 Parcelas de R$ %.2f", parcela);
            valor_final = parcela * 6;
            printf("\n           Valor final = R$ %.2f", valor_final);
            break;
        
        case 7:
            printf("\n        Compra sera dividida em 7 vezes (juros 3%% ao mes).");
            parcela = valor * (0.03 / (1 - (1 / pow((1 + 0.03), 6) ) ) );
            printf("\n           7 Parcelas de R$ %.2f", parcela);
            valor_final = parcela * 7;
            printf("\n           Valor final = R$ %.2f", valor_final);
            break;
        
        case 8:
            printf("\n        Compra sera dividida em 8 vezes (juros 3%% ao mes).");
            parcela = valor * (0.03 / (1 - (1 / pow((1 + 0.03), 8) ) ) );
            printf("\n           8 Parcelas de R$ %.2f", parcela);
            valor_final = parcela * 8;
            printf("\n           Valor final = R$ %.2f", valor_final);
            break;
        
        case 9:
            printf("\n        Compra sera dividida em 9 vezes (juros 3%% ao mes).");
            parcela = valor * (0.03 / (1 - (1 / pow((1 + 0.03), 9) ) ) );
            printf("\n           9 Parcelas de R$ %.2f", parcela);
            valor_final = parcela * 9;
            printf("\n           Valor final = R$ %.2f", valor_final);
            break;
        
        case 10:
            printf("\n        Compra sera dividida em 10 vezes (juros 3%% ao mes).");
            parcela = valor * (0.03 / (1 - (1 / pow((1 + 0.03), 10) ) ) );
            printf("\n          10 Parcelas de R$ %.2f", parcela);
            valor_final = parcela * 10;
            printf("\n           Valor final = R$ %.2f", valor_final);
            break;
            
        default:
            printf("\nINVALIDO *** ");
            break;
        }
        printf("\n");
    } while ((div3 < 3) || (div3 > 11));

    return;
}

// Função para compras acima de R$ 100
void opcoes_100(float valor) {
    int num;

    printf("\n---------- OPCOES DE PAGAMENTO -----------");
    printf("\n--     1. A vista (10%% de desconto)     --");
    printf("\n--      2. Duas vezes (sem juros)       --");
    printf("\n--  3. De 3 ate 10 vezes (3%% de juros)  --");
    printf("\n------------------------------------------\n");

    do {
        printf("Digite a opcao de pagamento --> ");
        scanf("%d", &num);
    
        switch (num){
        case 1:
            printf("\nO pagamento sera a vista, com 10%% de desconto.");
            float valor_final = valor * 0.9;
            printf("\n   Valor com desconto = R$ %.2f", valor_final);
            break;
        
        case 2:
            printf("\nO pagamento sera DIVIDIDO em 2 vezes.");
            float div2 = valor / 2;
            printf("\n   Parcelas = R$ %.2f", div2);
            break;
        
        case 3:
            printf("\nO pagamento sera DIVIDIDO entre 3 e 10 vezes:");
            parcelas(valor);
            break;

        default:
            printf("\nINVALIDO *** ");
            break;
        }

    }while ((num < 0) || (num > 3));

   return; 
}

// Função para compras menores que R$ 100
void opcoes(float valor) {
    int num;

    printf("\n---------- OPCOES DE PAGAMENTO -----------");
    printf("\n--     1. A vista (10%% de desconto)     --");
    printf("\n--      2. Duas vezes (sem juros)       --");
    printf("\n------------------------------------------\n");

    do {
        printf("Digite a opcao de pagamento --> ");
        scanf("%d", &num);
    
        switch (num){
        case 1:
            printf("\nO pagamento sera a vista, com 10%% de desconto.");
            float valor_final = valor * 0.9;
            printf("\n   Valor com desconto = R$ %.2f", valor_final);
            break;
        
        case 2:
            printf("\nO pagamento sera DIVIDIDO em 2 vezes.");
            float div2 = valor / 2;
            printf("\n   Parcelas = R$ %.2f", div2);
            break;

        default:
        printf("\nINVALIDO *** ");
            break;
        }

    }while ((num < 0) || (num > 2));

    return;
}