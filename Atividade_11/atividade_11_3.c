/* ATIVIDADE 11 - FUNÇÕES - DANIEL SOUZA UC23100767

EXERCICIO 3 - Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a 
retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) * (5.0/9.0), 
sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/

#include <stdio.h>

// FUNÇÃO DE CONVERSÃO
void converter() {
	float temp_far, temp_cel;
	
	printf("Digite a temperatura em Fahrenheit --> ");
	scanf("%f", &temp_far);

	temp_cel = (temp_far - 32.0) * (5.0 / 9.0);
	
	printf("\nA temperatura %.2f em Fahrenheit equivale %.2f em Celsius.\n", temp_far, temp_cel);

}

// FUNÇÃO MAIN
int main(void) {

	converter();
	
	return 0;
}