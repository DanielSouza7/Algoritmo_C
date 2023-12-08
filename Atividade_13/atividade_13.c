/* ATIVIDADE 13 - STRUCT - DANIEL SOUZA UC23100767

Implemente um algoritmo que:
    Inclua até 1000 usuários;
    Edite um usuário;
    
    Exclua um usuário;
    Busque um usuário pelo e-mail;
    
    Imprima todos os usuários cadastrados;

Obrigatório uso de struct, vetor e função. 

Obrigatório uso de switch case com char para escolha da opção desejada.

ATENÇÃO: (1) NA CRIAÇÃO DE NOMES DE IDENTIFICADORES; (2) NOS TEXTOS DE INTERAÇÃO COM USUÁRIOS – ENTRADA E SAÍDA; (3) NA ORGANIZAÇÃO DO CÓDIGO.

Dados do usuário:
    Id (int) => preenchido automaticamente por números randômicos e não podem ser repetir.
    Nome completo (string)
    Email (string) => validação do campo: verificar se o caractere "@" aparece
    Sexo (string) => validação do campo: aceitar somente as palavras Feminino, Masculino e Indiferente.
    Endereço (string)
    Altura (double) => validação do campo: aceitar valores entre 1 e 2 m.
    Vacina (int) => validação de 1 para sim e 0 para não 
*/

#include<stdio.h>
#include <string.h>
#include <stdlib.h>

#define QuantUsuarios 1000

typedef struct{
    int status; //1-ATIVO  0-INATIVO
    int id;
    char nome[20];
    char email[50]; // Verificar se @ aparece
    char sexo[20]; //Masculino, Feminino, Indiferente
    char endereco[50];
    double altura; //Entre 1 e 2 metros
    int vacina; //1-SIM  0-NAO
}Usuario;

// Cadastrar novo usuário
void cadastrar(Usuario a[], int indice){
    a[indice].status = 1;
    
    a[indice].id = rand() % 1001;
    fflush(stdin);
    
    printf("\nNome --> ");
    fflush(stdin);
    fgets(a[indice].nome, sizeof(a[indice].nome), stdin);
    fflush(stdin);
    
    do {
        printf("Email --> ");
        fflush(stdin);
        fgets(a[indice].email, sizeof(a[indice].email), stdin);
        fflush(stdin);
        a[indice].email[strcspn(a[indice].email, "\n")] = '\0';
    } while (strchr(a[indice].email, '@') == NULL);
    
    do{
        printf("Sexo (Masculino, Feminino, Indiferente) --> ");
        fflush(stdin);
        fgets(a[indice].sexo, sizeof(a[indice].sexo), stdin);
        a[indice].sexo[strcspn(a[indice].sexo, "\n")] = '\0';
        fflush(stdin);
    } while ((strcmp(a[indice].sexo, "Masculino") != 0) && (strcmp(a[indice].sexo, "masculino") != 0) && (strcmp(a[indice].sexo, "Feminino") != 0) && (strcmp(a[indice].sexo, "feminino") != 0) && (strcmp(a[indice].sexo, "Indiferente") != 0) && (strcmp(a[indice].sexo, "indiferente") != 0));

    printf("Endereco --> ");
    fflush(stdin);
    fgets(a[indice].endereco, sizeof(a[indice].endereco), stdin);
    fflush(stdin);

    do {
        printf("Altura (entre 1 e 2 metros) --> ");
        fflush(stdin);
        scanf("%lf", &a[indice].altura);
        fflush(stdin);
    } while ( (a[indice].altura < 1) || (a[indice].altura > 2) );

    do {
        printf("Vacina (1-SIM  0-NAO) --> ");
        scanf("%d", &a[indice].vacina);
        printf("\n\n");
    } while ( (a[indice].vacina != 1) && (a[indice].vacina != 0) );
}

// Imprimir todos usuários cadastrados
void imprimir(Usuario a[], int totalCadastro){
    if(totalCadastro == 0 ){
        printf("\n    !!! LISTA VAZIA !!!\n");
        return;
    
    }else{
        for(int i = 0; i < totalCadastro; i++ ){
            printf("       ID: %d\n", a[i].id);
            printf("     Nome: %s", a[i].nome);
            printf("    Email: %s\n", a[i].email);
            printf("     Sexo: %s\n", a[i].sexo);
            printf(" Endereco: %s", a[i].endereco);
            printf("   Altura: %lf\n", a[i].altura);
            printf("   Vacina: %d", a[i].vacina);

            a[i].status == 1 ? printf("\n   Status: ATIVO\n"): printf("\nStatus: INATIVO\n");
        }
    }
}

// Buscar usuário pelo id
void buscarRegistro(Usuario a[], int totalCadastro, int buscarId){
    if(totalCadastro == 0){
        printf("\n    !!! LISTA VAZIA !!!\n");
        return;
    
    }else{
        for(int i = 0; i < totalCadastro; i++){
            if(a[i].id == buscarId){
                printf("       ID: %d\n", a[i].id);
                printf("     Nome: %s", a[i].nome);
                printf("    Email: %s\n", a[i].email);
                printf("     Sexo: %s\n", a[i].sexo);
                printf(" Endereco: %s", a[i].endereco);
                printf("   Altura: %lf\n", a[i].altura);
                printf("   Vacina: %d\n", a[i].vacina);

                return;
            }
        }
    }
    printf("     !!! USUARIO NAO ENCONTRADO !!!");
}

// Editar usuário pelo id
void alterarRegistro(Usuario a[], int totalCadastro, int buscarId){
    int opcaoEscolhida;
    
    if(totalCadastro == 0 ){
        printf("\n    !!! LISTA VAZIA !!!\n");
        return;
    
    }else{
        for(int i = 0 ; i < totalCadastro; i++){
            if(a[i].id == buscarId){
                printf("       ID: %d\n", a[i].id);
                printf("     Nome: %s", a[i].nome);
                printf("    Email: %s\n", a[i].email);
                printf("     Sexo: %s\n", a[i].sexo);
                printf(" Endereco: %s", a[i].endereco);
                printf("   Altura: %lf\n", a[i].altura);
                printf("   Vacina: %d\n", a[i].vacina);
                printf("   Status: %d\n", a[i].status);

                a[i].status == 1 ? printf("\nStatus : Ativo"): printf("\nStatus : Inativo");

                printf("\n\nEDITAR OS DADOS\n");
                printf("1- Alterar nome\n");
                printf("2- Alterar email\n");
                printf("3- Alterar sexo\n");
                printf("4- Alterar endereco\n");
                printf("5- Alterar altura\n");
                printf("6- Alterar vacina\n");
                printf("7- Alterar status (1-ativo)\n");
                printf("8- Alterar todos os campos\n");
                printf("\n Opcao --> ");
                scanf("%d", &opcaoEscolhida);
                
                switch (opcaoEscolhida){
                case 1: 
                    printf("Novo nome --> ");
                    fflush(stdin);
                    fgets(a[i].nome, sizeof(a[i].nome), stdin);
                    fflush(stdin);
                break;
                    
                case 2: 
                    do {
                        printf("Email --> ");
                        fflush(stdin);
                        fgets(a[i].email, sizeof(a[i].email), stdin);
                        fflush(stdin);
                        a[i].email[strcspn(a[i].email, "\n")] = '\0';
                    } while (strchr(a[i].email, '@') == NULL);
                break;

                case 3: 
                    do{
                        printf("Sexo (Masculino, Feminino, Indiferente) --> ");
                        fflush(stdin);
                        fgets(a[i].sexo, sizeof(a[i].sexo), stdin);
                        a[i].sexo[strcspn(a[i].sexo, "\n")] = '\0';
                        fflush(stdin);
                    } while ((strcmp(a[i].sexo, "Masculino") != 0) && (strcmp(a[i].sexo, "masculino") != 0) && (strcmp(a[i].sexo, "Feminino") != 0) && (strcmp(a[i].sexo, "feminino") != 0) && (strcmp(a[i].sexo, "Indiferente") != 0) && (strcmp(a[i].sexo, "indiferente") != 0));
                break;

                case 4: 
                    printf("Novo endereco --> ");
                    fflush(stdin);
                    fgets(a[i].endereco, sizeof(a[i].endereco), stdin);
                    fflush(stdin);
                break;
                
                case 5: 
                    printf("Nova altura (entre 1 e 2 metros)--> ");
                    fflush(stdin);
                    scanf("%lf", &a[i].altura);
                    fflush(stdin);
                break;

                case 6: 
                    printf("Nova vacina (1-SIM  0-NAO) --> ");
                    scanf("%d", &a[i].vacina);
                break;
                
                case 7: 
                    printf("Novo status (1- Ativo  0- Inativo) --> ");
                    scanf("%d", &a[i].status);
                break;
                
                case 8:
                    printf("Novo nome --> ");
                    fflush(stdin);
                    fgets(a[i].nome, sizeof(a[i].nome), stdin);
                    fflush(stdin);

                    printf("Novo email --> ");
                    fflush(stdin);
                    fgets(a[i].email, sizeof(a[i].email), stdin);
                    fflush(stdin);
                    
                    printf("Novo sexo --> ");
                    fflush(stdin);
                    fgets(a[i].sexo, sizeof(a[i].sexo), stdin);
                    fflush(stdin);
                    
                    printf("Novo endereco --> ");
                    fflush(stdin);
                    fgets(a[i].endereco, sizeof(a[i].endereco), stdin);
                    fflush(stdin);
                    
                    printf("Nova altura --> ");
                    scanf("%lf", &a[i].altura);
                    
                    printf("Nova vacina (1-SIM  0-NAO) --> ");
                    scanf("%d", &a[i].vacina);

                    printf("Novo status (1- Ativo  0- Inativo) --> ");
                    scanf("%d", &a[i].status);
                }
            }
        }
    }
}

// Excluir usuário pelo id
int excluirRegistro(Usuario a[], int totalCadastro, int buscarId){
    int achou;
    
    for (int i = 0; i < totalCadastro; i++) {
            if (a[i].id == buscarId) {
                for (int j = i; j < totalCadastro - 1; j++ ) {
                    a[j] = a[j + 1];
                }
                achou = 1;
                
                printf("\n    USUARIO EXCLUIDO COM SUCESSO\n");
                
                return achou;
            }
        }
        achou  = 0;
        
        return achou;
}

// Buscar usuário pelo email
void buscarRegistroEmail(Usuario a[], int totalCadastro, char buscarEmail[]) {
    if(totalCadastro == 0){
        printf("\n    !!! LISTA VAZIA !!!\n");
        return;
    
    }else{
        for(int i = 0; i < totalCadastro; i++){
            if(strcmp(a[i].email, buscarEmail) == 0) {
                printf("       ID: %d\n", a[i].id);
                printf("     Nome: %s\n", a[i].nome);
                printf("    Email: %s\n", a[i].email);
                printf("     Sexo: %s\n", a[i].sexo);
                printf(" Endereco: %s\n", a[i].endereco);
                printf("   Altura: %lf\n", a[i].altura);
                printf("   Vacina: %d\n\n", a[i].vacina);

                return;
            }
        }
    }
    printf("     !!! USUARIO NAO ENCONTRADO !!!");
}


//MAIN
int main() {
    Usuario a[QuantUsuarios];
    int opcao, totalCadastro = 0, buscarId;
    char buscarEmail[50];

    do{
        printf("\n---------------------------------\n");
        printf("| 1- CADASTRAR                  |\n");
        printf("| 2- IMPRIMIR OS CADASTROS      |\n");
        printf("| 3- BUSCAR UM CADASTRO (id)    |\n");
        printf("| 4- ALTERAR UM CADASTRO        |\n");
        printf("| 5- EXCLUIR UM CADASTRO        |\n");
        printf("| 6- BUSCAR UM CADASTRO (email) |\n");
        printf("| 0- SAIR                       |\n");
        printf("---------------------------------\n");
        printf("       Opcao --> ");
        scanf("%d", &opcao);
        printf("\n");
        
        switch (opcao){
            case 1:
                if(totalCadastro < QuantUsuarios){
                    cadastrar(a, totalCadastro);
                    totalCadastro++;
                }else{
                    printf("\n\nLimite maximo de cadastro atingido");
                }
            break;
            
            case 2:
                imprimir(a, totalCadastro);
            break;
            
            case 3:
                printf("Digite o id para buscar --> ");
                scanf("%d", &buscarId);
                buscarRegistro(a, totalCadastro, buscarId);
            break;
            
            case 4:
                printf("Digite o id para alterar --> ");
                scanf("%d", &buscarId);
                alterarRegistro(a, totalCadastro, buscarId);
            break;
            
            case 5:
                printf("Digite o id para excluir --> ");
                scanf("%d", &buscarId);
                if(totalCadastro == 0){
                    printf("Lista vazia");
                }else{
                    int res = excluirRegistro(a, totalCadastro, buscarId);
                    if(res == 1){
                        totalCadastro--;
                    }else{
                        printf("Não foi possivel excluir - Usuario nao encontrado");
                    }
                }
 
            break;

            case 6:
                printf("Email --> ");
                fflush(stdin);
                fgets(buscarEmail, 50, stdin);
                fflush(stdin);
                buscarRegistroEmail(a, totalCadastro, buscarEmail);


            break;
        }
    
    }while(opcao != 0);

    return 0;
}
