/* Atividade 7 - ESTRUTURAS DE REPETIÇÃO ----- Aluno: DANIEL SOUZA - UC23100767 */

/* Exercício 6 --> Elabore um algoritmo que permita ao usuário realizar a compra de frutas.
Assim, apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores.
O algoritmo deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar
a quantidade de frutas. Ao final, apresente o valor total da compra.
		
        1- ABACAXI = R$ 5,00
		2-   MAÇA  = R$ 1,00
		3-   PERA  = R$ 4,00
*/

#include <stdio.h>
int main (void){
    int fruta;
    int valor;
    int quant;
    int soma = 0;

    do {
        printf("\n --------------------------- \n");
        printf("|----- LISTA DE FRUTAS -----|\n");
        printf("|---------------------------|\n");
        printf("|  1  | ABACAXI |  R$ 5,00  |\n");
        printf("|  2  |  MAÇA   |  R$ 1,00  |\n");
        printf("|  3  |  PERA   |  R$ 4,00  |\n");
        printf("|  0  |  FINALIZAR          |\n");
        printf(" --------------------------- \n");
        printf("Codigo da fruta escolhida: ");
        scanf("%d", &fruta);
        

        switch (fruta){
        case 1:
            printf("\nQuantidade de abacaxis: ");
            scanf("%d", &quant);
            
            valor = quant * 5;
            
            break;
        
        case 2:
            printf("\nQuantidade de macas: ");
            scanf("%d", &quant);
            
            valor = quant * 1;
            
            break;
        
        case 3:
            printf("\nQuantidade de peras: ");
            scanf("%d", &quant);
            
            valor = quant * 4;
            
            break;
        
        case 0:
            
            valor = 0;
            
            break;

        default:
            printf("\nVALOR INVALIDO");
            
            valor = 0;
            
            break;
        }

        soma = soma + valor;
        
    } while (fruta != 0);
    
    printf("\n Valor TOTAL da compra: R$ %d\n", soma);
    
    return 0;
}