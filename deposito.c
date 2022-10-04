#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "deposito.h"
#include "menu_conta.h"
#include "saldo.h"

void tela_saldo(void);

int menu_deposito(void) {
    char opcao;

    do {
        opcao = tela_deposito();
        switch(opcao) {
            case '1':  
                tela_saldo();
                break;

            case '2':   
                //entrar_conta();
                break;
            
            case '3':   
                //mudar_senha();
                break;
        } 	
    
    } while (opcao != '0');

    return 0;
}

char tela_deposito (void) { 
    char op;                                                            
    system("clear||cls");                                                                       
    printf("\n");                                                                                       
    printf(".=============================================================================.\n");
    printf("|                                                                             |\n");
    printf("|            ===================================================              |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = = = =              |\n");
    printf("|         = = = = = Sistema de Controle de Contas Bancárias = = = = =         |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = = = =              |\n");
    printf("|            ===================================================              |\n");
    printf("|        Developed by @igwbriel and @ericmadsonn -- since august, 2022        |\n");
    printf("|                                                                             |\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|            = = = = = = = =  Menu Depósito  = = = = = = = =                  |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|                                                                             |\n");
    printf("|            1. Ver saldo da conta                                            |\n");
    printf("|            2. Depositar                                                     |\n");
    printf("|            0. Voltar ao menu anterior                                       |\n");
    printf("|                                                                             |\n");
    printf("|            Escolha a opção desejada:  ");
    scanf("%c", &op);
    getchar();
    printf("|                                                                             |\n");
    printf(".=============================================================================.\n");
    printf("\n");
    return op;
}