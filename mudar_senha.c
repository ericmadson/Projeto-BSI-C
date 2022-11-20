#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "mudar_senha.h"
#include "criar_conta.h"

void mudar_senha(void) {
  FILE* fp;
  Salva* contas;
  int achou;
  char cpf[20];
  char resp;
  char out;
  char procurado[15];
  fp = fopen("contas.dat", "r+b");
  if (fp == NULL) {
    system("clear||cls");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                   = = = = = Listagem revogada = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                                                                             |\n");
    printf("|                   Ocorreu um erro na abertura do arquivo !                  |\n");
    printf(".=============================================================================.\n");
    scanf("%c", &out);
    exit(1);
  }
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Alterando a senha = = = = =                    |\n");
    printf("|                                                                             |\n");
    printf("|                   Digite o CPF da conta a ser alterada:\n                   |\n");
    scanf("%s", cpf);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Alterando a senha = = = = =                    |\n");
    printf("|                                                                             |\n");
    printf("|                  Digite a senha da conta a ser alterada:\n                  |\n");
    scanf(" %14[^\n]", procurado);
    getchar();
    printf(".=============================================================================.\n");
    contas = (Salva*) malloc(sizeof(Salva));
    achou = 0;
while((!achou) && (fread(contas, sizeof(Salva), 1, fp)))
 {
   if ((strcmp(contas->CPF, cpf) == 0) && (strcmp(contas->password, procurado) == 0) && (contas->status == '1')) 
   {
     achou = 1;
   }
 }
  if (achou) {
    exibeConta(contas);
    getchar();
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Alterando a senha = = = = =                    |\n");
    printf("|                                                                             |\n");
    printf("|                Deseja realmente alterar a senha dessa conta ? (S/N):\n      |\n");
    scanf("%c", &resp);
    printf(".=============================================================================.\n");;
    if (resp == 's' || resp == 'S')
    {
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Alterando a senha = = = = =                    |\n");
    printf("|                                                                             |\n");
    printf("|                  Digite a nova senha da sua conta:\n                        |\n");
    scanf(" %14[^\n]", contas->password);
    getchar();
    printf(".=============================================================================.\n");
    contas->status = '1';
    fseek(fp, (-1)*sizeof(Salva), SEEK_CUR);
    fwrite(contas, sizeof(Salva), 1, fp);
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|           = = = = = sua senha foi alterada com sucesso ! = = = = =          |\n");
    printf("|                                                                             |\n");
    printf("|                 [Obrigado por confiar em nossos serviços]\n                 |\n");
    getchar();
    printf(".=============================================================================.\n");
    } 
    else 
    {
     printf("|=============================================================================|\n");
     printf("|                                                                             |\n");
     printf("|                   = = = = = Alteração revogada = = = = =                    |\n");
     printf("|                                                                             |\n");
     printf("|                    Seus dados permanecem inalterados !!!:\n                 |\n");
     scanf("%c", &out);
     printf(".=============================================================================.\n");
     getchar();
    }
  }
   else 
   {
    system("clear||cls");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                   = = = = = Listagem revogada = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                                                                             |\n");
    printf("|   A senha %s não foi encontrado no nosso arquivo !\n", procurado);
    printf(".=============================================================================.\n");
   }
  free(contas);
  fclose(fp);
}




