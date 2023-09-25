/* Atividade 5 - OPERADORES RELACIONAIS, LÓGICOS e ESTRUTURAS CONDICIONAIS
Aluno: DANIEL SOUZA - UC23100767*/

/* Exercício 8 --> Leia a idade e o tempo de serviço de um trabalhador e escreva se
ele pode ou não se aposentar. As condições para aposentadoria são:
   • Ter pelo menos 65 anos;
   • Ou ter trabalhado pelo menos 30 anos;
   • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.   */

#include<stdio.h>

int main (void) {
    int idade, tempo;
    
    printf("Digite sua idade --> ");
    scanf("%d", &idade);
    printf("Digite o tempo de servico --> ");
    scanf("%d", &tempo);

    if((idade >= 60) && (tempo >= 25)) {
        printf("\nVoce ja PODE aposentar.");
    } 
    else if((idade >= 65) && (tempo >= 0)){
        printf("\nVoce ja PODE aposentar, pois tem pelo menos 65 anos de vida.");
    }
    else if((tempo >= 30) && (idade >= 0)){
        printf("\nVoce ja PODE aposentar, pois tem pelo menos 30 anos de trabalho.");
    }
    else{
        printf("\nVoce ainda NAO pode aposentar.");
    }
    
    return 0;
}