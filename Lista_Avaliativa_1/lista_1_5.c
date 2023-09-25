/* LISTA AVALIATIVA 1 ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 5 - Leia os quatro valores correspondentes aos eixos x e y de dois pontos
quaisquer no plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando
4 casas decimais após a vírgula, segundo a fórmula:
    Distância = sqrt( (x" - x')² + (y" - y')² )
*/

#include <stdio.h>
#include <math.h>

int main (void) {
    int x1, x2, y1, y2;
    float distancia;
    printf("--- PLANO 1 ---\n");
    printf("  x' = ");
    scanf("%d", &x1);
    printf("  x\" = ");
    scanf("%d", &x2);

    printf("\n--- PLANO 2 ---\n");
    printf("  y' = ");
    scanf("%d", &y1);
    printf("  y\" = ");
    scanf("%d", &y2);

    distancia = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

    printf("\n-----------------------------------------\n");
    printf("-- A distancia entre os planos é %.2f. --\n", distancia);
    printf("-----------------------------------------\n");

    return 0;
}