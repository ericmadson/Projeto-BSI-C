#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include "validacao_senha.h"
#include "criar_conta.h"

void tela_cadastro(void) {
    Salva* fulano;
    fulano = SalvaConta();
    gravacao(fulano);
    free(fulano);
}

struct cadastro_conta;

Salva* SalvaConta(void){
    Salva* conta;
    conta = (Salva*) malloc(sizeof(Salva));
    system("clear||cls");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Criação de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                          Digite seu nome completo:\n                        |\n");
    scanf(" %80[^\n]", conta->nome);
    printf(".=============================================================================.\n");
    printf("\n");
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Criação de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                          Digite seu CPF:\n                                  |\n");
    scanf(" %80[^\n]", conta->CPF);
    printf(".=============================================================================.\n");
    system("clear||cls"); 
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Criação de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                          Digite sua senha: (apenas números)\n               |\n");
    scanf(" %20[^\n]", conta->password);
    system("clear||cls");
    conta->status = '1';
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Criação de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|       %s\n" ,conta-> nome);  
    printf("|       %s\n", conta ->CPF );                                                                          
    printf("|       %s\n", conta ->password);                                                 
    printf("|                   As informações acima estão corretas ? (S/N)               |\n"); 
    scanf("|                                                                              |\n");                                              
    printf(".=============================================================================.\n");
    getchar();
    getchar();
    return conta;
}

void gravacao(Salva* conta) {
  FILE* fp;
  fp = fopen("contas.dat", "ab");
  if (fp == NULL) {
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                   = = = = = Criação revogada = = = = =                      |\n");
  printf("|                                                                             |\n");
  printf("|                   Ocorreu um erro na abertura do arquivo !:\n               |\n");
  printf(".=============================================================================.\n");
  exit(1);
  }
  fwrite(conta, sizeof(Salva), 1, fp);
  fclose(fp);
}
//exibir as informacoes

//modulo 1 tela final (se não funcionar)

