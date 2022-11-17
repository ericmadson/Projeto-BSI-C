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
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
  printf("\n\n");
  printf("= = = S G P e t = = = \n");
  printf("= = Exibe Contas = = \n");
  printf("= = = = = = = = = = = \n");
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