/* Atividade 10 - VETORES ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 27 --> Leia 10 números inteiros e armazene em um vetor. Em seguida escreva
os elementos que são primos e suas respectivas posições no vetor.
*/

#include <stdio.h>

int main (void) {
    
    int vetor[10];
    int primo = 1; // se 1 o número é primo, se 0 não é

    for (int i = 0; i < 10; ++i) {
        printf("Digite um número --> ");
        scanf("%d", &vetor[i]);
    }

    printf("-------------------------------------------\n");
    
    for (int i = 0; i < 10; ++i) {
        primo = 1;
        
        // 0 e 1 não são primos
        if (vetor[i] <= 1) {
            primo = 0;
        

        } else {
            // Números que possuem raiz quadrada não são primos
            for (int j = 2; j * j <= vetor[i]; ++j) {
                if (vetor[i] % j == 0) {
                    primo = 0;
                    break;
                }
            }
        }
        
        if (primo == 1) {
            printf("   O número %d, na posição %d, é primo\n", vetor[i], i);
        }
    }

    return 0;
}


































/*int main (void) {
    int vetor[10], i = 0;
    
    for(i = 0; i < 10; i++){
        printf("Digite um número --> ");
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 10; i++){
        if((vetor[i] == 0) || (vetor[i] == 1)){ // 0 e 1 não são primos
            primo = 0; // primo = 0 --> não é primo // primo = 1 --> é número primo
    
        } else if (vetor[i] % i == 0) {
                primo = 0;
                break;
        
        } else {
            printf("\nO elemento %d, na posição %d, é um número primo.", vetor[i], i);
        }
        
       
    
    }

       
    return 0;
}
*/