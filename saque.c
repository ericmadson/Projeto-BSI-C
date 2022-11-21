#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "saque.h"
#include "saldo.h"
#include "menu_conta.h"

int menu_saque(void) {
    char opcao;

    do {
        opcao = tela_saque();
        switch(opcao) {
            case '1':  
                tela_saldo();
                break;

            case '2':   
                tela_FazerSaque();
                break;
            
            case '3':   
                //mudar_senha();
                break;
        } 	
    
    } while (opcao != '0');

    return 0;
}

char tela_saque (void) { 
    char op;                                                              
    system("clear||cls");                                                                       
    printf("\n");                                                                                       
    printf(".=============================================================================.\n");
    printf("|                                                                             |\n");
    printf("|            ===================================================              |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = = = =              |\n");
    printf("|         = = = = = Sistema de Controle de Contas Bancarias = = = = =         |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = = = =              |\n");
    printf("|            ===================================================              |\n");
    printf("|        Developed by @igwbriel and @ericmadsonn -- since august, 2022        |\n");
    printf("|                                                                             |\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|            = = = = = = = =   Menu Saque    = = = = = = = =                  |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|                                                                             |\n");
    printf("|            1. Ver saldo da conta                                            |\n");
    printf("|            2. Sacar                                                         |\n");
    printf("|            0. Voltar ao menu anterior                                       |\n");
    printf("|                                                                             |\n");
    printf("|            Escolha a opcao desejada:                                        |\n");
    scanf("%c", &op);
    getchar();
    printf("|                                                                             |\n");
    printf("|                                                                             |\n");
    printf(".=============================================================================.\n");
    printf("\n");
    return op;
}

void tela_FazerSaque(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|               = = = = = = = = = = = = = = = = = = = = = = = =               |\n");
    printf("|               = = = = = = = =  Menu Saque = = = = = = = = = =               |\n");
    printf("|               = = = = = = = = = = = = = = = = = = = = = = = =               |\n");
    printf("|                                                                             |\n");
    printf("|                      digite o valor que deseja sacar:                       |\n");
    scanf("%s", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|              = = = = = saque realizado com sucesso ! = = = = =              |\n");
    printf("|                                                                             |\n");
    printf("|                  [Obrigado por confiar em nossos servicos]\n                |\n");
    printf("|                                                                             |\n");
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}

/*

    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|               = = = = = Falha ao realizar o saque ! = = = = =               |\n");
    printf("|                                                                             |\n");
    printf("|              [verifique os dados inseridos e tente novamente]\n             |\n");
    printf("|                                                                             |\n");
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
*/