#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "criar_conta.h"
#include "deletar_conta.h"
#include "siglas.h"

typedef struct noPet NoName;

struct noPet {
  char nome[80];
  char CPF[12];
  char password[7];
  char estado[3];
  char status;
  NoName* prox;
};


NoName* listaAlfabetica(void);
void exibeLista(NoName*);
int listaContasMenu(void) {
    int opcao;
    NoName* lista;
    do {
        opcao = tela_listagem();
        switch(opcao) {
            case 1:  
                listaContas();
                break;

            case 2:
                listarPorEstado();
                break;

            case 3:
                lista = listaAlfabetica();
                exibeLista(lista);
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
    printf("|              3. Listagem por ordem alfabetica                               |\n");
    printf("|                                                                             |\n");
    printf("|              0. Sair                                                        |\n");
    printf("|                                                                             |\n");
    printf(".=============================================================================.\n");
    printf("               Escolha uma opcao acima: ");
    scanf("%d", &op);
    getchar();
    return op;
}

int listarPorEstado(void) {
  FILE* fp;
  Salva* conta;
  char out;
  char estadoSigla[3];
  fp = fopen("contas.dat", "rb");
  if (fp == NULL) {
  system("clear||cls");
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
  do {
  printf("\n");
  system("clear||cls");
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                    = = = = = Listagem por estado = = = = =                  |\n");
  printf("|                                                                             |\n");
  printf("|                                                                             |\n");
  printf("|                    Digite a sigla do estado para filtragem :\n              |\n");
  scanf(" %s", estadoSigla);
  getchar();
  printf(".=============================================================================.\n");
  } while (siglasCmp(estadoSigla) == 0);
  system("clear||cls");
  printf("\n\n");
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                   = = = = = Lista de Contas = = = = =                       |\n");
  printf("|                                                                             |\n");
  printf("|                                                                             |\n");
  conta = (Salva*) malloc(sizeof(Salva));
  while(fread(conta, sizeof(Salva), 1, fp) == 1) {
      if(strcmp(conta->estado, estadoSigla) == 0) {
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


  NoName* listaAlfabetica(void) {
  FILE* fp;
  Salva* conta;
  NoName* noname;
  NoName* lista;
  char out; 

  lista = NULL;
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

  conta = (Salva*) malloc(sizeof(Salva));
  while(fread(conta, sizeof(Salva), 1, fp)) {
    if (conta->status == '1') {
      noname = (NoName*) malloc(sizeof(NoName));
      strcpy(noname->nome, conta->nome);
      noname->status = conta->status;
      strcpy(noname->estado, conta->estado);
      strcpy(noname->CPF, conta->CPF);
      strcpy(noname->password, conta->password);
      noname->prox = NULL;
      if (lista == NULL) {
        lista = noname;
        noname->prox = NULL;
      } else if (strcmp(noname->nome,lista->nome) < 0) {
        noname->prox = lista;
        lista = noname;
      } else {
        NoName* anter = lista;
        NoName* atual = lista->prox;
        while ((atual != NULL) && strcmp(atual->nome,noname->nome) < 0) {
          anter = atual;
          atual = atual->prox;
        }
        anter->prox = noname;
        noname->prox = atual;
      }
    }
  }
  fclose(fp);
  free(conta);
  return lista;
}

void exibeLista(NoName* lista) {
  char out;
  while (lista != NULL) {
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                 = = = = = Informacoes da conta = = = = =                    |\n");
  printf("|                                                                             |\n");
  printf("|   Nome: %s\n", lista->nome);
  printf("|   Estado: %s\n", lista->estado);
  printf("|   CPF: %s\n", lista->CPF);
  printf("|   Senha: %s\n", lista->password);
  printf("|   Status: %c\n", lista->status);
  printf("\n");
  printf(".=============================================================================.\n");
  scanf("%c", &out);
  lista = lista->prox;
  }
}
