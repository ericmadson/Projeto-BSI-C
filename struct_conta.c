#include <stdint.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include "validacao_senha.h"
#include "criar_conta.h"

int str() {
   
struct cadastro_conta {
    char nome[100];
    int cpf[15];
    int password[6];
};

struct cadastro_conta conta;

    printf("crie uma senha de 6 digitos para sua conta: ");

    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Criação de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                          Digite seu nome completo:\n                        |\n");
    fgets(conta.nome, 100,stdin);
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
    scanf("%d", &conta.cpf, 15);
    getchar();
    printf(".=============================================================================.\n");
    system("clear||cls"); 
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Criação de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                          Digite sua senha: (apenas números)\n               |\n");
    scanf("%d", &conta.password, 6);
    validacao_senha(conta.password);

    printf("\n Nome: %s", conta.nome);
    printf("\n Nome: %d", conta.cpf);
    printf("\n Nome: %d", conta.password);

//por os "." e "-" no CPF

return 0;
}