#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "criar_conta.h"

void tela_cadastro(void) {
        char nome[100];
        char cpf[35];
        char rg[30];

        system("clear||cls");   
        printf("\n");
        printf("|=============================================================================|\n");
        printf("|                                                                             |\n");
        printf("|                    = = = = = Criação de conta = = = = =                     |\n");
        printf("|                                                                             |\n");
        printf("|                          Digite seu nome completo:\n                        |\n");
        scanf("%s", nome);
        getchar();
        printf(".=============================================================================.\n");
        printf("\n"); 
        system("clear||cls");   
        printf("\n");
        printf("|=============================================================================|\n");
        printf("|                                                                             |\n");
        printf("|                    = = = = = Criação de conta = = = = =                     |\n");
        printf("|                                                                             |\n");
        printf("|                          Digite seu CPF:\n                                  |\n");
        scanf("%s", cpf);
        getchar();
        printf(".=============================================================================.\n");
        system("clear||cls");   
        printf("\n");
        printf("|=============================================================================|\n");
        printf("|                                                                             |\n");
        printf("|                    = = = = = Criação de conta = = = = =                     |\n");
        printf("|                                                                             |\n");
        printf("|                              Digite seu RG:\n                               |\n");
        scanf("%s", rg);
        getchar();
        printf(".=============================================================================.\n");
        printf("\n"); 
        system("clear||cls");   
        printf("\n");
        printf("|=============================================================================|\n");
        printf("|                                                                             |\n");
        printf("|               = = = = = Conta criada com sucesso ! = = = = =                |\n");
        printf("|                                                                             |\n");
        printf("|                  [Obrigado por confiar em nossos serviços]\n                |\n");
        printf("|                                                                             |\n");
        getchar();
        printf(".=============================================================================.\n");
        printf("\n"); 

}

//modulo 1 tela final (se não funcionar)
void tela_contaNao(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|               = = = = = falha na criacao da conta ! = = = = =               |\n");
    printf("|                                                                             |\n");
    printf("|                [CPF, RG ou nome invalidos, tente novamente]\n               |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
} 
