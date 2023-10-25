/* ATIVIDADE 11 - FUNÇÕES - DANIEL SOUZA UC23100767

EXERCICIO 1 - Escreva uma função que receba por parâmetro dois números
e retorne o maior deles.
*/

#include <stdio.h>

//FUNÇÃO
void maior() {
    int num_1, num_2;
    int maior_num = 0;
    
    printf("Digite dois numeros --> ");
    scanf("%d %d", &num_1, &num_2);

    maior_num = num_1;

    if (num_2 > num_1){
        maior_num = num_2;
    }

    printf("\n O maior numero e %d.\n", maior_num);
}

int main (void) {

    maior();

    return 0;
}