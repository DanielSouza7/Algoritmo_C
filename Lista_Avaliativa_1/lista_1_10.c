/* LISTA AVALIATIVA 1 ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 10 - Foi feita uma estatística nas 200 principais cidades brasileiras
para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados:
	- código da cidade
	- estado (RS, SC, PR, SP, RJ, ...)
	- número de veículos de passeio (em 1992)
	- número de acidentes de trânsito com vítimas (em 1992)

Deseja-se saber:
	a) qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem
	b) qual a média de veículos nas cidades brasileiras
	c) qual a média de acidentes com vítimas entre as cidades do Rio Grande do Sul.
*/

#include <stdio.h>

int main (void) {
    int codCidade = 1, veiculos, acidentes, acidentesVitima;
    int somaVeiculos = 0, maiorAcidentes = 0, menorAcidentes = 0, maiorCidade, menorCidade;
    int acidentesRS, acidentesVitimaRS, cidadesRS = 0;
    float mediaVeiculos, mediaRS;
    char estado;

    do {
        printf("----------------------------------\n");
        printf("-- Codigo da cidade --> %d\n", codCidade);
        printf("-- Estado da cidade --> ");
        scanf("%c", &estado);
        __fpurge(stdin);
        printf("-- Quantidade de veiculos --> ");
        scanf("%d", &veiculos);
        printf("-- Número de acidentes --> ");
        scanf("%d", &acidentes);
        printf("-- Número de acidentes com vítimas--> ");
        scanf("%d", &acidentesVitima);
        printf("----------------------------------\n");
        
        if ((estado == 'RS') || (estado == 'rs')){
            acidentesRS = acidentesRS + acidentes;
            acidentesVitimaRS = acidentesVitimaRS + acidentesVitima;
            cidadesRS++;
        }
        
        
        if (acidentes > maiorAcidentes){
            maiorAcidentes = acidentes;
            maiorCidade = codCidade;
        }

        if (acidentes < menorAcidentes){
            menorAcidentes = acidentes;
            menorCidade = codCidade;
        }
        
        
        somaVeiculos = somaVeiculos + veiculos;

        codCidade++;

        __fpurge(stdin);
        
    } while (codCidade < 200);

    printf("\n--------------------------------------------------------------------------\n");
    printf(" O MAIOR índice de acidentes de trânsito é da cidade %d, com %d acidentes.\n\n", maiorCidade, maiorAcidentes);
    printf(" O MENOR índice de acidentes de trânsito é da cidade %d, com %d acidentes.\n", menorCidade, menorAcidentes);
    
    mediaVeiculos = somaVeiculos / (codCidade - 1);
    printf(" Média de veiculos = %.2f\n\n", mediaVeiculos);

    mediaRS = acidentesRS / cidadesRS;
    printf(" A media de acidentes de trânsito entre as cidade do RS é %.2f\n", mediaRS);
      
    return 0;
}