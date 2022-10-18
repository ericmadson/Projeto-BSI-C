#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include "validacao_senha.h"
#include "criar_conta.h"

void tela_cadastro(void) {
        char nome[100];
        char cpf[35];
        char password[30];
        int lenght;

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
        printf("|                          Digite sua senha: (apenas números)\n               |\n");
        scanf("%s", password);
        validacao_senha(password);
}

//modulo 1 tela final (se não funcionar)

