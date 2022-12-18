#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "saldo.h"
#include "criar_conta.h"

int tela_saldo(void) {
    FILE* fp;
    fp = fopen("contas.dat", "ab");
    Salva* conta;
    char out;
if (fp == NULL) {
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                   = = = = = Exclusao revogada = = = = =                     |\n");
  printf("|                                                                             |\n");
  printf("|                   Ocorreu um erro na abertura do arquivo !:\n               |\n");
  printf("|                                                                             |\n");
  printf(".=============================================================================.\n");
  scanf("%c", &out);
  return 0;
  }
conta = (Salva*) malloc(sizeof(Salva));
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|            = = = = = = = = = = =  Saldo  = = = = = = = = =                  |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|                                                                             |\n");
    printf("|                    O saldo da sua conta e R$%.2f", conta->saldo);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
    free(conta);
    return 0;
}