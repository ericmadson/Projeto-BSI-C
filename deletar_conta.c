#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "criar_conta.h"

void deletar_conta(void) {
    char CPF[30];
    char password[6];
    Salva* fulano;
}

void excluirConta(void) {
  FILE* fp;
  Salva* aln;
  int achou;
  char resp;
  char procurado[20];
  char senha[7];
  fp = fopen("contas.dat", "r+b");
  if (fp == NULL) {
  printf("\n\n");
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                   = = = = = ocorreu um erro !!! = = = = =                   |\n");
  printf("|                                                                             |\n");
  printf("|                     Não foi possível abrir o arquivo !                      |\n");
  printf("|                                                                             |\n");  
  printf(".=============================================================================.\n");
  printf("\n");
  getchar();
  getchar();
  exit(1);
  }
    printf("\n\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|              = = = = = buscando conta a ser deletada = = = = =              |\n");
    printf("|                                                                             |\n");
    printf("|                   Digite o CPF da conta a ser deletada:\n                   |\n");
    scanf(" %14[^\n]", procurado);
    getchar();
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
    printf("\n\n");
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|              = = = = = buscando conta a ser deletada = = = = =              |\n");
    printf("|                                                                             |\n");
    printf("|                  Digite a senha da conta a ser deletada:\n                  |\n");
    scanf(" |%14[^\n]", senha);
    printf(".=============================================================================.\n");
    getchar();
    getchar();
  aln = (Salva*) malloc(sizeof(Salva));
  achou = 0;
  while((!achou) && (fread(aln, sizeof(Salva), 1, fp))) {
   if (strcmp(aln->CPF, procurado) == 0 && strcmp(aln->password, senha) == 0) {
     achou = 1;
   }
  }
  if (achou) {
    printf("Deseja realmente apagar esta conta (s/n)? ");
    scanf(" %c", &resp);
    if (resp == 's' || resp == 'S') {
      aln->status = '0';
      fseek(fp, (-1)*sizeof(Salva), SEEK_CUR);
      fwrite(aln, sizeof(Salva), 1, fp);
      printf(".=============================================================================.\n");
      printf("\n");
      system("clear||cls"); 
      printf("\n");
      printf("|=============================================================================|\n");
      printf("|                                                                             |\n");
      printf("|              = = = = = Conta deletada com sucesso ! = = = = =               |\n");
      printf("|                                                                             |\n");
      printf("|                 [Obrigado por confiar em nossos serviços]\n                 |\n");
      getchar();
      printf(".=============================================================================.\n");
      printf("\n");
      getchar();
      getchar();
     } else {
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|           = = = = = = = = = Conta não deletada ! = = = = = = = = =          |\n");
    printf("|                                                                             |\n");
    printf("|            [Seus dados continuarão salvos em nosso sistema !]\n             |\n");
    getchar();
    printf(".=============================================================================.\n");
    getchar();
    getchar();
     }
  } else {
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|           = = = = = Não foi possivel deletar a conta ! = = = = =            |\n");
    printf("|                                                                             |\n");
    printf("|                 [CPF ou senha invalidos, tente novamente]\n                 |\n");
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
    getchar();
    getchar();
  }
  free(aln);
  fclose(fp);
}