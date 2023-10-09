/* Atividade 8 - ESTRUTURAS DE REPETIÇÃO ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 6 --> Desenvolver um algoritmo que solicita ao usuário um determinado mês/ano,
determine e exiba o número de dias do mês/ano digitado. Considerar a existência de anos
bissextos: (ano % 4 = 0 e ano % 100 =/= 0) ou ano % 400 = 0. Ao final do programa deve ser
impressa a seguinte mensagem: VOCÊ DESEJA OUTRAS ENTRADAS (S/?)? Se a resposta for S o
programa deverá retornar ao começo, caso contrário (qualquer outro caractere) deverá encerrar
a sua execução.
*/

#include <stdio.h>

int main (void){
    int mes, ano, dias;
    char continua = 'S';
    
    do {
        printf("Determine um mês (1 a 12) --> ");
        scanf("%d", &mes);
        printf("Do ano (aaaa) --> ");
        scanf("%d", &ano);

        if (ano % 4 == 0){ // Ano é bissexto
            printf("\n---------------------------------------------------\n");
            printf("O ano %d é bissexto, portanto possui 366 dias.\n", ano);
            
            switch (mes)
            {
            case 1:
                dias = 31;
                printf("O mês escolhido foi Janeiro e possui %d dias.", dias);
                break;
            
            case 2:
                dias = 29;
                printf("O mês escolhido foi Fevereiro e possui %d dias.", dias);
                break;
            
            case 3:
                dias = 31;
                printf("O mês escolhido foi Março e possui %d dias.", dias);
                break;
            
            case 4:
                dias = 30;
                printf("O mês escolhido foi Abril e possui %d dias.", dias);
                break;
            
            case 5:
                dias = 31;
                printf("O mês escolhido foi Maio e possui %d dias.", dias);
                break;
            
            case 6:
                dias = 30;
                printf("O mês escolhido foi Junho e possui %d dias.", dias);
                break;
            
            case 7:
                dias = 31;
                printf("O mês escolhido foi Julho e possui %d dias.", dias);
                break;
            
            case 8:
                dias = 31;
                printf("O mês escolhido foi Agosto e possui %d dias.", dias);
                break;
            
            case 9:
                dias = 30;
                printf("O mês escolhido foi Setembro e possui %d dias.", dias);
                break;
            
            case 10:
                dias = 31;
                printf("O mês escolhido foi Outubro e possui %d dias.", dias);
                break;
            
            case 11:
                dias = 30;
                printf("O mês escolhido foi Novembro e possui %d dias.", dias);
                break;
            
            case 12:
                dias = 31;
                printf("O mês escolhido foi Dezembro e possui %d dias.", dias);
                break;
            
            default:
                printf("VALOR INVALIDO!");
                break;
            }
            printf("\n---------------------------------------------------\n");
        
        } else { // Ano não bissexto
            printf("\n---------------------------------------------------\n");
            printf("O ano %d não é bissexto, portanto possui 365 dias.\n", ano);
            
            switch (mes)
            {
            case 1:
                dias = 31;
                printf("O mês escolhido foi Janeiro e possui %d dias.", dias);
                break;
            
            case 2:
                dias = 28;
                printf("O mês escolhido foi Fevereiro e possui %d dias.", dias);
                break;
            
            case 3:
                dias = 31;
                printf("O mês escolhido foi Março e possui %d dias.", dias);
                break;
            
            case 4:
                dias = 30;
                printf("O mês escolhido foi Abril e possui %d dias.", dias);
                break;
            
            case 5:
                dias = 31;
                printf("O mês escolhido foi Maio e possui %d dias.", dias);
                break;
            
            case 6:
                dias = 30;
                printf("O mês escolhido foi Junho e possui %d dias.", dias);
                break;
            
            case 7:
                dias = 31;
                printf("O mês escolhido foi Julho e possui %d dias.", dias);
                break;
            
            case 8:
                dias = 31;
                printf("O mês escolhido foi Agosto e possui %d dias.", dias);
                break;
            
            case 9:
                dias = 30;
                printf("O mês escolhido foi Setembro e possui %d dias.", dias);
                break;
            
            case 10:
                dias = 31;
                printf("O mês escolhido foi Outubro e possui %d dias.", dias);
                break;
            
            case 11:
                dias = 30;
                printf("O mês escolhido foi Novembro e possui %d dias.", dias);
                break;
            
            case 12:
                dias = 31;
                printf("O mês escolhido foi Dezembro e possui %d dias.", dias);
                break;
            
            default:
                printf("VALOR INVALIDO");
                break;
            }
            printf("\n---------------------------------------------------\n");
        }

        // Continuar ou encerrar o algoritimo     
        printf("\nVOCÊ DESEJA OUTRAS ENTRADAS (S/?)? ");
        scanf("%s", &continua);
        printf("\n");
        __fpurge(stdin);


    } while (continua == 'S' || continua == 's');

    return 0;
}