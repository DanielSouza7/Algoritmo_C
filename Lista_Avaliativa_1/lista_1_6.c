/* LISTA AVALIATIVA 1 ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 6 - Leia 2 valores com uma casa decimal (x e y), que devem representar as
coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao qual
pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0).
Se o ponto estiver na origem, escreva a mensagem “Origem”. Se o ponto estiver sobre um
dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.
    - Q1 = -X  &&  +Y
    - Q2 = +X  &&  +Y
    - Q3 = +X  &&  -Y
    - Q4 = -X  &&  -Y
*/

#include <stdio.h>

int main (void) {
    float x, y;

    printf("----- PLANO -----\n");
    printf("  x = ");
    scanf("%f", &x);
    printf("  y = ");
    scanf("%f", &y);
    printf("-----------------\n");

    if ((x == 0) && (y == 0)){
        printf("---  Origem   ---\n");
        printf("-----------------\n");
    }
    else if ((x != 0) && (y == 0)){
        printf("---  Eixo X   ---\n");
        printf("-----------------\n");
    }
    else if ((x == 0) && (y != 0)){
        printf("---  Eixo Y   ---\n");
        printf("-----------------\n");
    }
    else if ((x < 0) && (y > 0)){
        printf("-- Quadrante 1 --\n");
        printf("-----------------\n");
    }
    else if ((x > 0) && (y > 0)){
        printf("-- Quadrante 2 --\n");
        printf("-----------------\n");
    }
    else if ((x > 0) && (y < 0)){
        printf("-- Quadrante 3 --\n");
        printf("-----------------\n");
    }
    else if ((x < 0) && (y < 0)){
        printf("-- Quadrante 4 --\n");
        printf("-----------------\n");
    }

    return 0;
}