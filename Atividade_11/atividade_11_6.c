/* ATIVIDADE 11 - FUNÇÕES - DANIEL SOUZA UC23100767

EXERCICIO 6 - Escreva uma função que receba o peso (quilos) e a altura (metros)
de uma pessoa. Calcule e retorne o IMC (Índice de Massa Corporal) dessa pessoa:
    IMC =  peso / altura²
*/

#include <stdio.h>

//FUNÇÃO
float imc() {
    float peso, altura, imc;
    
    printf("\n-------- CALCULO IMC --------\n");
    printf("   Peso (Kg) --> ");
    scanf("%f", &peso);
    printf("   Altura (metros) --> ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    
    printf("\n   IMC sera: %.2f", imc);
    printf("\n------------------------------\n");

}

int main (void) {

    imc();

    printf("\n -----------|------------------- ");
    printf("\n|  Magreza  |    IMC < 18.5     |");
    printf("\n|  Normal   | 18.5 < IMC < 24.9 |");
    printf("\n| Sobrepeso | 24.9 < IMC < 30   |");
    printf("\n| Obesidade |     IMC > 30      |");
    printf("\n -----------|------------------- \n");

    return 0;
}