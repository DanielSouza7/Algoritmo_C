/* Atividade 8 - ESTRUTURAS DE REPETIÇÃO ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 7 --> Faça um algoritmo em para ler o nome, o sexo ( M ou m para masculino
e F ou f para feminino), a altura e o peso de um grupo de 10 pessoas. O programa de
deve calcular e exibir:
    • o número de homens; 
    • o número de mulheres;
    • a altura média dos homens; 
    • a altura média das mulheres;
    • a altura média do grupo; 
    • o peso médio dos homens; 
    • o peso médio das mulheres; 
    • e o peso médio do grupo.
*/

#include <stdio.h>

int main (void){
    char nome;
    char sexo;
    int qntM = 0, qntF = 0;
    float altura;
    float altM = 0, altF = 0, mediaAltM = 0, mediaAltF = 0, mediaAltT = 0;
    float peso;
    float pesoM = 0, pesoF = 0, mediaPesoM = 0, mediaPesoF = 0, mediaPesoT = 0;

    for (int i = 0; i < 10; i++){
        printf("Nome --> ");
        scanf("%c", &nome);
        __fpurge(stdin);

        do {
            printf("Sexo (M -Masculino | F- Feminino) --> ");
            scanf("%c", &sexo);
            
            switch (sexo){
            // Masculino para as entradas 'M' e 'm'
            case 'M':
                qntM++;
                break;
            
            case 'm':
                qntM++;
                break;
            
            // Feminino para as entradas 'F' e 'f'
            case 'F':
                qntF++;
                break;
        
            case 'f':
                qntF++;
                break;
            
            // Entrada diferente das permitidas
            default:
                printf("Valor INVALIDO\n");
                __fpurge(stdin); // zerar a entrada do teclado
                break;
            }
        } while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');

        if (sexo == 'M' || sexo == 'm'){
            printf("Altura --> ");
            scanf("%f", &altura);

            altM += altura;

            printf("Peso --> ");
            scanf("%f", &peso);

            pesoM += peso;
        }
        if (sexo == 'F' || sexo == 'f'){
            printf("Altura --> ");
            scanf("%f", &altura);

            altF += altura;

            printf("Peso --> ");
            scanf("%f", &peso);

            pesoF += peso;
        }

        __fpurge(stdin);
        printf("------------------------------------\n");
    }

    mediaAltF = altF / (float)qntF;
    mediaAltM = altM / (float)qntM;
    mediaAltT = (altF + altM) / (float)10;

    mediaPesoF = pesoF / (float)qntF;
    mediaPesoM = pesoM / (float)qntM;
    mediaPesoT = (pesoF + pesoM) / (float)10;

    printf("Número de homens = %d\n", qntM);
    printf("Número de mulheres = %d\n", qntF);
    printf("\nAltura média dos homens = %.2f\n", mediaAltM);
    printf("Altura média das mulheres = %.2f\n", mediaAltF);
    printf("Altura média do grupo = %.2f\n", mediaAltT);
    printf("\nPeso médio dos homens = %.2f\n", mediaPesoM);
    printf("Peso médio das mulheres = %.2f\n", mediaPesoF);
    printf("Peso médio do grupo = %.2f\n", mediaPesoT);

    return 0;
}