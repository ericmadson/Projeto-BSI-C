#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "criar_conta.h"
#include "entrar_conta.h"
#include "mudar_senha.h"
#include "tela_equipe.h"
#include "tela_sobre.h"
#include "menu_conta.h"
#include "deletar_conta.h"
char tela_conta();

// Programa principal
int main(void) {
    int opcao;

    do {
        opcao = tela_conta();
        switch(opcao) {
            case 1:  
                tela_cadastro();
                break;

            case 2:   
                entrar_conta();
                break;
            
            case 3:   
                mudar_senha();
                break;
            
            case 4:   
                excluirConta();
                break;
        
            case 5:   
                listaContasMenu();
                break;
            
            case 6:   
                tela_sobre();
                break;

            case 7: 
                tela_equipe();
                break;
            case 8:
                break;
        } 	
    } while (opcao != 0);

    return 0;
}

char tela_conta(void) {
    int op;
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
    printf("|         = = = = = Sistema de Controle de Contas Bancarias = = = = =         |\n");
    printf("|                                                                             |\n");
    printf("|              1. Criar conta                                                 |\n");
    printf("|              2. Entrar na conta                                             |\n");
    printf("|              3. Mudar senha                                                 |\n");
    printf("|              4. Deletar conta                                               |\n");
    printf("|              5. Listar contas                                               |\n");    
    printf("|              6. Sobre                                                       |\n");
    printf("|              7. Equipe                                                      |\n");
    printf("|              0. Sair                                                        |\n");
    printf("|                                                                             |\n");
    printf(".=============================================================================.\n");
    printf("               Escolha uma opcao acima: ");
    scanf("%d", &op);
    getchar();
    return op;
}