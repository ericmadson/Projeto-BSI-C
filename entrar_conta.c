#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "entrar_conta.h"
#include "criar_conta.h"
#include "menu_conta.h"
#include "animation.h"


int entrar_conta(void) {
    FILE* fp;
    char cpf[12];
    char senha[7];
    char out;
    int validarDados;

  fp = fopen("contas.dat", "r+b");
  if (fp == NULL) {
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                   = = = = = Entrada revogada = = = = =                      |\n");
    printf("|                                                                             |\n");
    printf("|                                                                             |\n");
    printf("|                   Ocorreu um erro na abertura do arquivo !                  |\n");
    printf("|                                                                             |\n");
    printf(".=============================================================================.\n");
    scanf("%c", &out);
    return 0;
  }
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Entrando na conta = = = = =                    |\n");
    printf("|                                                                             |\n");
    printf("|                              Digite seu CPF: ");
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
    printf("|                             Digite sua senha: ");
    scanf("%s", senha);
    printf(".=============================================================================.\n");
    getchar();
    validarDados = buscarConta(cpf, senha);
    if (!validarDados) {
        entrar_nao();
        return 0;
    }
    else {
    animacao();
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
    printf("|            = = = = = Nao foi possivel entrar na conta ! = = = = =           |\n");
    printf("|                                                                             |\n");
    printf("|                 [CPF ou senha invalidos, tente novamente]\n                 |\n");
    scanf("%c", &op);
    printf(".=============================================================================.\n");
    printf("\n");
} 