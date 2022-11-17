#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "criar_conta.h"
#include "deletar_conta.h"

void exibeConta(Salva* conta) {
  // aprimorar tela de exibição para o padrão
  printf("Nome: %s\n", conta->nome);
  printf("CPF: %s\n", conta->CPF);
  printf("Senha: %s\n", conta->password);
}

void excluirConta(void) {
  FILE* fp;
  Salva* aln;
  int achou;
  char resp;
  char out;
  char procurado[15];
  char senha[20];
  fp = fopen("contas.dat", "r+b");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
  printf("\n\n");
  printf("= = = S G P e t = = = \n");
  printf("= = Apagar aln = = \n");
  printf("= = = = = = = = = = = \n");
  printf("Informe o CPF do aln a ser apagado: ");
  scanf(" %14[^\n]", procurado);
  printf("\n\n");
  printf("= = = S G P e t = = = \n");
  printf("= = Apagar aln = = \n");
  printf("= = = = = = = = = = = \n");
  printf("Informe a senha do aln a ser apagado: ");
  scanf(" %14[^\n]", senha);
  aln = (Salva*) malloc(sizeof(Salva));
  achou = 0;
  while((!achou) && (fread(aln, sizeof(Salva), 1, fp))) {
   if ((strcmp(aln->CPF, procurado) == 0) && (strcmp(aln->password, senha) == 0) && (aln->status == '1')) {
     achou = 1;
   }
  }
  if (achou) {
    exibeConta(aln);
    getchar();
    printf("Deseja realmente apagar este aln (s/n)? ");
    scanf("%c", &resp);
    if (resp == 's' || resp == 'S') {
      aln->status = '0';
      fseek(fp, (-1)*sizeof(Salva), SEEK_CUR);
      fwrite(aln, sizeof(Salva), 1, fp);
      printf("\naln excluído com sucesso!!!\n");
      scanf("%c", &out);
      getchar();
     } else {
       printf("\nOk, os dados não foram alterados\n");
       scanf("%c", &out);
       getchar();
     }
  } else {
    printf("O aln não foi encontrado...\n");
    scanf("%c", &out);
    getchar();
  }
  free(aln);
  fclose(fp);
}