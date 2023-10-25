/* ATIVIDADE 11 - FUNÇÕES - DANIEL SOUZA UC23100767

EXERCICIO 4 - Escreva uma função que receba por parâmetro a altura e o raio de um
cilindro circular e retorne o volume desse cilindro. O volume de um cilindro circular
é calculado por meio da seguinte fórmula (π = 3.1414592):
    V = π * raio² * altura

*/

#include <stdio.h>

//FUNÇÃO
void cilindro() {
    float altura, raio, volume;
    float pi = 3.1414592;
    
    printf("\n------- VOLUME DE UM CILINDRO -------\n");
    printf("  Digite a altura --> ");
    scanf("%f", &altura);
    printf("  Digite o raio --> ");
    scanf("%f", &raio);

    volume = pi * raio * raio * altura;

    printf("\n  O volume do cilidro sera %.2f", volume);
    printf("\n-------------------------------------\n");
}

int main (void) {

    cilindro();

    return 0;
}