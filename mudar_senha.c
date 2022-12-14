#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "mudar_senha.h"
#include "criar_conta.h"
#include "validacao_senha.h"

int mudar_senha(void) {
  FILE* fp;
  Salva* contas;
  int achou;
  int validarSenha;
  int validarDados;
  char cpf[20];
  char resp;
  char out;
  char procurado[15];
  fp = fopen("contas.dat", "r+b");
  if (fp == NULL) {
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                   = = = = = Alteracao revogada = = = = =                    |\n");
    printf("|                                                                             |\n");
    printf("|                                                                             |\n");
    printf("|                   Ocorreu um erro na abertura do arquivo !                  |\n");
    printf("|                                                                             |\n");
    printf(".=============================================================================.\n");
    scanf("%c", &out);
    return 0;
  }
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Alterando a senha = = = = =                    |\n");
    printf("|                                                                             |\n");
    printf("|                   Digite o CPF da conta a ser alterada: ");
    scanf("%s", cpf);
    getchar();
    system("clear||cls");
    printf(".=============================================================================.\n");
    printf("\n");
    system("clear||cls");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Alterando a senha = = = = =                    |\n");
    printf("|                                                                             |\n");
    printf("|                  Digite a senha atual: ");
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
    system("clear||cls");
    exibeConta(contas);
    printf("|                                                                             |\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Alterando a senha = = = = =                    |\n");
    printf("|                                                                             |\n");
    printf("|                Deseja realmente alterar a senha dessa conta ? (S/N): ");
    scanf("%c", &resp);
    printf(".=============================================================================.\n");;
    if (resp == 's' || resp == 'S')
    {
    system("clear||cls");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Alterando a senha = = = = =                    |\n");
    printf("|                                                                             |\n");
       do
   {
    printf("|                   Digite a nova senha da sua conta: ");
    scanf(" %s", contas->password);
    getchar();
   } 
   while (!(validarSenha = validacao_senha(contas->password)));
    validarDados = buscarConta(contas->CPF, contas->password);

    if (validarDados == 0) {
    contas->status = '1';
    fseek(fp, (-1)*sizeof(Salva), SEEK_CUR);
    fwrite(contas, sizeof(Salva), 1, fp);
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|           = = = = = sua senha foi alterada com sucesso ! = = = = =          |\n");
    printf("|                                                                             |\n");
    printf("|                 [Obrigado por confiar em nossos servicos]\n                 |\n");
    printf("|                                                                             |\n");
    printf(".=============================================================================.\n");
    getchar();
    } 
    else 
    {
     system("clear||cls");
     printf("|=============================================================================|\n");
     printf("|                                                                             |\n");
     printf("|                   = = = = = Alteracao revogada = = = = =                    |\n");
     printf("|                                                                             |\n");
     printf("|                    Seus dados permanecem inalterados !!!:\n                 |\n");
     printf("|                                                                             |\n");
     printf(".=============================================================================.\n");
     scanf("%c", &out);
    }
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
    printf("|     CPF: %s\n", cpf);
    printf("|     Senha: %s\n", procurado);
    printf("|     Alguma das informacoes nao foram encontrados no nosso arquivo !         |\n");
    printf(".=============================================================================.\n");
    scanf("%c", &out);
   }
  free(contas);
  fclose(fp);
  
  return 0;
}




