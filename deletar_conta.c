#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "deletar_conta.h"

void deletar_conta(void) {
    char cpf[30];
    char senha[6];
    
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|              = = = = = buscando conta a ser deletada = = = = =              |\n");
    printf("|                                                                             |\n");
    printf("|                   Digite o CPF da conta a ser deletada:\n                   |\n");
    scanf("%s", cpf);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|              = = = = = buscando conta a ser deletada = = = = =              |\n");
    printf("|                                                                             |\n");
    printf("|                  Digite a senha da conta a ser deletada:\n                  |\n");
    scanf("%s", senha);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
    system("clear||cls");    
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|              = = = = = Conta deletada com sucesso ! = = = = =               |\n");
    printf("|                                                                             |\n");
    printf("|                 [Obrigado por confiar em nossos serviços]\n                 |\n");
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
}
void tela_nao(void) {
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|           = = = = = Não foi possivel deletar a conta ! = = = = =            |\n");
    printf("|                                                                             |\n");
    printf("|                 [CPF ou senha invalidos, tente novamente]\n                 |\n");
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
}
