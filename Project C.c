#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "criar_conta.h"
#include "entrar_conta.h"
#include "mudar_senha.h"
#include "tela_equipe.h"
#include "tela_sobre.h"
#include "menu_conta.h"
char tela_conta();

// Programa principal
int main(void) {
    char opcao;

    do {
        opcao = tela_conta();
        switch(opcao) {
            case '1':  
                tela_cadastro();
                break;

            case '2':   
                entrar_conta();
                break;
            
            case '3':   
                mudar_senha();
                break;
            
            case '4':   
                deletar_conta();
                break;
        
            case '5':   
                tela_sobre();
                break;
            
            case '6':   
                tela_equipe();
                break;
        } 	
    
    } while (opcao != '0');

    return 0;
}

char tela_conta(void) {
    char op;
    system("clear||cls");
    printf("\n");
    printf(".=============================================================================.\n");
    printf("|                                                                             |\n");
    printf("|             Universidade Federal do Rio Grande do Norte                     |\n");
    printf("|                   Centro de Ensino Superior do Seridó                       |\n");
    printf("|                 Departamento de Computação e Tecnologia                     |\n");
    printf("|                    Disciplina DCT1106 -- Programação                        |\n");
    printf("|                 Sistema de Controle de Contas Bancárias                     |\n");
    printf("|        Developed by @igwbriel and @ericmadsonn -- since august, 2022        |\n");
    printf("|                                                                             |\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|         = = = = = Sistema de Controle de Contas Bancárias = = = = =         |\n");
    printf("|                                                                             |\n");
    printf("|              1. Criar conta                                                 |\n");
    printf("|              2. Entrar na conta                                             |\n");
    printf("|              3. Mudar senha                                                 |\n");
    printf("|              4. Deletar conta                                               |\n");
    printf("|              5. Sobre                                                       |\n");
    printf("|              6. Equipe                                                      |\n");
    printf("|              0. Sair                                                        |\n");
    printf("|                                                                             |\n");
    printf(".=============================================================================.\n");
    printf("               Escolha uma opção acima: ");
    scanf("%c", &op);
    getchar();
    printf("\n");
    return op;
}