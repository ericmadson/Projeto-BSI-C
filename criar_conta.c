#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include "validacao_senha.h"
#include "validacao_CPF.h"
#include "criar_conta.h"

void tela_cadastro(void) {
    Salva* fulano;
    fulano = SalvaConta();
    gravacao(fulano);
    free(fulano);
}

struct cadastro_conta;

Salva* SalvaConta(void){
    Salva* conta;
    char out;
    char resp;
    int cpfvalidation;
    conta = (Salva*) malloc(sizeof(Salva));
    system("clear||cls");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Criação de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                          Digite seu nome completo:\n                        |\n");
    scanf(" %80[^\n]", conta->nome);
    printf(".=============================================================================.\n");
    printf("\n");
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Criação de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                          Digite seu CPF:\n                                  |\n");
   do
   {
    scanf(" %11[^\n]", conta->CPF);
    getchar();
    cpfvalidation = CPFvalidation(conta->CPF);
   } while (!cpfvalidation);

	if ((cpfvalidation) == 1){
		printf("| CPF ACEITO E CORRETO");
    getchar();
	} else {
		printf("| CPF INCORRETO, TENTE NOVAMENTE !");
    getchar();
	} 
    printf(".=============================================================================.\n");
    system("clear||cls"); 
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Criação de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                          Digite sua senha: (apenas números)\n               |\n");
    scanf(" %20[^\n]", conta->password);
    getchar();
    system("clear||cls");
    conta->status = '1';
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Criação de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|       %s\n", conta-> nome);  
    printf("|       %s\n", conta -> CPF);                                                                          
    printf("|       %s\n", conta -> password);                                                 
    printf("|                   As informações acima estão corretas ? (S/N)               |\n"); 
    scanf(" %c", &resp);
    getchar();
    printf(".=============================================================================.\n");
    if (resp == 's' || resp == 'S') {
      printf("|=============================================================================|\n");
      printf("|                                                                             |\n");
      printf("|                    = = = = = Criação de conta = = = = =                     |\n");
      printf("|                                                                             |\n");
      printf("|                        Conta criada com sucesso !!!                         |\n");
      scanf("%c", &out);
      printf(".=============================================================================.\n");
      getchar();  
    }else {
      printf("|=============================================================================|\n");
      printf("|                                                                             |\n");
      printf("|                    = = = = = Criação de conta = = = = =                     |\n");
      printf("|                                                                             |\n");
      printf("|                  Criação de conta cancelada com sucesso !!!:\n              |\n");
      scanf("%c", &out);
      printf(".=============================================================================.\n");
      getchar();
  }
    return conta;
}

void gravacao(Salva* conta) {
  FILE* fp;
  fp = fopen("contas.dat", "ab");
  if (fp == NULL) {
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                   = = = = = Criação revogada = = = = =                      |\n");
  printf("|                                                                             |\n");
  printf("|                   Ocorreu um erro na abertura do arquivo !:\n               |\n");
  printf(".=============================================================================.\n");
  exit(1);
  }
  fwrite(conta, sizeof(Salva), 1, fp);
  fclose(fp);
}

// Brennus e isa