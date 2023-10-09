/* Atividade 8 - ESTRUTURAS DE REPETIÇÃO ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 1 --> Um cinema possui capacidade de 100 lugares e está sempre com ocupação total.
Certo dia, cada espectador respondeu a um questionário, no qual constava:
	- sua idade;
	- sua opinião em relação ao filme, segundo as seguintes notas:
            
            | Nota | Significado |
            |------|-------------|
            |  A   | Ótimo       |
            |  B   | Bom         |
            |  C   | Regular     |
            |  D   | Ruim        |
            |  E   | Péssimo     |

Elabore um algoritmo que, lendo estes dados, calcule e imprima:
    - quantidade de respostas ótimo; 
    - diferença percentual entre respostas bom e regular; 
    - média de idade das pessoas que responderam ruim; 
    - percentagem de respostas péssimo e a maior idade que utilizou esta opção; 
    - diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim.
*/

#include <stdio.h>
int main (void){
    int idade;
    char nota;
    int espectador = 0;
    int difAD;
    float difBC;
    
    // Variáveis para ÓTIMO
    int otimo = 0, maiorIdadeA = 0;
    
    // Variáveis para BOM
    int bom = 0;
    float percentagemB;
    
    // Variáveis para REGULAR
    int regular = 0;
    float percentagemC;
    
    // Variáveis para RUIM
    int ruim = 0, idadeD = 0, maiorIdadeD = 0;
    float mediaIdadeD;
    
    // Variáveis para PÉSSIMO
    int pessimo = 0, maiorIdadeE = 0;
    float percentagemE;

    printf(" --------------- \n");
    printf("|---- NOTA -----|\n");
    printf("|---------------|\n");
    printf("|  A  |  Ótimo  |\n");
    printf("|  B  |   Bom   |\n");
    printf("|  C  | Regular |\n");
    printf("|  D  |  Ruim   |\n");
    printf("|  E  | Péssimo |\n");
    printf(" --------------- \n");
    
    do {
        do {
            printf("\nEspectador Nº %d", espectador + 1);
            printf("\n------------------------------------");
            printf("\nQual a sua nota para o filme --> ");
            scanf("%s", &nota);
            printf("Qual a sua idade --> ");
            scanf("%d", &idade);
            
            switch (nota){
            case 'A':
                if(idade > maiorIdadeA){
                    maiorIdadeA = idade;
                }
                otimo++;
                break;
            case 'a':
                if(idade > maiorIdadeA){
                    maiorIdadeA = idade;
                }
                otimo++;
                break;
            
            case 'B':
                bom++;
                break;
            case 'b':
                bom++;
                break;
            
            case 'C':
                regular++;
                break;
            case 'c':
                regular++;
                break;
            
            case 'D':
                idadeD = idadeD + idade;
                if(idade > maiorIdadeD){
                    maiorIdadeD = idade;
                }
                ruim++;
                break;
            case 'd':
                idadeD = idadeD + idade;
                if(idade > maiorIdadeD){
                    maiorIdadeD = idade;
                }
                ruim++;
                break;
            
            case 'E':
                if(idade > maiorIdadeE){
                    maiorIdadeE = idade;
                }
                pessimo++;
                break;
            case 'e':
                if(idade > maiorIdadeE){
                    maiorIdadeE = idade;
                }
                pessimo++;
                break;
            
            default:
                printf("\n--- Valor INVALIDO ---\n\n");
                break;
            }

        } while (nota != 'A' && nota != 'a' && nota != 'B' && nota != 'b' && nota != 'C' && nota != 'c' && nota != 'D' && nota != 'd' && nota != 'E' && nota != 'e');
        
    
        espectador++;
    
        __fpurge(stdin);
    
    } while (espectador < 100);
    
    mediaIdadeD = (float)idadeD / (float)ruim;

    percentagemB = (float)bom * 100 / ((float)espectador);
    percentagemC = (float)regular * 100 / ((float)espectador);
    percentagemE = (float)pessimo * 100 / ((float)espectador);

    difBC = percentagemB - percentagemC;
    difAD = maiorIdadeA - maiorIdadeD;
    
    printf("\n-----------------------------------------------------------------------------------------------------");
    printf("\nNúmero de ÓTIMOS que o filme recebeu = %d", otimo);
    printf("\nA média de idade das pessoas que responderam RUIM = %.2f", mediaIdadeD);
    printf("\nDiferença percentual entre respostas BOM e REGULAR = %.2f %%", difBC);
    printf("\nA percentagem de respostas PÉSSIMO = %.2f %%", percentagemE);
    printf("\nA maior idade de quem respondeu PÉSSIMO = %d", maiorIdadeE);
    printf("\nDiferença entre a maior idade de quem respondeu ÓTIMO e a maior idade de quem respondeu RUIM = %d", difAD);
    printf("\n-----------------------------------------------------------------------------------------------------");

    return 0;
}