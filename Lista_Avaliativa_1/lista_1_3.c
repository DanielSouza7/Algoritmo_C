/* LISTA AVALIATIVA 1 ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 3 - Dado três valores, A, B e C, construa um algoritmo para verificar se
estes valores podem ser valores dos lados de um triângulo, e se for, se é um triangulo
escaleno, um triangulo equilátero ou um triangulo isósceles.
Para ser triângulo:
    a < b + c
    b < a + c
    c < a + b
*/

#include <stdio.h>

int main (void) {
    int a, b, c;

    printf("escreva o valor de A --> ");
    scanf("%d", &a);
    printf("escreva o valor de B --> ");
    scanf("%d", &b);
    printf("escreva o valor de C --> ");
    scanf("%d", &c);

    // Condição para ser um TRIÂNGULO
    if ((a < b + c) && (b < a + c) && (c < a + b)){
        //Condição para ser Equilátero (todos os lados iguais)
        if ((a == b) && (a == c) && (b == c)){
            printf("\n--------------------------------------------------------");
            printf("\n-- Os valores  digitados formam um triangulo do tipo: --");
            printf("\n--      EQUILÁTERO --> todos os lados são iguais      --");
            printf("\n--------------------------------------------------------");
        }
        //Condição para ser Escaleno (todos os lados diferentes)
        else if ((a != b) && (a != c) && (b != c)){
            printf("\n--------------------------------------------------------");
            printf("\n-- Os valores  digitados formam um triangulo do tipo: --");
            printf("\n--     ESCALENO --> todos os lados são diferentes     --");
            printf("\n--------------------------------------------------------");
        }
        //Condição para ser Isósceles (dois lados iguais)
        else if (((a == b) && (a != c)) || ((a == c) && (a != b)) || ((b == c) && (b != a))){
            printf("\n--------------------------------------------------------");
            printf("\n-- Os valores  digitados formam um triangulo do tipo: --");
            printf("\n--          ISÓSCELES --> dois lados iguais           --");
            printf("\n--------------------------------------------------------");
        }
    
    //Condição de ser triângulo NÃO foi atendida
    } else {
        printf("\n--------------------------------------------------");
        printf("\n-- Os valores digitados NAO formam um triangulo --");
        printf("\n--------------------------------------------------");
    }
        
    return 0;
}