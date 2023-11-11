/* LISTA AVALIATIVA 2 (2 PONTOS) - DANIEL SOUZA UC23100767

2 - Com a proposta para ampliação da terceirização da mão de obra, o Ministério da Fazenda
está empenhado em elaborar uma análise sobre o recebimento de salário regular através do
registro em carteira profissional dos funcionários no país. Assim, elabore um algoritmo que
obtenha, para cada assalariado, com carteira profissional assinada, o seu sexo M(masculino)
e F(feminino) e o valor de seu salário, devendo este salário ser maior que um real (R$1,00).

Seu algoritmo deverá analisar e classificar este assalariado em Acima, Igual ou Abaixo do
salário mínimo. Sabe-se que o salário mínimo nacional é de R$ 1400,00. Após a leitura dos
dados de cada assalariado cadastrado pelo ministério deverá ser apresentado o seu salário em
reais, a classificação por extenso em relação ao salário mínimo e o sexo por extenso
(Masculino ou Feminino).

A classificação em relação ao salário mínimo nacional deverá ser feita pelo sub-algoritmo
classificaSalario e os resultados solicitados para cada assalariado deverão ser apresentados
pelo sub-algoritmo denominado mostraClassifica. 

Você deverá fazer a entrada de dados para todos os assalariados que foram pesquisados pelo
ministério, lembrando de fazer sempre a validação de todos os dados informados em sub-algoritmos
específicos.   

Na solução deste problema os resultados finais de cada assalariado que participou desta pesquisa
deverão ser apresentados.

Após a leitura dos dados de todos os assalariados pesquisados o seu algoritmo deverá apresentar a
quantidade de assalariados com salário abaixo do salário mínimo e a quantidade assalariados com
salário acima do salário mínimo.
*/

#include <stdio.h>

void validar(char *sexo, float *salario);
void classificaSalario(float salario, char *classificacao);
void mostraClassifica(float salario, char classificacao, char sexo);
void contador(char classificacao, int *abaixo, int *acima);

int main() {
    int quantidade, abaixo = 0, acima = 0;
    float salario;
    char sexo, classificacao;
    
    printf("Quantidade de funcionarios da pesquisa --> ");
    scanf("%d", &quantidade);
    printf("-----------------------------------------------\n");

    for (int i = 0; i < quantidade; i++) {
        printf("\n------------------ FUNCIONARIO %d -------------------\n", (i + 1));
        printf("   Informe o sexo (M/F) --> ");
        scanf(" %c", &sexo);
        printf("   Digite o salario --> R$ ");
        scanf("%f", &salario);

        validar(&sexo, &salario);
        
        classificaSalario(salario, &classificacao);
        
        mostraClassifica(salario, classificacao, sexo);

        contador(classificacao, &abaixo, &acima);
    }
    
    printf("\n\n-----------------------------------------------------\n");
    printf(" %d Funcionarios recebem ABAIXO do salario minimo\n", abaixo);
    printf(" %d Funcionarios recebem ACIMA do salario minimo\n", acima);
    printf("-----------------------------------------------------\n");

    return 0;
}

// Função para validar os dados de entrada
void validar(char *sexo, float *salario) {
    while (*salario <= 1) {
        printf("      *** Salario invalido ***\n");
        printf("      Informe um valor maior que R$1,00 --> R$ ");
        scanf("%f", salario);
    }

    while (*sexo != 'M' && *sexo != 'm' && *sexo != 'F' && *sexo != 'f') {
        printf("      *** Sexo invalido ***\n");
        printf("      Informe M para masculino ou F para feminino --> ");
        scanf(" %c", sexo);
    }
}

// Função para classificar o salario
void classificaSalario(float salario, char *classificacao) {
    if (salario > 1400) {
        *classificacao = 'A'; // acima
    } else if (salario == 1400) {
        *classificacao = 'I'; // igual
    } else {
        *classificacao = 'B'; // abaixo
    }
}

// Função para imprimir os resultados
void mostraClassifica(float salario, char classificacao, char sexo) {
    
    printf("\n      --------------- RESULTADO ---------------\n");
    if (sexo == 'M' || sexo == 'm') {
        printf("       Sexo: Masculino\n");
    }
    if (sexo == 'F' || sexo == 'f') {
        printf("       Sexo: Feminino\n");
    } 
    
    printf("       Salario: R$ %.2f\n", salario);

    switch (classificacao) {
        case 'A':
            printf("       Funcionario tem salario ACIMA do minimo\n\n");
            break;
        case 'I':
            printf("       Funcionario tem salario IGUAL ao minimo\n\n");
            break;
        case 'B':
            printf("       Funcionario tem salario ABAIXO do minimo\n\n");
            break;
    }
}

// Função para contar acima e abaixo do salario
void contador(char classificacao, int *abaixo, int *acima) {
    switch (classificacao) {
        case 'A':
            (*acima)++;
            break;
        case 'B':
            (*abaixo)++;
            break;
    }
}