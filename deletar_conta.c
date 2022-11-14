#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "deletar_conta.h"
#include "criar_conta.h"

void deletar_conta(void) {
    char CPF[30];
    char password[6];
    
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|              = = = = = buscando conta a ser deletada = = = = =              |\n");
    printf("|                                                                             |\n");
    printf("|                   Digite o CPF da conta a ser deletada:\n                   |\n");
    scanf("%s", CPF);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|              = = = = = buscando conta a ser deletada = = = = =              |\n");
    printf("|                                                                             |\n");
    printf("|                  Digite a senha da conta a ser deletada:\n                  |\n");
    scanf("%s", password);
    getchar();
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
}
void tela_nao(void) {
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
}

Salva* buscaConta(void) {
  FILE* fp;
  Salva* aln;
  int matr;
  printf("\n = Busca Conta = \n"); 
  printf("Informe matrícula: "); 
  scanf("%d", &matr);
  aln = (Salva*) malloc(sizeof(Salva));
  fp = fopen("contas.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  while(!feof(fp)) {
    fread(aln, sizeof(Salva), 1, fp);
    if ((aln->CPF == matr) && (aln->status != 'x')) {
      fclose(fp);
      return aln;
    }
  }
  fclose(fp);
  return NULL;
}

void excluirConta(Salva* alnLido) {
  FILE* fp;
  Salva* alnArq;
  int matr;
  int achou = 0;
  if (alnLido == NULL) {
    printf("Ops! O aluno informado não existe!\n");
  }
  else {
    alnArq = (Salva*) malloc(sizeof(Salva));
    fp = fopen("contas.dat", "r+b");
    if (fp == NULL) {
      printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
      printf("Não é possível continuar este programa...\n");
      exit(1);
    }
    while(!feof(fp)) {
      fread(alnArq, sizeof(Salva), 1, fp);
      if ((alnArq->CPF == alnLido->CPF) && (alnArq->status != 'x')) {
        achou = 1;
        alnArq->status = 'x';
        fseek(fp, -1*sizeof(Salva), SEEK_CUR);
        fwrite(alnArq, sizeof(Salva), 1, fp);
        printf("\nConta excluída com sucesso!!!\n");
      }
    }
    if (!achou) {
      printf("\nConta não encontrada!\n");
    }
    fclose(fp);
    free(alnArq);
  }
}