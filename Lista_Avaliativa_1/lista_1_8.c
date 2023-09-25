/* LISTA AVALIATIVA 1 ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 8 - A prefeitura de uma cidade fez uma pesquisa entre seus habitantes,
coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:
	a) média do salário da população;
	b) média do número de filhos;
	c) maior salário;
	d) percentual de pessoas com salário até R$100,00.
O final da leitura de dados se dará com a entrada de um salário negativo.
(Use o comando do - while)
*/

#include <stdio.h>

int main (void) {
    int filhos, parametro = 0;
    float somaFilhos = 0, mediaFilhos, percParametro;
    float salario, mediaSalario, somaSalario = 0, maiorSalario = 0;
    int contador = 1;

    do {
        printf("\n-----------------------\n");
        printf("--- HABITANTE nº %d ---\n\n", contador);
        printf("  Salario = ");
        scanf("%f", &salario);
        printf("  Filhos = ");
        scanf("%d", &filhos);
        printf("\n");
        
        if (salario < 100){
            parametro++;
        }
        
        somaFilhos = somaFilhos + filhos;
        somaSalario = somaSalario + salario;

        if (salario >= maiorSalario){
            maiorSalario = salario;
        }

        contador++;


    } while (salario > 0); // O final da leitura de dados acontecerá com a entrada de um salário negativo

    printf("\n---------------------------------------------------------------\n");

    // Media salarial da população
    mediaSalario = somaSalario / (contador -1);
    printf(" Média de Salario = R$ %.2f\n", mediaSalario);

    // Media do numero de filhos
    mediaFilhos = somaFilhos / (contador -1);
    printf(" Média do número de filhos = %.2f\n", mediaFilhos);

    // Maior salário
    printf(" Maior Salario = R$ %.2f\n", maiorSalario);
    
    // Percentual de pessoas com salário até R$100,00
    percParametro = (parametro * 100) / (contador -1);
    printf(" Percentual de pessoas com salário até R$100,00 = %.2f%%\n", percParametro);
    printf("---------------------------------------------------------------\n");

    return 0;
}