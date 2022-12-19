#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "saldo.h"
#include "criar_conta.h"

int tela_saldo(void) {
  FILE* fp;
  fp = fopen("contas.dat", "r+b");
  Salva* contas;
  char out;
  int achou;
  char procurado[15];
if (fp == NULL) {
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                     = = = = = Saldo revogada = = = = =                      |\n");
  printf("|                                                                             |\n");
  printf("|                   Ocorreu um erro na abertura do arquivo !:\n               |\n");
  printf("|                                                                             |\n");
  printf(".=============================================================================.\n");
  scanf("%c", &out);
  return 0;
  }
  system("clear||cls");
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                     = = = = = Buscando conta = = = = =                      |\n");
  printf("|                                                                             |\n");
  printf("|                  Digite a senha atual: ");
  scanf(" %14[^\n]", procurado);
  getchar();
  printf(".=============================================================================.\n");
  contas = (Salva*) malloc(sizeof(Salva));
  achou = 0;
while((!achou) && (fread(contas, sizeof(Salva), 1, fp)))
 {
   if ((strcmp(contas->password, procurado) == 0) && (contas->status == '1')) 
   {
     achou = 1;
   }
 }
  if (achou) 
  {
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|            = = = = = = = = = = =  Saldo  = = = = = = = = =                  |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|                                                                             |\n");
    printf("|                    O saldo da sua conta e R$%.2f", contas->saldo);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
    free(contas);
    return 0;
  }
  else {
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|               = = = = = Falha ao encontrar conta ! = = = = =                |\n");
    printf("|                                                                             |\n");
    printf("|              [verifique os dados inseridos e tente novamente]\n             |\n");
    printf("|                                                                             |\n");
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); ; 
    free(contas);
    return 0;
  }
}