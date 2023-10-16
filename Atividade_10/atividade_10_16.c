/* Atividade 10 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 16 --> Faça um programa que leia um vetor de 5 posições para números reais e,
depois, um código inteiro. Se o código for zero, finalize o programa; se for 1, mostre o
vetor na ordem direta; se for 2, mostre o vetor na ordem inversa. Caso, o código for
diferente de 1 e 2 escreva uma mensagem informando que o código é inválido.
*/

#include <stdio.h>

int main (void) {
    
    int vetor[5];
    int codigo; // 0 = fim do programa     1 = ordem direta     2 = ordem inversa
    
    for (int i = 0; i < 5; i++){
        printf("Digite um número --> ");
        scanf("%d", &vetor[i]);
    }
    
    do{
        printf("\n    0 - Fim do Programa");
        printf("\n    1 - Vetor na ordem direta");
        printf("\n    2 - Vetor na ordem inversa");
        printf("\n       *** Código --> ");
        scanf("%d", &codigo);

        switch (codigo){
        case 0:
            printf("\n  FIM DO PROGRAMA  \n");
            break;
    
        case 1:
            printf("\nORDEM DIRETA  ");
            for(int i = 0; i < 5; i++){
                printf("\n    %d", vetor[i]);
            }
            break;
    
        case 2:
            printf("\nORDEM INVERSA  ");
            for(int i = 4; i >=0; i--){
                printf("\n    %d", vetor[i]);
            }
            break;
    
        default:
            printf("\n!!!  CODIGO INVALIDO  !!!\n");
            break;
        }
    } while(codigo == 0 && codigo == 1 && codigo == 2);

    return 0;
}