/* Atividade 1 - VARIÁVEIS ----- Aluno: DANIEL SOUZA - UC23100767

Criar um algoritmo que apresente um cadastro de informações. O cadastro deverá conter os
seguintes campos: NOME, IDADE, MATRICULA, ENDEREÇO, CURSO, PERIODO, DISCIPLINA e MENSALIDADE*/

#include <stdio.h>

int main(void) {
    
    // Passo 1 - Variáveis
    char nome[50];
    int idade;
    char matricula[10];
    char endereco[50];
    char curso[30];
    int periodo;
    char disciplina[25];
    float mensalidade;

    // Passo 2 - Receber e armazenar os dados nas Variaveis
    printf("__________Bem-vindo ao nosso cadastro!__________\n");
    printf("Digite as seguintes informações:\n");
    
    printf("\nNome --> ");
    fgets(nome, 50, stdin);
    fflush(stdin);

    printf("Idade --> ");
    scanf("%d", &idade);
    fflush(stdin);

    printf("Matricula --> ");
    fgets(matricula, 10, stdin);
    fflush(stdin);

    printf("Endereco --> ");
    fgets(endereco, 50, stdin);
    fflush(stdin);

    printf("Curso --> ");
    fgets(curso, 30, stdin);
    fflush(stdin);

    printf("Periodo --> ");
    scanf("%d", &periodo);
    fflush(stdin);

    printf("Disciplina --> ");
    fgets(disciplina, 25, stdin);
    fflush(stdin);

    printf("Mensalidade --> ");
    scanf("%f", &mensalidade);
    fflush(stdin);

    // Passo 3 - Apresentação dos dados salvos das variaveis
    printf("\n______________________________________________________\n");
    printf("__________Confirme as informacoes inseridas:__________\n");
    printf("   Nome: %s", nome);
    printf("   Idade: %d\n", idade);
    printf("   Matricula: %s\n", matricula);
    printf("   Endereco: %s", endereco);
    printf("   Curso: %s", curso);
    printf("   Periodo: %d\n", periodo);
    printf("   Disciplina: %s", disciplina);
    printf("   Mensalidade: R$ %.2f\n", mensalidade);

    return 0;
}