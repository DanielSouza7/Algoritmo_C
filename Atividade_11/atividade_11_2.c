/* ATIVIDADE 11 - FUNÇÕES - DANIEL SOUZA UC23100767

EXERCICIO 2 - Faça uma função que receba um número inteiro entre 1 a 12 e imprima em tela o mês e a 
sua quantidade de dias de acordo com o número digitado pelo usuário. Exemplo: 
Entrada = 4. Saída = abril.
*/

#include <stdio.h>

// FUNÇÃO
void mes() {
	int numero;
	
	do {
		printf("Digite um numero (1 a 12) --> ");
		scanf("%d", &numero);
		printf("\n");
		switch (numero){
		case 1:
			printf("Janeiro (31 dias)");
			break;
	
		case 2:
			printf("Fevereiro (28 dias)");
			break;

		case 3:
			printf("Março (31 dias)");
			break;

		case 4:
			printf("Abril (30 dias)");
			break;
	
		case 5:
			printf("Maio (31 dias)");
			break;
	
		case 6:
			printf("Junho (30 dias)");
			break;

		case 7:
			printf("Julho (31 dias)");
			break;

		case 8:
			printf("Agosto (31 dias)");
			break;
	
		case 9:
			printf("Setembro (30 dias)");
			break;
	
		case 10:
			printf("Outubro (31 dias)");
			break;

		case 11:
			printf("Novembro (30 dias)");
			break;

		case 12:
			printf("Dezembro (31 dias)");
			break;
	
		default:
			printf("Valor INVALIDO ** ");
			break;
		}
	} while ((numero < 1) || (numero > 12));
}

// FUNÇÃO MAIN
int main(void) {

	mes();
	
	return 0;
}