/* LISTA AVALIATIVA 1 ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 9 - Em uma eleição presidencial existem quatro candidatos. Os votos
são informados através de códigos. Os dados utilizados para a contagem dos votos
obedecem à seguinte codificação:
	- 1 = caditado A                - 4 = caditado D
    - 2 = caditado B                - 5 = voto nulo
    - 3 = caditado C                - 6 = voto em branco
	
Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:
	- total de votos para cada candidato;
	- total de votos nulos;
	- total de votos em branco;

Como finalizador do conjunto de votos, tem-se o valor 0.
*/

#include <stdio.h>
#include <stdlib.h> // Para a função: system("clear")

int main (void) {
    int voto, candidatoA = 0, candidatoB = 0, candidatoC = 0, candidatoD = 0, nulo = 0, branco = 0;
    int eleitor = 1;

    do {
        printf("---------------------\n");
        printf("--- ELEITOR nº %d ---\n", eleitor);
        printf("---------------------\n");
        printf("-- 1 - Candidato A --\n");
        printf("-- 2 - Candidato B --\n");
        printf("-- 3 - Candidato C --\n");
        printf("-- 4 - Candidato D --\n");
        printf("-- 5 - Nulo        --\n");
        printf("-- 6 - Branco      --\n");
        printf("---------------------\n");
        
        do{
            printf("     Voto = ");
            scanf("%d", &voto);
        
            switch (voto){
            case 1:
                candidatoA++;
                break;
        
            case 2:
                candidatoB++;
                break;
        
            case 3:
                candidatoC++;
                break;
        
            case 4:
                candidatoD++;
                break;
        
            case 5:
                nulo++;
                break;
        
            case 6:
                branco++;
                break;
        
            case 0:
                break;
        
            default:
                printf("\nVoto invalido\n");
                break;
            }
            __fpurge(stdin);
        
        } while (voto != 0 && voto != 1 && voto != 2 && voto != 3 && voto != 4 && voto != 5 && voto != 6);
        
        system("clear"); // Função para limpar a tela do compilador no Linux (no Windows essa função é system("cls"))

        eleitor++;
    
    } while (voto != 0);

    // Impressão do total de votos
    if (voto == 0){
        printf("\n---- VOTAÇÃO ENCERRADA ----\n");
        printf("---------------------------\n");
        printf("----- TOTAL DE VOTOS ------\n");
        printf("--                       --\n");
        printf("--   Candidato A = %d    --\n", candidatoA);
        printf("--   Candidato B = %d    --\n", candidatoB);
        printf("--   Candidato C = %d    --\n", candidatoC);
        printf("--   Candidato D = %d    --\n", candidatoD);
        printf("--   Votos Nulos = %d    --\n", nulo);
        printf("-- Votos em Branco = %d  --\n", branco);
        printf("---------------------------\n");
    }
    
   
    return 0;
}