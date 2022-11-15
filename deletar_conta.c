#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "criar_conta.h"

void deletar_conta(void) {
    char CPF[30];
    char password[6];
    Salva* fulano;
    
    system("clear||cls");   
    /* COLOCAR MENSAGEM DE BUSCA DE CPF NA FUNÇAO DE EXCLUIR */
    /* printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|              = = = = = buscando conta a ser deletada = = = = =              |\n");
    printf("|                                                                             |\n");
    printf("|                   Digite o CPF da conta a ser deletada:\n                   |\n");
    scanf("%s", CPF);
    getchar();
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
    getchar(); */
    excluirConta();
    printf(".=============================================================================.\n");
    printf("\n");
    system("clear||cls");
    /* SUBSTITUIR ESSA MENSAGEM DE AGRADECIMENTO PELA MENSAGEM DA FUNÇÃO ABAIXO */    
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

void excluirConta(void) {
  FILE* fp;
  Salva* aln;
  int achou;
  char resp;
  char procurado[20];
  char senha[7];
  fp = fopen("contas.dat", "r+b");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
  printf("\n\n");
  printf("= = = S G P e t = = = \n");
  printf("= = Apagar Animal = = \n");
  printf("= = = = = = = = = = = \n");
  printf("Informe o cpf da conta a ser apagada: ");
  scanf(" %14[^\n]", procurado);
  printf("\n\n");
  printf("= = = S G P e t = = = \n");
  printf("= = Apagar Animal = = \n");
  printf("= = = = = = = = = = = \n");
  printf("Informe a senha da conta a ser apagada: ");
  scanf(" %14[^\n]", senha);
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
      printf("\nConta excluída com sucesso!!!\n");
      getchar();
      getchar();
     } else {
      /* FAZER NOVA TELA NOS PADRÕES */
       printf("\nOk, os dados não foram alterados\n");
       getchar();
       getchar();
     }
  } else {
    /* FAZER NOVA TELA NOS PADRÕES */
    printf("A conta não foi encontrada!");
    getchar();
    getchar();
  }
  free(aln);
  fclose(fp);
}