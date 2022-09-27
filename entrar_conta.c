#include <stdio.h>
#include <stdlib.h>

void entrar_conta(void);
void entrar_CPF(void);
void entrar_senha(void);
void entrar_load(void);
void tela_principal(void);

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