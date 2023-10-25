/* ATIVIDADE 11 - FUNÇÕES - DANIEL SOUZA UC23100767

EXERCICIO 5 - Escreva uma função para o cálculo do volume de uma esfera,
 onde π = 3.1414592, e o valor do raio r deve ser passado por parâmetro.
    V =  4/3π * raio³
*/

#include <stdio.h>

//FUNÇÃO
float esfera(float raio) {
    float pi = 3.1414592;
    float volume = 4/3 * pi * raio * raio * raio;

    return volume;
}

int main (void) {
    float raio;
    printf("\n-------- VOLUME DE UM ESFERA --------\n");
    printf("   Digite o raio --> ");
    scanf("%f", &raio);
    
    float volume = esfera (raio);
    printf("\n   O volume da esfera sera %.2f", volume);
    printf("\n-------------------------------------\n");

    return 0;
}