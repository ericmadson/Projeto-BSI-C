#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "criar_conta.h"

int buscarConta (char CPF[12], char senha[7] ) {
  FILE* fp;
  Salva* conta;
  int achou;
  int total;
  char procurado[12];
  char buscaSenha[7];
  fp = fopen("contas.dat", "r+b");
  strcpy(procurado, CPF);
  strcpy(buscaSenha, senha);
  conta = (Salva*) malloc(sizeof(Salva));
  achou = 0;
  while((!achou) && (fread(conta, sizeof(Salva), 1, fp))) {
   if (((strcmp(conta->CPF, procurado) == 0) || (strcmp(conta->password, buscaSenha) == 0)) && (conta->status == '1')) {
     achou = 1;
     total = achou;
   } else {
    total = 0;
   }
  }
  return total;
}