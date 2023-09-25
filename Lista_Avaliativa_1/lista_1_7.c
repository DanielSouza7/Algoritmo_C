/* LISTA AVALIATIVA 1 ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 7 - Faça um algoritmo que leia as três notas de 30 alunos de uma turma.
Para cada aluno, calcule a média ponderada, como segue:
	MP = ( n1*2 + n2*4 + n3*3 ) / 10
Além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma mensagem
"Aprovado", caso a média seja maior ou igual a sete, e uma mensagem "Reprovado", caso
contrário. Ao final, mostre a média geral.
*/

#include <stdio.h>

int main (void) {
    float nota1, nota2, nota3, media, mediaTurma;
    float mediaSoma = 0;
    int contador = 1;

    do {
        printf("-------------------\n");
        printf("--- ALUNO nº %d ---\n\n", contador);
        printf("  Nota 1 = ");
        scanf("%f", &nota1);
        printf("  Nota 2 = ");
        scanf("%f", &nota2);
        printf("  Nota 3 = ");
        scanf("%f", &nota3);
    
        media = ((nota1 * 2) + (nota2 * 4) + (nota3 * 3)) / 10;
    
        printf("  Média = %.2f\n", media);

        if (media >= 7){
            printf("\n*** APROVADO ***\n\n");
        } else {
            printf("\n!!! REPROVADO !!!\n\n");
        }
        
        contador++;

        mediaSoma = mediaSoma + media;

    } while (contador < 31);

    mediaTurma = mediaSoma / (contador -1);

    printf("\n\n Média da Turma = %.2f", mediaTurma);

    return 0;
}