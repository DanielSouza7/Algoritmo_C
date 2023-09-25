/* Atividade 2 - OPERADORES ARITIMÉTICOS ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 8 --> Faça um algoritmo que leia a idade de uma pessoa expressa em anos,
meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano
com 365 dias e mês com 30 dias.*/

#include<stdio.h>
#include<windows.h>

int main(void) {

    // É usado para obrigar o algoritmo a usar a data do sistema 
    SYSTEMTIME str_t;
	GetSystemTime(&str_t);

    int anoNasc, mesNasc, diaNasc, idadeDias, anoAtual =str_t.wYear, mesAtual=str_t.wMonth, diaAtual=str_t.wDay;

    printf("Hoje eh --> %d/%d/%d\n", diaAtual, mesAtual, anoAtual);
    
    printf("\nDia de nascimento --> ");
    scanf("%d", &diaNasc);
    printf("Mes de nascimento --> ");
    scanf("%d", &mesNasc);
    printf("Ano de nascimento --> ");
    scanf("%d", &anoNasc);
    
    idadeDias = (365*anoAtual + 30*mesAtual + diaAtual) - (365*anoNasc - 30*mesNasc - diaNasc);
    
    printf("\nSua idade eh %d dias!!\n", idadeDias);

    return 0;
}