/* Atividade 6 - ESTRUTURA SWITCH ----- Aluno: DANIEL SOUZA - UC23100767 */

/* Exercício 2 --> O cardápio de uma lanchonete é o seguinte: 
---------------------------------------------
|     Especificação      |  Preço Unitário  |
|--------------------------------------------
| 100 - Cachorro quente  |     R$ 10,10     |
| 101 - Bauru simples    |     R$  8,30     |
| 102 - Bauru com ovo    |     R$  8,50     |
| 103 - Hamburguer       |     R$ 12,50     |
| 104 - Cheeseburguer    |     R$ 13,25     |
---------------------------------------------

Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a
ser pago por aquele lanche. Considere que a cada execução somente será calculado um item. */

#include<stdio.h>
 int main (void){
    int item, quant;
    float conta;

    printf("Digite o codigo do item --> ");
    scanf("%d", &item);

    switch(item){
        // Cachorro quente
        case 100:
            printf("\nItem escolhido --> Cachorro quente");
            printf("\nQuantidade de itens --> ");
            scanf("%d", &quant);

            conta = 10.10 * quant;

            printf("\nValor da conta --> R$ %.2f", conta);
            break;
        
        // Bauru Simples
        case 101:
            printf("\nItem escolhido --> Bauru simples");
            printf("\nQuantidade de itens --> ");
            scanf("%d", &quant);

            conta = 8.30 * quant;

            printf("\nValor da conta --> R$ %.2f", conta);
            break;
        
        // Bauru com ovo
        case 102:
            printf("\nItem escolhido --> Bauru com ovo");
            printf("\nQuantidade de itens --> ");
            scanf("%d", &quant);

            conta = 8.50 * quant;

            printf("\nValor da conta --> R$ %.2f", conta);
            break;
        
        // Hamburguer
        case 103:
            printf("\nItem escolhido --> Hamburguer");
            printf("\nQuantidade de itens --> ");
            scanf("%d", &quant);

            conta = 12.50 * quant;

            printf("\nValor da conta --> R$ %.2f", conta);
            break;
        
        // Cheeseburguer
        case 104:
            printf("\nItem escolhido --> Cheeseburguer");
            printf("\nQuantidade de itens --> ");
            scanf("%d", &quant);

            conta = 13.25 * quant;

            printf("\nValor da conta --> R$ %.2f", conta);
            break;
        
      default:
            printf("\nItem NAO identificado!");
            break;
    }

    return 0;
 }