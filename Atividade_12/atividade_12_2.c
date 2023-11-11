/* ATIVIDADE 12 - FUNÇÕES - DANIEL SOUZA UC23100767

EXERCICIO 2 - Uma locadora de vídeos tem guardada, em um vetor A de 500 posições,
a quantidade de filmes retirados por seus clientes durante o ano de 2020. Agora,
esta locadora está fazendo uma promoção e, para cada 15 filmes retirados, o cliente
tem direito a uma locação grátis. Faça um procedimento que receba o vetor A por
parâmetro e retorna um vetor contendo a quantidade de locações gratuitas a que
cada cliente tem direito. 
*/

#include <stdio.h>
#include <stdlib.h>

//FUNÇÃO
void locacao_gratis (int locacao[500], int quantidade[500]) {
    for (int i = 0; i < 500; i++) {
        quantidade[i] = locacao[i]/15;
    }
}

int main (void) {
    int locacao [500], quantidade[500];
    
    for (int i = 0; i < 500; i++) {
        locacao[i] = rand() % 100 + 1;
    }

    locacao_gratis (locacao, quantidade);
    printf("-------------------- PROMOCAO 2020 --------------------\n");
    for (int i = 0; i < 500; i++) {
        printf("\nFilmes retirados = %d  |  Locacao gratis = %d", locacao[i], quantidade[i]);
    }
    
    return 0;
}