#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <criar_conta.h>



void criar_conta(void) {
   tela_contaNome();
    tela_contaCPF();
    tela_contaRG();
    tela_contaConcluida();
    return 0;
}

void tela_contaNome(void) {
        char op;
        system("clear||cls");   
        printf("\n");
        printf("|=============================================================================|\n");
        printf("|                                                                             |\n");
        printf("|                    = = = = = Criação de conta = = = = =                     |\n");
        printf("|                                                                             |\n");
        printf("|                          Digite seu nome completo:\n                        |\n");
        scanf("%c", &op);
        getchar();
        printf(".=============================================================================.\n");
        printf("\n"); 
    }
 // modulo 1 tela 2
    void tela_contaCPF(void) {
        char op;
        system("clear||cls");   
        printf("\n");
        printf("|=============================================================================|\n");
        printf("|                                                                             |\n");
        printf("|                    = = = = = Criação de conta = = = = =                     |\n");
        printf("|                                                                             |\n");
        printf("|                          Digite seu CPF:\n                                  |\n");
        scanf("%c", &op);
        getchar();
        printf(".=============================================================================.\n");
        printf("\n"); 
    }
 // modulo 1 tela 3
    void tela_contaRG(void) {
        char op;
        system("clear||cls");   
        printf("\n");
        printf("|=============================================================================|\n");
        printf("|                                                                             |\n");
        printf("|                    = = = = = Criação de conta = = = = =                     |\n");
        printf("|                                                                             |\n");
        printf("|                              Digite seu RG:\n                               |\n");
        scanf("%c", &op);
        getchar();
        printf(".=============================================================================.\n");
        printf("\n"); 
    }
// modulo 1 tela final (se funcionar)
    void tela_contaConcluida(void) {
        char op;
        system("clear||cls");   
        printf("\n");
        printf("|=============================================================================|\n");
        printf("|                                                                             |\n");
        printf("|               = = = = = Conta criada com sucesso ! = = = = =                |\n");
        printf("|                                                                             |\n");
        printf("|                  [Obrigado por confiar em nossos serviços]\n                |\n");
        printf("|                                                                             |\n");
        getchar();
        printf(".=============================================================================.\n");
        printf("\n"); 
    }
//modulo 1 tela final (se não funcionar)
void tela_contaNao(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|               = = = = = falha na criacao da conta ! = = = = =               |\n");
    printf("|                                                                             |\n");
    printf("|                [CPF, RG ou nome invalidos, tente novamente]\n               |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
} 
