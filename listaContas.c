#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "criar_conta.h"
#include "deletar_conta.h"
#include "siglas.h"

int listaContasMenu(void) {
    int opcao;

    do {
        opcao = tela_listagem();
        switch(opcao) {
            case 1:  
                listaContas();
                break;

            case 2:
                listarPorEstado();
                break;
          
        } 	
    } while (opcao != 0);

    return 0;
}

char tela_listagem(void) {
    int op;
    system("clear||cls");
    printf("\n");
    printf(".=============================================================================.\n");
    printf("|                                                                             |\n");
    printf("|             Universidade Federal do Rio Grande do Norte                     |\n");
    printf("|                   Centro de Ensino Superior do Serido                       |\n");
    printf("|                 Departamento de Computacao e Tecnologia                     |\n");
    printf("|                    Disciplina DCT1106 -- Programacao                        |\n");
    printf("|                 Sistema de Controle de Contas Bancarias                     |\n");
    printf("|        Developed by @igwbriel and @ericmadsonn -- since august, 2022        |\n");
    printf("|                                                                             |\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                   = = = = = Opcoes de listagem = = = = =                    |\n");
    printf("|                                                                             |\n");
    printf("|              1. Listagem por ordem de cadastro                              |\n");
    printf("|              2. Listagem por estado                                         |\n");
    //printf("|              2. Listagem por ordem alfabetica                               |\n");
    printf("|              0. Sair                                                        |\n");
    printf("|                                                                             |\n");
    printf(".=============================================================================.\n");
    printf("               Escolha uma opcao acima: ");
    scanf("%d", &op);
    getchar();
    return op;
}

int listaContas(void) {
  FILE* fp;
  Salva* conta;
  char out;
  fp = fopen("contas.dat", "rb");
  if (fp == NULL) {
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                   = = = = = Listagem revogada = = = = =                     |\n");
  printf("|                                                                             |\n");
  printf("|                                                                             |\n");
  printf("|                   Ocorreu um erro na abertura do arquivo !                  |\n");
  printf("|                                                                             |\n");
  printf(".=============================================================================.\n");
  scanf("%c", &out);
  return 0;
  }
  system("clear||cls");
  printf("\n\n");
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                   = = = = = Lista de Contas = = = = =                       |\n");
  printf("|                                                                             |\n");
  printf("|                                                                             |\n");
  conta = (Salva*) malloc(sizeof(Salva));
  while(fread(conta, sizeof(Salva), 1, fp) == 1) {
      if (conta->status == '1') {
      exibeConta(conta);
      scanf("%c", &out);
    }
    }
  if (fread(conta, sizeof(Salva), 1, fp) == 0) {
  system("clear||cls");
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                   = = = = = Fim da listagem = = = = =                       |\n");
  printf("|                                                                             |\n");
  printf(".=============================================================================.\n");
  scanf("%c", &out);
  return 0;
  }
  fclose(fp);
  free(conta);
  return 0;
}