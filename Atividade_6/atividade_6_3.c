/* Atividade 6 - ESTRUTURA SWITCH ----- Aluno: DANIEL SOUZA - UC23100767 */

/* Exercício 3 --> Criar um algoritmo que informe a quantidade total de calorias de uma refeição
a partir do usuário que deverá informar o prato, a sobremesa e a bebida (veja a tabela a seguir). 

 ---------------------------------------------------------------------------------------------
|     Prato      | Calorias |     Sobremesa      | Calorias |        Bebida        | Calorias |
|----------------|----------|--------------------|----------|----------------------|----------|
| 1- Vegetariano | 180 cal  | 1- Abacaxi         |  75 cal  | 1- Chá               |  20 cal  |
| 2- Peixe       | 230 cal  | 2- Sorvete Diet    | 110 cal  | 2- Suco Laranja      |  70 cal  |
| 3- Frango      | 250 cal  | 3- Mouse Diet      | 170 cal  | 3- Suco Melão        | 100 cal  |
| 4- Carne       | 350 cal  | 4- Mouse Chocolate | 200 cal  | 4- Refrigerante Diet |  65 cal  |
 ---------------------------------------------------------------------------------------------
*/

#include<stdio.h>
 int main (void){
    int prato, sobremesa, bebida, calTotal, calPrato, calSobre, calBebida;

    // Prato principal
    printf("Digite o codigo do PRATO --> ");
    scanf("%d", &prato);

    switch(prato){
        case 1:
            printf("Prato escolhido --> Vegetariano\n");
            calPrato = 180;
            break;

        case 2:
            printf("Prato escolhido --> Peixe\n");
            calPrato = 230;
            break;
        
        case 3:
            printf("Prato escolhido --> Frango\n");
            calPrato = 250;
            break;
        
        case 4:
            printf("Prato escolhido --> Carne\n");
            calPrato = 350;
            break;
        
        default:
            printf("Prato NAO identificado!\n");
            break;
    }

    // Sobremesa
    printf("\nDigite o codigo da SOBREMESA --> ");
    scanf("%d", &sobremesa);

    switch(sobremesa){
        case 1:
            printf("Sobremesa escolhida --> Abacaxi\n");
            calSobre = 75;
            break;

        case 2:
            printf("Sobremesa escolhida --> Sorvete Diet\n");
            calSobre = 110;
            break;
        
        case 3:
            printf("Sobremesa escolhida --> Mouse Diet\n");
            calSobre = 170;
            break;
        
        case 4:
            printf("Sobremesa escolhida --> Mouse Chocolate\n");
            calSobre = 200;
            break;
        
        default:
            printf("Sobremesa NAO identificada!\n");
            break;
    }

    // Bebida
    printf("\nDigite o codigo da BEBIDA --> ");
    scanf("%d", &bebida);

    switch(bebida){
        case 1:
            printf("Bebida escolhida --> Cha\n");
            calBebida = 20;
            break;

        case 2:
            printf("Bebida escolhida --> Suco Laranja\n");
            calBebida = 70;
            break;
        
        case 3:
            printf("Bebida escolhida --> Suco Melao\n");
            calBebida = 100;
            break;
        
        case 4:
            printf("Bebida escolhida --> Refrigerante Diet\n");
            calBebida = 65;
            break;
        
        default:
            printf("Bebida NAO identificada!\n");
            break;
    }
    
    // TOTAL de calorias da refeição
    calTotal = calPrato + calSobre + calBebida;

    printf("\nO total de calorias comsumidas na refeicao foi --> %d", calTotal);

    return 0;
 }