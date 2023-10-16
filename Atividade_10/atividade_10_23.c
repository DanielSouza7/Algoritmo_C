/* Atividade 10 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 23 --> Ler dois conjuntos de números reais, armazenando-os em vetores
e calcular o produto escalar entre eles. Os conjuntos têm 5 elementos cada. Imprimir
os dois conjuntos e o produto escalar, sendo que o produto escalar é dado por:
(x1 * y1) + (x2 * y2) + ... + xn * yn.
*/

#include <stdio.h>

int main (void) {
    
    int vetor_a[5], vetor_b[5];
    int i = 0;
    int soma_n = 0, produto_escalar = 0;

    // Entradas do primeiro conjunto (vetor A)
    for(i = 0; i < 5; i++){
        printf("Digite um número (vetor A)--> ");
        scanf("%d", &vetor_a[i]);
    }
    printf("--------------------------------------\n");
    
    // Entradas do segundo conjunto (vetor B)
    for(i = 0; i < 5; i++){
        printf("Digite um número (vetor B)--> ");
        scanf("%d", &vetor_b[i]);
    }
    printf("--------------------------------------\n");

    for(i = 0; i < 5; i++){
        soma_n = vetor_a[i] * vetor_b[i];

        produto_escalar += soma_n;
    }
    
    printf("\n  Conjunto A =\n");
    for(i = 0; i < 5; i++){
        printf("     %d", vetor_a[i]);
    }

    printf("\n  Conjunto B =\n");
    for(i = 0; i < 5; i++){
        printf("     %d", vetor_b[i]);
    }
    printf("\n\n  Produto escalar = %d\n", produto_escalar);
    
       
    return 0;
}