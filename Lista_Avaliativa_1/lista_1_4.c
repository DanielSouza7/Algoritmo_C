/* LISTA AVALIATIVA 1 ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 4 - Dados três valores A, B e C, construa um algoritmo para verificar se
estes valores podem ser valores dos lados de um triângulo, e se for classificá-los
(imprimi-los) segundo os ângulos:
	- Triângulo Retângulo = 90º --> usar pitagoras (h² = ca² + co²);
	- Triângulo Obtusângulo > 90º --> usar pitagoras (h² > ca² + co²); OBTUSO
	- Triângulo Acutângulo < 90º --> usar pitagoras (h² < ca² + co²). AGUDO
*/

#include <stdio.h>

int main (void) {
    int a, b, c;
    int maior, meio, menor;

    printf("escreva o valor de A --> ");
    scanf("%d", &a);
    printf("escreva o valor de B --> ");
    scanf("%d", &b);
    printf("escreva o valor de C --> ");
    scanf("%d", &c);

    // Determinando a ordem de grandeza dos lados
    // 1ª Possibilidade - Todos os lados serem iguais
    if ((a == b) && (a == c)){
        maior = a;
        meio = b;
        menor = c;
    }
    
    // 2ª Possibilidade - Todos os lados serem diferentes
    else if ((a != b) && (a != c) && (b != c)){
        if ((a > b) && (a > c) && (b > c)){
            maior = a;
            meio = b;
            menor = c;
        }
        else if ((a > b) && (a > c) && (c > b)){
            maior = a;
            meio = c;
            menor = b;
        }
        else if ((b > a) && (b > c) && (a > c)){
            maior = b;
            meio = a;
            menor = c;
        }
        else if ((b > a) && (b > c) && (c > a)){
            maior = b;
            meio = c;
            menor = a;
        }
        else if ((c > a) && (c > b) && (a > b)){
            maior = c;
            meio = a;
            menor = b;
        }
        else if ((c > a) && (c > b) && (b > a)){
            maior = c;
            meio = b;
            menor = a;
        }
    }
    
    // 3ª Possibilidade - dois lados iguais (A e B)
    else if ((a == b) && (a != c)){
        if (a > c){
            maior = a;
            meio = b;
            menor = c;
        }
        else if (c > a){
            maior = c;
            meio = a;
            menor = b;
        }
    }

    // 4ª Possibilidade - dois lados iguais (A e C)
    else if ((a == c) && (a != b)){
        if (a > b){
            maior = a;
            meio = c;
            menor = b;
        }
        else if (b > a){
            maior = b;
            meio = a;
            menor = c;
        }
    }

    // 5ª Possibilidade - dois lados iguais (B e C)
    else if ((b == c) && (b != a)){
        if (b > a){
            maior = b;
            meio = c;
            menor = a;
        }
        else if (a > b){
            maior = a;
            meio = b;
            menor = c;
        }
    }
    
    // Determinando se os lados formam um TRIÂNGULO
    if ((a < b + c) && (b < a + c) && (c < a + b)){
        
        // Triângulo Retângulo - usar pitagoras (h² = ca² + co²)
        if ((maior * maior) == (meio * meio) + (menor * menor)){
            printf("\n---------------------------------------------------------------");
            printf("\n-- Valores  digitados formam um triangulo classificado como: --");
            printf("\n--           RETÂNGULO --> um dos ângulos é de 90°           --");
            printf("\n---------------------------------------------------------------");
        }

        // Triângulo Obtusângulo - usar pitagoras (h² > ca² + co²)
        else if ((maior * maior) > (meio * meio) + (menor * menor)){
            printf("\n---------------------------------------------------------------");
            printf("\n-- Valores  digitados formam um triangulo classificado como: --");
            printf("\n--      OBTUSÂNGULO --> um dos ângulos é maior que 90º)      --");
            printf("\n---------------------------------------------------------------");
        }
        // Triângulo Acutângulo - usar pitagoras (h² < ca² + co²)
        else if ((maior * maior) < (meio * meio) + (menor * menor)){
            printf("\n---------------------------------------------------------------");
            printf("\n-- Valores  digitados formam um triangulo classificado como: --");
            printf("\n--   ACUTÂNGULO --> todos os ângulos são menores que 90º)    --");
            printf("\n---------------------------------------------------------------");
        }
    
    //Condição de ser triângulo NÃO foi atendida
    } else {
        printf("\n--------------------------------------------------");
        printf("\n-- Os valores digitados NAO formam um triangulo --");
        printf("\n--------------------------------------------------");
    }
        
    return 0;
}