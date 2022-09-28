#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <entrar_conta.h>

void entrar_conta(void) {
    entrar_CPF();
    entrar_senha();
    entrar_load();
    tela_principal();
   return 0;
}

void entrar_CPF(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Entrando na conta = = = = =                    |\n");
    printf("|                                                                             |\n");
    printf("|                              Digite seu CPF:\n                              |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}
// modulo 2 tela 2
void entrar_senha(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Entrando na conta = = = = =                    |\n");
    printf("|                                                                             |\n");
    printf("|                             Digite sua senha:\n                             |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}
//modulo 2 tela 3
void entrar_load(void) {
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                  = = = = = carregando sua conta = = = = =                   |\n");
    printf("|                                                                             |\n");
    printf("|                                 °\n                                         |\n");
    _sleep(1);
    printf("|                                       °\n                                   |\n");
    _sleep(2);
    printf("|                                 °\n                                         |\n");
    _sleep(3);
    printf("|                                [pronto]                                     |\n");
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}
//modulo 2 tela final se funcionar 
void entrar_nao(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|            = = = = = nao foi possivel entrar na conta ! = = = = =           |\n");
    printf("|                                                                             |\n");
    printf("|                 [CPF ou senha invalidos, tente novamente]\n                 |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
} 
