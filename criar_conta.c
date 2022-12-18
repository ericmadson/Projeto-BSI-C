#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include "validacao_senha.h"
#include "validacao_CPF.h"
#include "criar_conta.h"
#include "siglas.h"

int tela_cadastro(void) {
    Salva* fulano;
    fulano = SalvaConta();
    if (fulano == 0) {
      return 0;
    }
    else {
      gravacao(fulano);
      free(fulano);
    }
    return 0;
}

struct cadastro_conta;

Salva* SalvaConta(void){
    Salva* conta;
    char out;
    char resp;
    char estadoSigla[3];
    int validarSenha;
    int validarDados;
    int saldo = 0;
    int cpfvalidation;
    conta = (Salva*) malloc(sizeof(Salva));
    system("clear||cls");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Criacao de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                          Digite seu nome completo:\n                        |\n");
    scanf(" %80[^\n]", conta->nome);
    printf(".=============================================================================.\n");
    do {
    printf("\n");
    system("clear||cls");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Criacao de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                                                                             |\n");
    printf("|                      Digite seu estado (apenas a sigla):\n                  |\n");
    scanf(" %s", estadoSigla);
    printf(".=============================================================================.\n");
    } while (siglasCmp(estadoSigla) == 0);
    strcpy(conta->estado, estadoSigla);
    printf("\n");
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Criacao de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                          Digite seu CPF:\n                                  |\n");

   do
   {
    scanf(" %11[^\n]", conta->CPF);
    getchar();
    cpfvalidation = CPFvalidation(conta->CPF);
    if (strcmp(conta->CPF, "0") == 0) {
      cpfvalidation = 1;
      return 0;
    }
   } while (!cpfvalidation);
    printf(".=============================================================================.\n");
    system("clear||cls"); 
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Criacao de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                       Digite sua senha de 6 numeros:                        |\n");
   do
   {
    printf("Digite uma senha valida: ");
    scanf(" %7[^\n]", conta->password);
    getchar();
   } 
   while (!(validarSenha = validacao_senha(conta->password)));
    validarDados = buscarConta(conta->CPF, conta->password);

    if (validarDados == 1) {
    system("clear||cls"); 
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Criacao de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                     Dados utilizados em conta ja existente!\n               |\n");
    printf("|=============================================================================|\n");
    getchar();
    return 0;
    };
    system("clear||cls");
    conta->status = '1';
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Criacao de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|   Nome: %s\n", conta->nome);
    printf("|   Estado: %s\n", conta->estado);
    printf("|   CPF: %s\n", conta->CPF);
    printf("|   Senha: %s\n", conta->password);                                 
    printf("|                   As informacoes acima estao corretas ? (S/N)               |\n"); 
    scanf(" %c", &resp);
    getchar();
    printf(".=============================================================================.\n");
    if (resp == 's' || resp == 'S') {
      printf("|=============================================================================|\n");
      printf("|                                                                             |\n");
      printf("|                    = = = = = Criacao de conta = = = = =                     |\n");
      printf("|                                                                             |\n");
      printf("|                        Conta criada com sucesso !!!                         |\n");
      printf("|                                                                             |\n");
      printf(".=============================================================================.\n");
      scanf("%c", &out);
      return conta;
    }else {
      printf("|=============================================================================|\n");
      printf("|                                                                             |\n");
      printf("|                    = = = = = Criacao de conta = = = = =                     |\n");
      printf("|                                                                             |\n");
      printf("|                  Criacao de conta cancelada com sucesso !!!:\n              |\n");
      printf("|                                                                             |\n");
      printf(".=============================================================================.\n");
      scanf("%c", &out);
      return 0;
  }
    return 0;
}


void gravacao(Salva* conta) {
  FILE* fp;
  fp = fopen("contas.dat", "ab");
  if (fp == NULL) {
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                   = = = = = Criacao revogada = = = = =                      |\n");
  printf("|                                                                             |\n");
  printf("|                   Ocorreu um erro na abertura do arquivo !:\n               |\n");
  printf(".=============================================================================.\n");
  exit(1);
  }
  fwrite(conta, sizeof(Salva), 1, fp);
  fclose(fp);
}

