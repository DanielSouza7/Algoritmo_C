/*  LISTA AVALIATIVA 3 (3,0 PONTOS) - DANIEL SOUZA UC23100767

Implementar um sistema de controle de estoque com as funcionalidades de cadastrar produtos,
consultar produtos, gerar relatório de produtos e remover produtos do estoque. Funções que
deverão estar presentes no código:

    - Função que inicializa uma lista vazia; (0,5 ponto)
    - Função que adiciona um novo produto à lista de estoque. Ela solicita ao usuário informações
        como código, descrição, quantidade e valor do produto. (0,5 ponto)
    - Função que percorre a lista de estoque e imprime um relatório com as informações de cada
        produto, incluindo código, descrição, quantidade e valor. (0,5 ponto)
    - Função que permite ao usuário pesquisar um produto pelo código. (0,5 ponto)
    - Função que permite ao usuário remover um produto do estoque. Ela solicita o código do produto
        a ser removido e busca na lista o produto correspondente. Se encontrar o produto, o remove
        da lista. Caso contrário, exibe uma mensagem informando que o produto não está cadastrado.
        (1,0 ponto)

O sistema deverá exibir um menu com as opções disponíveis e realizar as chamadas correspondentes
às funções acima, de acordo com a escolha do usuário. O loop deverá continuar até que o usuário
escolha sair do programa.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct Produto{
    int codigo;
    char descricao[30];
    int quantidade;
    float valor;
    struct Produto*prox;
}Produto;


// FUNÇÕES
// Função que inicializa uma lista vazia (0,5 ponto)
Produto*criarListaVazia(){
    return NULL;
}


// Funções para adiciona novos produto à lista (0,5 ponto)
Produto*criarProduto(){
    Produto *novoProduto = (Produto*)malloc(sizeof(Produto));
    if (novoProduto == NULL){
        printf("    !!! ERRO (alocacao de memoria) !!!");
        exit(EXIT_FAILURE);
    }
    novoProduto->prox = NULL;
    return novoProduto;
}

Produto*cadastrar(Produto *lista){
    Produto *novoProduto = criarProduto();
    srand(time(NULL));
    novoProduto->codigo = rand() % 1000;
    printf("Digite a descricao do produto --> ");
    fflush(stdin);
    fgets(novoProduto->descricao, sizeof(novoProduto->descricao), stdin);
    fflush(stdin);
    printf("Digite a quantidade do produto --> ");
    scanf("%d", &novoProduto->quantidade);
    printf("Digite o valor do produto --> R$ ");
    scanf("%f", &novoProduto->valor);

    if (lista == NULL){
        return novoProduto;
    
    } else {
        Produto*atual = lista;
        
        while (atual->prox != NULL) {
            atual = atual->prox;
        }
        atual->prox = novoProduto;
        
        return lista;
    }
}


// Função que imprime um relatório com as informações de cada produto (0,5 ponto)
void imprimirLista(Produto *lista){
    Produto*atual = lista;
    
    if (atual == NULL){
        printf("\n   --- LISTA VAZIA ---\n");
        return;
    
    } else {
        
        while(atual != NULL){
            printf("       Codigo: %d\n", atual->codigo);
            printf("    Descricao: %s", atual->descricao);
            printf("   Quantidade: %d\n", atual->quantidade);
            printf("        Valor: %.2f\n", atual->valor);
            printf("-------------------------\n");

            atual = atual->prox;
        }
    }
}


// Função que pesquisa um produto pelo código (0,5 ponto)
Produto *pesquisar(Produto *lista, int codPesquisa){
    Produto *atual = lista;
    
    if (atual == NULL) {
        printf("\n   --- LISTA VAZIA ---\n");
        
        return NULL;

    } else {
        while (atual != NULL){
            if (atual->codigo == codPesquisa) {
                printf("\n---   CODIGO %d   ---\n", atual->codigo);
                printf("  Descricao: %s", atual->descricao);
                printf(" Quantidade: %d\n", atual->quantidade);
                printf("      Valor: %.2f\n", atual->valor);

                return atual;
            }

            atual = atual->prox;
        }

        printf("\n   !!! Produto NAO ENCONTRADO !!!\n");
        
        return NULL;
    }
}


// Função que altera um produto encontrado pelo código
void alterar(Produto* encontrado){
    printf("\n------------------------------\n");
    printf("   Nova descricao --> ");
    fflush(stdin);
    fgets(encontrado->descricao, sizeof(encontrado->descricao), stdin);
    fflush(stdin);
    printf("   Nova quantidade --> ");
    scanf("%d", &encontrado->quantidade);
    printf("   Novo valor --> ");
    scanf("%f", &encontrado->valor);
}


// Função que remove um produto do estoque
Produto* excluir(Produto *lista, int codPesquisa){
    Produto *atual = lista;
    Produto* anterior = NULL;

    while ( (atual != NULL) && (atual->codigo != codPesquisa) ) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual != NULL) {
        if (anterior != NULL) {
            anterior->prox = atual->prox;
        
        } else {
            lista = atual->prox;
        }

        free (atual);

        printf("\n   ### PRODUTO EXCLUIDO COM SUCESSO ###\n\n");
    
    } else {
        printf("\n   !!! Produto NAO ENCONTRADO !!!\n");
    }

    return lista;
}


// Função para esvaziar a lista
void liberarLista(Produto *lista){
    Produto *atual = lista;
    Produto *proximaProduto;

    while (atual != NULL) {
        proximaProduto = atual->prox;
        free(atual);
        atual = proximaProduto;
    }
}



// MAIN
int main(){
    Produto *lista = criarListaVazia();

    Produto *encontrado;

    int opcao, codPesquisa;

    do{
        printf("\n-----------------------------\n");
        printf("|          PRODUTO          |\n");
        printf("-----------------------------\n");
        printf("|  1 - CADASTRAR            |\n");
        printf("|  2 - MOSTRAR PRODUTOS     |\n");
        printf("|  3 - PESQUISAR UM PRODUTO |\n");
        printf("|  4 - ALTERAR UM PRODUTO   |\n");
        printf("|  5 - EXCLUIR UM PRODUTO   |\n");
        printf("|  0 - SAIR                 |\n");
        printf("-----------------------------\n");
        printf("       Opcao --> ");
        scanf("%d", &opcao);
        printf("----------------------------------------\n");

        switch (opcao) {
        case 1:
            lista = cadastrar(lista);
            break;
        
        case 2:
            imprimirLista(lista);
            break;

        case 3:
            printf("CODIGO para pesquisar --> ");
            scanf("%d", &codPesquisa);
            encontrado = pesquisar(lista, codPesquisa);
            break;
        
        case 4:
            printf("CODIGO do produto a ser alterado --> ");
            scanf("%d", &codPesquisa);
            encontrado = pesquisar(lista, codPesquisa);
            
            if (encontrado != NULL) {
                alterar(encontrado);
            }
            break;

        case 5:
            printf("CODIGO do produto a ser EXCLUIDO --> ");
            scanf("%d", &codPesquisa);
            lista = excluir(lista, codPesquisa);
            break;
    
        default:
            break;
        }
    
    } while (opcao != 0);

    liberarLista(lista);

    return 0;
}