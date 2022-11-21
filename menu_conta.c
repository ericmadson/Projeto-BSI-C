#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "menu_conta.h"
#include "deposito.h"
#include "saque.h"
#include "transacoes.h"

int menu_conta(void) {
    char opcao;

    do {
        opcao = tela_menu_conta();
        switch(opcao) {
            case '1':  
                menu_deposito();
                break;

            case '2':   
                menu_saque();
                break;
            
            case '3':   
                menu_transacoes();
                break;

        } 	
    
    } while (opcao != '0');

    return 0;
}

char tela_menu_conta(void) {
    char op;
    system("clear||cls");
    printf("\n");
    printf(".=============================================================================.\n");
    printf("|                                                                             |\n");
    printf("|             Universidade Federal do Rio Grande do Norte                     |\n");
    printf("|                   Centro de Ensino Superior do Serido                       |\n");
    printf("|                 Departamento de Computacao e Tecnologia                     |\n");
    printf("|                    Disciplina DCT1106 -- Programacao                        |\n");
    printf("|                 Sistema de Controle de Contas Bancarias                     |\n");
    printf("|        Developed by @igwbriel and @ericmadsonn -- since august, 2022        |\n");
    printf("|                                                                             |\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|         = = = = = Sistema de Controle de Contas Bancárias = = = = =         |\n");
    printf("|                                                                             |\n");
    printf("|              1. Realizar deposito                                           |\n");
    printf("|              2. Realizar saque                                              |\n");
    printf("|              3. Realizar transacoes                                         |\n");
    printf("|              0. Sair                                                        |\n");
    printf("|                                                                             |\n");
    printf("               Escolha uma opcao acima: ");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
    return op;
} 