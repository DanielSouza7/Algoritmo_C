/* Atividade 7 - ESTRUTURAS DE REPETIÇÃO ----- Aluno: DANIEL SOUZA - UC23100767

Exercício 7 --> Uma pesquisa sobre algumas características físicas da população de uma
determinada região coletou os seguintes dados, referentes a cada habitante:
	a) sexo (m e f);
	b) cor dos olhos (a (azuis), v (verdes), c (castanhos), p (pretos));
	c) cor dos cabelos (l (loiros), c (castanhos), p (pretos), r (ruivos));
	d) idade em anos.
	e) valor do salário.
	
Para o cadastro, todos os campos deve ser validados, ou seja, para sexo, serão aceitos somente
as opções ‘m’ e ‘f’; para cor de olhos, apenas as opções ‘a’, ‘v’, ‘c’ e ‘p’; para cor dos cabelos,
apenas as opções ‘l’, ‘c’, ‘p’ e ‘r’; para idade, apenas valores entre 10 e 100 anos, inclusive
estes e para o salário, não aceitar valores negativos.

Para indicar fim dos habitantes pesquisados, o usuário fornecerá um habitante fictício com idade igual a –1.

Ao final, o algoritmo deve determinar a porcentagem de indivíduos do sexo feminino, com idade
entre 18 e 35 anos e que tenham olhos castanhos e cabelos castanhos.
*/

#include <stdio.h>
#include <string.h>

int main (void) {
    char sexo, valSexo[10];
    char olhos, valOlhos[10];
    char cabelo, valCab[10];
    int idade;
    float salario;
    int contador = 1;
    int parametro = 0; // Feminino + Idade entre 18 e 35 + Olhos Castanhos (3) + Cabelo Castanho (2)
    int continua;
    float porcParametro;

    do {
        // SEXO
        do {
            printf("Sexo (M -Masculino | F- Feminino) --> ");
            scanf("%c", &sexo);
            
            switch (sexo){
            // Masculino para as entradas 'M' e 'm'
            case 'M':
                strcpy (valSexo, "Masculino");
                break;
            case 'm':
                strcpy (valSexo, "Masculino");
                break;
            
            // Masculino para as entradas 'F' e 'f'
            case 'F':
                strcpy (valSexo, "Feminino");
                break;
            case 'f':
                strcpy (valSexo, "Feminino");
                break;
            
            // Entrada diferente das permitidas
            default:
                printf("Valor INVALIDO\n");
                __fpurge(stdin); // zerar a entrada do teclado
                break;
            }
        } while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');

        // OLHOS
        do {
            __fpurge(stdin);
            printf("Olhos (A- Azuis | V- Verdes | C- Castanhos | P- Pretos) --> ");
            scanf("%c", &olhos);
            
            switch (olhos){
            // Azuis para as entradas 'A' e 'a'
            case 'A':
                strcpy (valOlhos, "Azuis");
                break;
            case 'a':
                strcpy (valOlhos, "Azuis");
                break;

            // Verdes para as entradas 'V' e 'v'
            case 'V':
                strcpy (valOlhos, "Verdes");
                break;
            case 'v':
                strcpy (valOlhos, "Verdes");
                break;

            // Castanhos para as entradas 'C' e 'c'
            case 'C':
                strcpy (valOlhos, "Castanhos");
                break;
            case 'c':
                strcpy (valOlhos, "Castanhos");
                break;
            
            // Pretos para as entradas 'P' e 'p'
            case 'P':
                strcpy (valOlhos, "Pretos");
                break;
            case 'p':
                strcpy (valOlhos, "Pretos");
                break;
        
            // Entrada diferente das permitidas
            default:
                printf("Valor INVALIDO\n");
                __fpurge(stdin); // zerar a entrada do teclado
                break;
            }
        } while (olhos != 'A' && olhos != 'a' && olhos != 'V' && olhos != 'v' && olhos != 'C' && olhos != 'c' && olhos != 'P'&& olhos != 'p');
        
        // CABELO
        do {
            __fpurge(stdin);
            printf("Cabelo (L- Loiro | C- Castanho | P- Preto | R- Ruivo) --> ");
            scanf("%c", &cabelo);
            
            switch (cabelo){
            // Loiro para as entradas 'L' e 'l'
            case 'L':
                strcpy (valCab, "Loiro");
                break;
            case 'l':
                strcpy (valCab, "Loiro");
                break;

            // Castanho para as entradas 'C' e 'c'
            case 'C':
                strcpy (valCab, "Castanho");
                break;
            case 'c':
                strcpy (valCab, "Castanho");
                break;

            // Preto para as entradas 'P' e 'p'
            case 'P':
                strcpy (valCab, "Preto");
                break;
            case 'p':
                strcpy (valCab, "Preto");
                break;
            
            // Ruivo para as entradas 'R' e 'r'
            case 'R':
                strcpy (valCab, "Ruivo");
                break;
            case 'r':
                strcpy (valCab, "Ruivo");
                break;
        
            default:
                printf("Valor INVALIDO\n");
                __fpurge(stdin); // zerar a entrada do teclado
                break;
            }
        } while (cabelo != 'L' && cabelo != 'l' && cabelo != 'C' && cabelo != 'c' && cabelo != 'P' && cabelo != 'p' && cabelo != 'R'&& cabelo != 'r');

        // IDADE
        do {
            printf("Idade --> ");
            scanf("%d", &idade);
            
            if (idade < 10 || idade > 100) {
                printf ("Valor INVALIDO\n");
            }

        } while (idade < 10 || idade >100);

        // SALARIO
        do {
            printf("Salario --> ");
            scanf("%f", &salario);
        
            if (salario < 0){
                printf ("Valor INVALIDO\n");
            }
        } while (salario < 0);

        // Impressão das respostas do habitante nº 'contador' (inicia em 1)
        printf("\n-------------------------------------");
        printf("\n----- Habitante Nº %d ---------------", contador);
        printf("\n-------------------------------------");
        printf("\n--- Sexo: %s", valSexo);
        printf("\n--- Olhos: %s", valOlhos);
        printf("\n--- Cabelo: %s", valCab);
        printf("\n--- Idade: %d anos", idade);
        printf("\n--- Salario: R$ %.2f\n", salario);
        printf("-------------------------------------");

        // Incrementando o numero do habitante
        contador++;

        // Parametro exigido: Mulheres com idade entre 18 e 35 anos com cabelo e olhos castanhos
        // (sexo 'F' OU 'f') E (olhos 'C' OU 'c') E (cabelo 'C' OU 'c') E (idade >= 18 E idade <= 35)
        if ((sexo == 'F' || sexo == 'f') && (olhos == 'C'  || olhos == 'c') && (cabelo == 'C' || cabelo == 'c') && idade >= 18 && idade <= 35){
            parametro++;
        }
        
        // Continuar ou encerrar a pesquisa     
        printf("\n\nContinuar com a pesquisa (Aperte 1 para encerrar)? ");
        scanf("%d", &continua);
        printf("\n");
        __fpurge(stdin);


    } while (continua != 1);

    if (continua == 1) {
            printf("\n----- FIM DA PESQUISA -----\n");
        }
    
    // PORCENTAGEM
    porcParametro = (parametro * 100) / (contador - 1); //como a varivel 'contador' iniciou valendo 1, a divisao deve ter o -1
    
    printf("\n---------------------------------------------------------------------------");
    printf("\n Porcetagem de Mulheres, entre 18 e 35 anos, com cabelos e olhos castanhos");
    printf("\n      %.2f %%", porcParametro);
    printf("\n---------------------------------------------------------------------------");
    
    return 0;
}