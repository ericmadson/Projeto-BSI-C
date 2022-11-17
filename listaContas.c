#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "criar_conta.h"
#include "deletar_conta.h"

void listaContas(void) {
  FILE* fp;
  Salva* conta;
  char out;
  fp = fopen("contas.dat", "rb");
  if (fp == NULL) {
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                   = = = = = Listagem revogada = = = = =                     |\n");
  printf("|                                                                             |\n");
  printf("|                   Ocorreu um erro na abertura do arquivo !:                 |\n");
  printf(".=============================================================================.\n");
  exit(1);
  }
  printf("\n\n");
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                   = = = = = Lista de Contas = = = = =                       |\n");
  printf("|                                                                             |\n");
  printf("|                                                                             |\n");
  conta = (Salva*) malloc(sizeof(Salva));
  while(fread(conta, sizeof(Salva), 1, fp) == 1) {
      if (conta->status == '1') {
      exibeConta(conta);
      scanf("%c", &out);
    }
    }
  fclose(fp);
  free(conta);
}