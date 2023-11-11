/* LISTA AVALIATIVA 2 (2 PONTOS) - DANIEL SOUZA UC23100767

1 - Em uma fábrica de peças, o salário base dos operários é de R$ 600,00. Além do salário base,
cada operário recebe um adicional de produtividade baseado na quantidade de peças fabricadas por
mês. Este adicional é pago de acordo com o seguinte critério:
    • Se o número de peças for inferior ou igual a 50, não existe adicional de produtividade;
    
    • Se o número de peças for superior a 50 e inferior ou igual a 80, o adicional de produtividade
      será de R$ 0,50 para cada peça fabricada acima de 50;
    
    • Se o número de peças for superior a 80, o adicional de produtividade será de R$ 0,50 para cada
      peça fabricada acima de 50 até 80 e de R$ 0,75 por peça fabricada acima das 80.

Elabore um algoritmo para solicitar de cada funcionário a quantidade de peças fabricadas naquele mês e
apresentar o seu salário. Isto deve se repetir para todos os funcionários da empresa, onde o usuário não
sabe, inicialmente, quantos funcionários existem nesta empresa, ou seja, o número de funcionários não
será fornecido. 

Sua solução proposta deverá possuir as lógicas bem definidas que sejam necessárias a implementação
separada em sub-algoritmos específicos, devendo pelo menos os seguintes sub-algoritmos:
    a) validaQuantidade que validará o número de peças fabricadas por cada funcionário;
    b) calculaSalario que efetuará o cálculo do salário total para cada funcionário.

O resultado final será mostrado ao usuário por meio de um procedimento (mostraFinal).
*/

#include <stdio.h>
#define salario_base 600

int validaQuantidade ();
void calculaSalario ();
void mostraFinal ();

int main (void) {
    
    mostraFinal ();
    
    return 0;
}

//Função para validar a quantidade
int validaQuantidade () {
    int quantidade;
    
    printf("  Quantidade de pecas fabricadas --> ");
    scanf("%d", &quantidade);

    return quantidade;
}

//Função para calcular o adicional e o salario final
void calculaSalario () {
    float salario_final;
    float adicional;
    int pecas = validaQuantidade();

    printf("\n------------------ ADICIONAL ------------------\n");
    
    if (pecas <= 50) {
        adicional = 0;
        printf("     Adicional salarial sera R$ %.2f", adicional);
    
    } else if ((pecas > 50) && (pecas <= 80)) {
        adicional = 0.50 * ((float)pecas - 50);
        printf("     Adicional salarial sera R$ %.2f", adicional);

    } else if (pecas > 80) {
        adicional = (0.50 * 30) + ( 0.75 * ((float)pecas - 80));
        printf("     Adicional salarial sera R$ %.2f", adicional);
    }


    printf("\n\n---------------- SALARIO FINAL ----------------\n");
    salario_final = salario_base + adicional;
    printf("     Salario final sera R$ %.2f\n", salario_final);
}

// Procedimento para mostrar ao funcionario o salrio final
void mostraFinal () {
    calculaSalario();
}