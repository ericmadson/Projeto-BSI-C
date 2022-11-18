#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "entrar_conta.h"
#include "criar_conta.h"
#include "menu_conta.h"

int entrar_conta(void) {
    char cpf[12];
    char senha[7];
    int validarDados;
    
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Entrando na conta = = = = =                    |\n");
    printf("|                                                                             |\n");
    printf("|                              Digite seu CPF:\n                              |\n");
    scanf("%s", cpf);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Entrando na conta = = = = =                    |\n");
    printf("|                                                                             |\n");
    printf("|                             Digite sua senha:\n                             |\n");
    scanf("%s", senha);
    getchar();
    printf(".=============================================================================.\n");
    validarDados = buscarConta(cpf, senha);
    if (!validarDados) {
        entrar_nao();
        return 0;
    }
    else {
    printf("\n"); 
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                  = = = = = carregando sua conta = = = = =                   |\n");
    printf("|                                                                             |\n");
    printf("|                                 °\n                                         |\n");
    sleep(1);
    printf("|                                       °\n                                   |\n");
    sleep(2);
    printf("|                                 °\n                                         |\n");
    sleep(3);
    printf("|                                [pronto]                                     |\n");
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
    menu_conta(); 
    }
    return 0;
}
//modulo 2 tela final se funcionar 
void entrar_nao(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|            = = = = = Não foi possivel entrar na conta ! = = = = =           |\n");
    printf("|                                                                             |\n");
    printf("|                 [CPF ou senha invalidos, tente novamente]\n                 |\n");
    scanf("%c", &op);
    printf(".=============================================================================.\n");
    printf("\n");
} 
