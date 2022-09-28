#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <mudar_senha.h>

void mudar_senha(void) {
    mudar_CPF();
    mudar_senha();
    mudar_sim();
    return 0;
}

void mudar_CPF(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Alterando a senha = = = = =                    |\n");
    printf("|                                                                             |\n");
    printf("|                   Digite o CPF da conta a ser alterada:\n                   |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}
//modulo 3 tela 2
void mudar_senha(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Alterando a senha = = = = =                    |\n");
    printf("|                                                                             |\n");
    printf("|                  Digite a senha da conta a ser alterada:\n                  |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}

//modulo 3 tela final se funcionar 
void mudar_sim(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|           = = = = = sua senha foi alterada com sucesso ! = = = = =          |\n");
    printf("|                                                                             |\n");
    printf("|                 [Obrigado por confiar em nossos serviços]\n                 |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
}
//modulo 3 tela final se funcionar 
void mudar_nao(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|           = = = = = nao foi possivel alterar sua senha ! = = = = =          |\n");
    printf("|                                                                             |\n");
    printf("|                 [CPF ou senha invalidos, tente novamente]\n                 |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
} 
