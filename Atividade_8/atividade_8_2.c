/* Atividade 8 - ESTRUTURAS DE REPETIÇÃO ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 2 --> Em um prédio, com 50 moradores, há três elevadores denominados A, B e C.
Para otimizar o sistema de controle dos elevadores, foi realizado um levantamento no qual
cada usuário respondia:
    • o elevador que utilizava com mais frequência;
    • o período que utilizava o elevador, entre: 
        ◦ “M” = matutino;
        ◦ “V” = vespertino;
        ◦ “N” = noturno.
Construa um algoritmo que calcule e imprima:
    • qual o período mais usado de todos e a que elevador pertence; 
    • qual é o elevador mais frequentado e em que período se concentra o maior fluxo; 
    • qual a diferença percentual entre o mais usado dos horários e o menos usado; 
    • qual a percentagem sobre o total de serviços prestados do elevador de média utilização.
*/

#include <stdio.h>
#define moradores 10

int main (void){
    char elevador, periodo;
    int elevadorA = 0, elevadorB = 0, elevadorC = 0;
    int elevadorA_M = 0, elevadorA_V = 0, elevadorA_N = 0;
    int elevadorB_M = 0, elevadorB_V = 0, elevadorB_N = 0; 
    int elevadorC_M = 0, elevadorC_V = 0, elevadorC_N = 0;
    int morador = 0;
    int soma_M, soma_V, soma_N;
    int elevador_maior_M = 0, elevador_maior_V = 0, elevador_maior_N = 0;
    int elevador_menor_M = 0, elevador_menor_V = 0, elevador_menor_N = 0;
    int elevador_meio = 0;
    float perc_dif_M, perc_dif_V, perc_dif_N, perc_meio;

    do {
        do {
            printf("Qual o elevador que você mais usa (A, B, C) --> ");
            scanf("%c", &elevador);
            __fpurge(stdin);
            
            switch (elevador){
            case 'A':
                __fpurge(stdin);
                elevadorA++;
                
                printf("Em qual periodo (M, V, N) --> ");
                scanf("%c", &periodo);
                do{
                    switch (periodo){
                    case 'M':
                        elevadorA_M++;
                        break;
                    case 'm':
                        elevadorA_M++;
                        break;
                    
                    case 'V':
                        elevadorA_V++;
                        break;
                    case 'v':
                        elevadorA_V++;
                        break;
                    
                    case 'N':
                        elevadorA_N++;
                        break;
                    case 'n':
                        elevadorA_N++;
                        break;
                    
                    default:
                        printf("Valor INVALIDO");
                        __fpurge(stdin);
                        break;
                    }
                } while (periodo != 'M' && periodo != 'm' && periodo != 'V' && periodo != 'v' && periodo != 'N' && periodo != 'n');
                
                __fpurge(stdin);
                
                break;
            
            case 'a':
                elevadorA++;
                
                printf("Em qual periodo (M, V, N) --> ");
                scanf("%c", &periodo);
                do{
                    switch (periodo){
                    case 'M':
                        elevadorA_M++;
                        break;
                    case 'm':
                        elevadorA_M++;
                        break;
                    
                    case 'V':
                        elevadorA_V++;
                        break;
                    case 'v':
                        elevadorA_V++;
                        break;
                    
                    case 'N':
                        elevadorA_N++;
                        break;
                    case 'n':
                        elevadorA_N++;
                        break;
                    
                    default:
                        printf("Valor INVALIDO");
                        __fpurge(stdin);
                        break;
                    }
                } while (periodo != 'M' && periodo != 'm' && periodo != 'V' && periodo != 'v' && periodo != 'N' && periodo != 'n');
                
                __fpurge(stdin);
                
                break;
            
            case 'B':
                elevadorB++;
                
                printf("Em qual periodo (M, V, N) --> ");
                scanf("%c", &periodo);
                do{
                    switch (periodo){
                    case 'M':
                        elevadorB_M++;
                        break;
                    case 'm':
                        elevadorB_M++;
                        break;
                    
                    case 'V':
                        elevadorB_V++;
                        break;
                    case 'v':
                        elevadorB_V++;
                        break;
                    
                    case 'N':
                        elevadorB_N++;
                        break;
                    case 'n':
                        elevadorB_N++;
                        break;
                    
                    default:
                        printf("Valor INVALIDO");
                        __fpurge(stdin);
                        break;
                    }
                } while (periodo != 'M' && periodo != 'm' && periodo != 'V' && periodo != 'v' && periodo != 'N' && periodo != 'n');
                
                __fpurge(stdin);
                
                break;
            
            case 'b':
                elevadorB++;
                
                printf("Em qual periodo (M, V, N) --> ");
                scanf("%c", &periodo);
                do{
                    switch (periodo){
                    case 'M':
                        elevadorB_M++;
                        break;
                    case 'm':
                        elevadorB_M++;
                        break;
                    
                    case 'V':
                        elevadorB_V++;
                        break;
                    case 'v':
                        elevadorB_V++;
                        break;
                    
                    case 'N':
                        elevadorB_N++;
                        break;
                    case 'n':
                        elevadorB_N++;
                        break;
                    
                    default:
                        printf("Valor INVALIDO");
                        __fpurge(stdin);
                        break;
                    }
                } while (periodo != 'M' && periodo != 'm' && periodo != 'V' && periodo != 'v' && periodo != 'N' && periodo != 'n');
                
                __fpurge(stdin);
                
                break;
            
            case 'C':
                elevadorC++;
                
                printf("Em qual periodo (M, V, N) --> ");
                scanf("%c", &periodo);
                do{
                    switch (periodo){
                    case 'M':
                        elevadorC_M++;
                        break;
                    case 'm':
                        elevadorC_M++;
                        break;
                    
                    case 'V':
                        elevadorC_V++;
                        break;
                    case 'v':
                        elevadorC_V++;
                        break;
                    
                    case 'N':
                        elevadorC_N++;
                        break;
                    case 'n':
                        elevadorC_N++;
                        break;
                    
                    default:
                        printf("Valor INVALIDO");
                        __fpurge(stdin);
                        break;
                    }
                } while (periodo != 'M' && periodo != 'm' && periodo != 'V' && periodo != 'v' && periodo != 'N' && periodo != 'n');
                
                __fpurge(stdin);
                
                break;
            
            case 'c':
                elevadorC++;
                
                printf("Em qual periodo (M, V, N) --> ");
                scanf("%c", &periodo);
                do{
                    switch (periodo){
                    case 'M':
                        elevadorC_M++;
                        break;
                    case 'm':
                        elevadorC_M++;
                        break;
                    
                    case 'V':
                        elevadorC_V++;
                        break;
                    case 'v':
                        elevadorC_V++;
                        break;
                    
                    case 'N':
                        elevadorC_N++;
                        break;
                    case 'n':
                        elevadorC_N++;
                        break;
                    
                    default:
                        printf("Valor INVALIDO");
                        __fpurge(stdin);
                        break;
                    }
                } while (periodo != 'M' && periodo != 'm' && periodo != 'V' && periodo != 'v' && periodo != 'N' && periodo != 'n');
                
                __fpurge(stdin);
                break;    
        
            default:
                printf("\n--- Valor INVALIDO ---\n");
                __fpurge(stdin);
                break;
            }

        } while (elevador != 'A' && elevador != 'a' && elevador != 'B' && elevador != 'b' && elevador != 'C' && elevador != 'c');
        __fpurge(stdin);
    
        morador++;
    
        __fpurge(stdin);
        printf("-----------------------------------------------------\n");
    
    } while (morador < moradores);
    
    
    soma_M = elevadorA_M + elevadorB_M + elevadorC_M;
    soma_V = elevadorA_V + elevadorB_V + elevadorC_V;
    soma_N = elevadorA_N + elevadorB_N + elevadorC_N;
    
    // Período mais usado e a que elevador pertence
    if ((soma_M > soma_V) && (soma_M > soma_N)){
        printf("\n   • O período mais usado é o MATUTINO, ");
        if ((elevadorA_M > elevadorB_M) && (elevadorA_M > elevadorC_M)){
            printf("o elevador A é o mais usado neste periodo.");
        
        }
        if ((elevadorB_M > elevadorA_M) && (elevadorB_M > elevadorC_M)){
            printf("o elevador B é o mais usado neste periodo.");
        
        }
        if ((elevadorC_M > elevadorA_M) && (elevadorC_M > elevadorB_M)){
            printf("o elevador C é o mais usado neste periodo.");
        }
    }
    if ((soma_V > soma_M) && (soma_V > soma_N)){
        printf("\n   • O período mais usado é o VESPERTINO, ");
        if ((elevadorA_V > elevadorB_V) && (elevadorA_V > elevadorC_V)){
            printf("o elevador A é o mais usado neste periodo.");
        }
        if ((elevadorB_V > elevadorA_V) && (elevadorB_V > elevadorC_V)){
            printf("o elevador B é o mais usado neste periodo.");
        }
        if ((elevadorC_V > elevadorA_V) && (elevadorC_V > elevadorB_V)){
            printf("o elevador C é o mais usado neste periodo.");
        }
    }
    if ((soma_N > soma_M) && (soma_N > soma_V)){
        printf("\n   • O período mais usado de todos é o NOTURNO, ");
        if ((elevadorA_N > elevadorB_N) && (elevadorA_N > elevadorC_N)){
            printf("o elevador A é o mais usado neste periodo.");
        }
        if ((elevadorB_N > elevadorA_N) && (elevadorB_N > elevadorC_N)){
            printf("o elevador B é o mais usado neste periodo.");
        }
        if ((elevadorC_N > elevadorA_N) && (elevadorC_N > elevadorB_N)){
            printf("o elevador C é o mais usado neste periodo.");
        }
    }

    // Elevador mais frequentado e em que período se concentra o maior fluxo
    if ((elevadorA > elevadorB) && (elevadorA > elevadorC)){
        printf("\n   • O elevador A é o mais frequentado, ");
        
        if ((elevadorA_M > elevadorA_V) && (elevadorA_M > elevadorA_N)){
            printf("o período onde se concentra o maior fluxo é Matutino.");
        }
        if ((elevadorA_V > elevadorA_M) && (elevadorA_V > elevadorA_N)){
            printf("o período onde se concentra o maior fluxo é Vespertino.");
        }
        if ((elevadorA_N > elevadorA_M) && (elevadorA_N > elevadorA_V)){
            printf("o período onde se concentra o maior fluxo é Noturno.");
        }
    }
    if ((elevadorB > elevadorA) && (elevadorB > elevadorC)){
        printf("\n   • O elevador B é o mais frequentado, ");
        
        if ((elevadorB_M > elevadorB_V) && (elevadorB_M > elevadorB_N)){
            printf("o período onde se concentra o maior fluxo é Matutino.");
        }
        if ((elevadorB_V > elevadorB_M) && (elevadorB_V > elevadorB_N)){
            printf("o período onde se concentra o maior fluxo é Vespertino.");
        }
        if ((elevadorB_N > elevadorB_M) && (elevadorB_N > elevadorB_V)){
            printf("o período onde se concentra o maior fluxo é Noturno.");
        }
    }
    if ((elevadorC > elevadorA) && (elevadorC > elevadorB)){
        printf("\n   • O elevador C é o mais frequentado, ");
        
        if ((elevadorC_M > elevadorC_V) && (elevadorC_M > elevadorC_N)){
            printf("o período onde se concentra o maior fluxo é Matutino.");
        }
        if ((elevadorC_V > elevadorC_M) && (elevadorC_V > elevadorC_N)){
            printf("o período onde se concentra o maior fluxo é Vespertino.");
        }
        if ((elevadorC_N > elevadorC_M) && (elevadorC_N > elevadorC_V)){
            printf("o período onde se concentra o maior fluxo é Noturno.");
        }
    }

    // A diferença percentual entre o mais usado e o menos usado no MATUTINO; 
    if ((elevadorA_M > elevadorB_M) && (elevadorA_M > elevadorC_M)){
        elevador_maior_M = elevadorA_M;
    }
    if ((elevadorB_M > elevadorA_M) && (elevadorB_M > elevadorC_M)){
        elevador_maior_M = elevadorB_M;
    }
    if ((elevadorC_M > elevadorA_M) && (elevadorC_M > elevadorB_M)){
        elevador_maior_M = elevadorC_M;
    }
    
    if ((elevadorA_M < elevadorB_M) && (elevadorA_M < elevadorC_M)){
        elevador_menor_M = elevadorA_M;
    }
    if ((elevadorB_M < elevadorA_M) && (elevadorB_M < elevadorC_M)){
        elevador_menor_M = elevadorB_M;
    }
    if ((elevadorC_M < elevadorA_M) && (elevadorC_M < elevadorB_M)){
        elevador_menor_M = elevadorC_M;
    }

    perc_dif_M = ((elevador_maior_M - elevador_menor_M) / elevador_menor_M) * 100;

    printf("\n\n   • A diferença percentual entre o elevador mais usado e o menos usado no periodo MATUTINO é %.2f%%", perc_dif_M);



    // A diferença percentual entre o mais usado e o menos usado no VESPERTINO;
    if ((elevadorA_V > elevadorB_V) && (elevadorA_V > elevadorC_V)){
        elevador_maior_V = elevadorA_V;
    }
    if ((elevadorB_V > elevadorA_V) && (elevadorB_V > elevadorC_V)){
        elevador_maior_V = elevadorB_V;
    }
    if ((elevadorC_V > elevadorA_V) && (elevadorC_V > elevadorB_V)){
        elevador_maior_V = elevadorC_V;
    }
    
    if ((elevadorA_V < elevadorB_V) && (elevadorA_V < elevadorC_V)){
        elevador_menor_V = elevadorA_V;
    }
    if ((elevadorB_V < elevadorA_V) && (elevadorB_V < elevadorC_V)){
        elevador_menor_V = elevadorB_V;
    }
    if ((elevadorC_V < elevadorA_V) && (elevadorC_V < elevadorB_V)){
        elevador_menor_V = elevadorC_V;
    }

    perc_dif_V = ((elevador_maior_V - elevador_menor_V) / elevador_menor_V) * 100;

    printf("\n   • A diferença percentual entre o elevador mais usado e o menos usado no periodo VESPERTINO é %.2f%%", perc_dif_V);

    // A diferença percentual entre o mais usado e o menos usado no NOTURNO;
    if ((elevadorA_N > elevadorB_N) && (elevadorA_N > elevadorC_N)){
        elevador_maior_N = elevadorA_N;
    }
    if ((elevadorB_N > elevadorA_N) && (elevadorB_N > elevadorC_N)){
        elevador_maior_N = elevadorB_N;
    }
    if ((elevadorC_N > elevadorA_N) && (elevadorC_N > elevadorB_N)){
        elevador_maior_N = elevadorC_N;
    }
    
    if ((elevadorA_N < elevadorB_N) && (elevadorA_N < elevadorC_N)){
        elevador_menor_N = elevadorA_N;
    }
    if ((elevadorB_N < elevadorA_N) && (elevadorB_N < elevadorC_N)){
        elevador_menor_N = elevadorB_N;
    }
    if ((elevadorC_N < elevadorA_N) && (elevadorC_N < elevadorB_N)){
        elevador_menor_N = elevadorC_N;
    }

    perc_dif_N = ((elevador_maior_N - elevador_menor_N) / elevador_menor_N) * 100;

    printf("\n   • A diferença percentual entre o elevador mais usado e o menos usado no periodo VESPERTINO é %.2f%%", perc_dif_N);


    // A percentagem sobre o total de serviços prestados do elevador de média utilização.
    if(((elevadorA < elevadorB) && (elevadorA > elevadorC)) || ((elevadorA < elevadorC) && (elevadorA > elevadorB))){
        elevador_meio = elevadorA;
        
        perc_meio = (float)(elevador_meio * 100) / (elevadorA + elevadorB + elevadorC);
        
        printf("\n\n   • O elevador de média utilização é o 'A', sua percentagem de serviços prestados é %.2f%%.", perc_meio);
    

    }
    if(((elevadorB < elevadorA) && (elevadorB > elevadorC)) || ((elevadorB < elevadorC) && (elevadorB > elevadorA))){
        elevador_meio = elevadorB;
        
        perc_meio = (float)(elevador_meio * 100) / (elevadorA + elevadorB + elevadorC);
        
        printf("\n\n   • O elevador de média utilização é o 'B', sua percentagem de serviços prestados é %.2f%%.", perc_meio);
    
    
    }
    if(((elevadorC < elevadorA) && (elevadorC > elevadorB)) || ((elevadorC < elevadorB) && (elevadorC > elevadorA))){
        elevador_meio = elevadorC;
        
        perc_meio = (float)(elevador_meio * 100) / (elevadorA + elevadorB + elevadorC);
        
        printf("\n\n   • O elevador de média utilização é o 'C', sua percentagem de serviços prestados é %.2f%%.", perc_meio);
    }
    
    return 0;
}