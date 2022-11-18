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
    printf("|                              Digite seu CPF:  ");
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
    printf("\n"); 
    system("cls");   
    printf("\n\n\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Entrando na conta = = = = =                    |\n");
    printf("|                           ______________________                            |\n");
    printf("|                    ->     |//////              |     <-                     |\n");
    printf("|                                                                             |\n");
    printf("|=============================================================================|\n");
    sleep(2);
    system("cls");
    printf("\n\n\n");   
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Entrando na conta = = = = =                    |\n");
    printf("|                           ______________________                            |\n");
    printf("|                    ->     |//////////////      |     <-                     |\n");
    printf("|                                                                             |\n");   
    printf("|=============================================================================|\n");    
    sleep(2);
    system("cls");
    printf("\n\n\n");       
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Entrando na conta = = = = =                    |\n");
    printf("|                           ______________________                            |\n");    
    printf("|                    ->     |////////////////////|     <-                     |\n");
    printf("|                                                                             |\n");    
    printf("|=============================================================================|\n");
    sleep(2);
    printf("\n");
    printf(".              ===================== Enter =====================.\n");
    printf("\n");
    getchar();
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
