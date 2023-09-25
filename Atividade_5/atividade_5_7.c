/* Atividade 5 - OPERADORES RELACIONAIS, LÓGICOS e ESTRUTURAS CONDICIONAIS
Aluno: DANIEL SOUZA - UC23100767*/

/* Exercício 7 --> Faça um algoritmo que calcule a media ponderada das notas de 3
provas. A primeira e a segunda prova tem peso 1 e a terceira tem peso 2. Ao final,
mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para
aprovação deve ser igual ou superior a 7.0 pontos.  */

#include<stdio.h>

int main (void) {
    float prova1, prova2, prova3, media;
    
    printf("Qual a nota do aluno na primeira prova --> ");
    scanf("%f", &prova1);
    printf("Qual a nota do aluno na segunda prova --> ");
    scanf("%f", &prova2);
    printf("Qual a nota do aluno na terceira prova --> ");
    scanf("%f", &prova3);

    // Calculando a média das provas
    media = (prova1 + prova2 + prova3 * 2) / 4;

    // Condições para Aprovação e Reprovação
    if (media >= 7)
        printf("\nAluno APROVADO com media final de %.2f", media);
    
    else
        printf("\nAluno REPROVADO com media final de %.2f", media);

    return 0;
}