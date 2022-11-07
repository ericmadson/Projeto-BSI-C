#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include "validacao_senha.h"
#include "criar_conta.h"

void tela_cadastro(void) {
    Salva* fulano;
    fulano = preencheAluno();
    gravaAluno(fulano);
    free(fulano);
}

struct cadastro_conta;
Salva* preencheAluno(void){
    Salva* aln;
    aln = (Salva*) malloc(sizeof(Salva));
    system("clear||cls");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Criação de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                          Digite seu nome completo:\n                        |\n");
    scanf(" %80[^\n]", aln->nome);
    printf(".=============================================================================.\n");
    printf("\n");
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Criação de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                          Digite seu CPF:\n                                  |\n");
    scanf(" %80[^\n]", aln->CPF);
    printf(".=============================================================================.\n");
    system("clear||cls"); 
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                           |\n");
    printf("|                    = = = = = Criação de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                          Digite sua senha: (apenas números)\n               |\n");
    scanf(" %20[^\n]", aln->password);
    system("clear||cls");
    aln->status = 'm';
    return aln;
}

void gravaAluno(Salva* aln) {
  FILE* fp;
  fp = fopen("alunos.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  fwrite(aln, sizeof(Salva), 1, fp);
  fclose(fp);
}

//exibir as informacoes

//modulo 1 tela final (se não funcionar)

