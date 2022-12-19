#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "criar_conta.h"
#include "deletar_conta.h"

void exibeConta(Salva* conta) {
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                 = = = = = Informacoes da conta = = = = =                    |\n");
  printf("|                                                                             |\n");
  printf("|   Nome: %s\n", conta->nome);
  printf("|   Estado: %s\n", conta->estado);
  printf("|   CPF: %s\n", conta->CPF);
  printf("|   Senha: %s\n", conta->password);
  printf(".=============================================================================.\n");
}

int excluirConta(void) {
  FILE* fp;
  Salva* conta;
  int achou;
  char resp;
  char out;
  char procurado[15];
  char senha[20];
  fp = fopen("contas.dat", "r+b");
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
  system("clear||cls");
  printf("\n\n");
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                   = = = = = Exclusao de conta = = = = =                     |\n");
  printf("|                                                                             |\n");
  printf("|                 Digite o CPF da conta que sera deletada: ");
  scanf(" %14[^\n]", procurado);
  printf(".=============================================================================.\n");
  system("clear||cls");
  printf("\n\n");
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                    = = = = = Exclusao de conta = = = = =                    |\n");
  printf("|                                                                             |\n");
  printf("|                 Digite a senha da conta que sera deletada:\n                |\n");
  scanf(" %14[^\n]", senha);
  printf(".=============================================================================.\n");
  conta = (Salva*) malloc(sizeof(Salva));
  achou = 0;
  while((!achou) && (fread(conta, sizeof(Salva), 1, fp))) {
   if ((strcmp(conta->CPF, procurado) == 0) && (strcmp(conta->password, senha) == 0) && (conta->status == '1')) {
     achou = 1;
   }
  }
  if (achou) {
    exibeConta(conta);
    getchar();
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                    = = = = = Exclusao de conta = = = = =                    |\n");
  printf("|                                                                             |\n");
  printf("|                 Deseja realmente deletar essa conta ? (S/N): ");
  scanf("%c", &resp);
  printf(".=============================================================================.\n");;
    if (resp == 's' || resp == 'S') {
      conta->status = '0';
      fseek(fp, (-1)*sizeof(Salva), SEEK_CUR);
      fwrite(conta, sizeof(Salva), 1, fp);
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                    = = = = = Exclusao de conta = = = = =                    |\n");
  printf("|                                                                             |\n");
  printf("|                        Conta Excluida com sucesso !!!:\n                    |\n");
  scanf("%c", &out);
  printf(".=============================================================================.\n");
  getchar();
     } else {
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                   = = = = = Exclusao revogada = = = = =                     |\n");
  printf("|                                                                             |\n");
  printf("|                    Seus dados permanecem inalterados !!!:\n                 |\n");
  scanf("%c", &out);
  printf(".=============================================================================.\n");
  getchar();
     }
  } else {
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                   = = = = = Exclusao revogada = = = = =                     |\n");
  printf("|                                                                             |\n");
  printf("|                         Conta nao encontrada !!!:\n                         |\n");
  scanf("%c", &out);
  printf(".=============================================================================.\n");
  getchar();
  }
  free(conta);
  fclose(fp);
  return 0;
}