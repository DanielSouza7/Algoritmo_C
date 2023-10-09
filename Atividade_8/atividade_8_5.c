/* Atividade 8 - ESTRUTURAS DE REPETIÇÃO ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 5 --> A Copa do Mundo de Futebol Feminino é a competição mais importante no futebol
feminino internacional, ela é organizada pela Federação Internacional de Futebol (FIFA) e está
acontecendo este ano na França. Você foi contratado para desenvolver um algoritmo para realizar
uma pesquisa para saber qual das jogadoras listadas na tabela abaixo é considerada a melhor.
Na pesquisa deverá ser solicitado o nome, idade (maior que 12 anos), sexo (masculino e feminino)
da pessoa entrevistada e o voto (não pode ser diferente dos que se encontram na tabela). O número
de pessoas entrevistadas não poderá ser inferior a 50 e não poderá ultrapassar 300, o algoritmo
poderá ser finalizado a qualquer momento desde que se obedeça ao critério anterior.
            JOGADORAS
    1 - Sam Kerr - Austrália
    2 - Alex Morgan - Estados Unidos
    3 - Dzsenifer Marozsan - Alemanha
    4 - Amandine Henry - França
    5 - Marta Vieira - Brazil

Após receber todos os dados dos entrevistados, deverá ser gerado os seguintes relatórios:
	✓ Exibir a quantidade de votos que cada jogadora recebeu.
	✓ Exibir a jogadora mais votada (caso aconteça empate entre mais de uma jogadora, deverá
        mostrar todas as que empataram).
	✓ Exibir o nome, idade e sexo de todas as pessoas que participaram da pesquisa, separando
        por sexo, maior de idade e menor de idade.
	✓ Exibir o nome das pessoas maior de idade que votaram na Marta Vieira.
	✓ Exibir a quantidade de mulheres que participaram da pesquisa.
*/


#include <stdio.h>
#include <string.h>

int main(void){
    char nome;
    int idade, voto;
    char sexo, valSexo[10];
    int cont_M = 0, cont_F = 0;
    int sam = 0, alex = 0, dzsenifer = 0, amandine = 0, marta = 0;
    int entrevistados = 0;
    int parametro = 0; //pessoas maior de idade que votaram na Marta Vieira
    char nome_parametro[30];
    int continua;

    do {
        // NOME
        printf("Nome --> ");
        fgets(nome, 40, stdin);
        __fpurge(stdin);
        
        // IDADE
        do {
            printf("Idade --> ");
            scanf("%d", &idade);
            
            if (idade < 12) {
                printf ("Valor INVALIDO\n");
            }

        } while (idade < 12);

        // SEXO
        do {
            printf("Sexo (M -Masculino | F- Feminino) --> ");
            scanf("%c", &sexo);
            
            switch (sexo){
            
            case 'M':
                strcpy (valSexo, "Masculino");
                cont_M++;
                break;
            case 'm':
                strcpy (valSexo, "Masculino");
                cont_M++;
                break;
            
            case 'F':
                strcpy (valSexo, "Feminino");
                cont_F++;
                break;
            case 'f':
                strcpy (valSexo, "Feminino");
                cont_F++;
                break;
            
            default:
                printf("Valor INVALIDO\n");
                break;
            }
            __fpurge(stdin);
        } while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');

        // VOTO
        do {
            printf("\n------------ JOGADORA ------------\n");
            printf(" 1- Sam Kerr (Austrália) \n");
            printf(" 2- Alex Morgan (Estados Unidos) \n");
            printf(" 3- Dzsenifer Marozsan (Alemanha) \n");
            printf(" 4- Amandine Henry (França) \n");
            printf(" 5- Marta Vieira (Brazil) \n");
            printf("----------------------------------\n");
            printf("Voto --> ");
            scanf("%d", &voto);
            
            switch (voto){
            
            case 1:
                sam++;
                break;
        
            case 2:
                alex++;
                break;
            
            case 3:
                dzsenifer++;
                break;
            
            case 4:
                amandine++;
                break;
            
            case 5:
                marta++;
                break;
        
            default:
                printf("Valor INVALIDO\n");
                break;
            }
        } while (voto != 1 && voto != 2 && voto != 3 && voto != 4 && voto != 5);
                
        
        if ((voto == 5) && (idade >= 18)){
            parametro++;
            

        }
        
        
        entrevistados++;

        // Continuar ou encerrar a pesquisa     
        if (entrevistados >= 5 && entrevistados <= 30){
            printf("\n\nContinuar com a pesquisa (Aperte 1 para encerrar)? ");
            scanf("%d", &continua);
            printf("\n");
            __fpurge(stdin);
        } else if (entrevistados > 30){
            continua = 1;
        } else if (entrevistados < 5){
            continua != 1;
        }

    } while (continua != 1);

    if (continua == 1) {
            printf("\n----- FIM DA PESQUISA -----\n");
        }
    
    printf("******* RESULTADO *******\n");
    printf(" Sam Kerr --> %d\n", sam);
    printf(" Alex Morgan --> %d \n", alex);
    printf(" Dzsenifer Marozsan --> %d \n", dzsenifer);
    printf(" Amandine Henry --> %d \n", amandine);
    printf(" Marta Vieira --> %d \n", marta);
    printf("*************************\n");

    if ((sam > alex) && (sam > dzsenifer)  && (sam > amandine)  && (sam > marta)){ //Sam mais votada
        printf("A jogadora mais votada foi a SAM KERR");
    
    } else if ((alex > sam) && (alex > dzsenifer)  && (alex > amandine)  && (alex > marta)){ //Alex mais votada
        printf("A jogadora mais votada foi a ALEX MORGAN");
    
    } else if ((amandine > sam) && (amandine > alex)  && (amandine > dzsenifer)  && (amandine > marta)){ //Dzsenifer mais votada
        printf("A jogadora mais votada foi a DZSEIFER MAROZSAN");
    
    } else if ((dzsenifer > sam) && (dzsenifer > alex)  && (dzsenifer > amandine)  && (dzsenifer > marta)){ //Amandine mais votada
        printf("A jogadora mais votada foi a AMANDINE HENRY");
    
    } else if ((marta > sam) && (marta > alex) && (marta > dzsenifer)  && (marta > amandine)){ //Marta mais votada
        printf("A jogadora mais votada foi a MARTA VIEIRA");
    
    } else {
        printf("Houve um empate, as jogadoras mais votada foram:\n");
        // FALTA - Exibir a jogadora mais votada (caso aconteça empate entre mais de uma jogadora, deverá mostrar todas as que empataram)
    }
	

	✓ Exibir o nome, idade e sexo de todas as pessoas que participaram da pesquisa, separando
        por sexo, maior de idade e menor de idade.
	✓ Exibir o nome das pessoas maior de idade que votaram na Marta Vieira.
	
    
    //Exibir a quantidade de mulheres que participaram da pesquisa.
    printf("%d mulheres participaram da pesquisa.", cont_F);









    // Impressão das respostas do habitante nº 'entrevistados' (inicia em 1)
        printf("\n-------------------------------------");
        printf("\n----- Habitante Nº %d ---------------", entrevistados);
        printf("\n-------------------------------------");
        printf("\n--- Sexo: %s", valSexo);
        printf("\n--- voto: %s", valvoto);
        printf("\n--- Cabelo: %s", valCab);
        printf("\n--- Idade: %d anos", idade);
        printf("\n--- Salario: R$ %.2f\n", salario);
        printf("-------------------------------------");

    
    
    
    
    // PORCENTAGEM
    porcParametro = (parametro * 100) / (entrevistados - 1); //como a varivel 'entrevistados' iniciou valendo 1, a divisao deve ter o -1
    
    printf("\n---------------------------------------------------------------------------");
    printf("\n Porcetagem de Mulheres, entre 18 e 35 anos, com cabelos e voto castanhos");
    printf("\n      %.2f %%", porcParametro);
    printf("\n---------------------------------------------------------------------------");
    
    return 0;
}