#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "criar_conta.h"
#include "transacoes.h"
#include "saldo.h"
#include "menu_conta.h"

int menu_transacoes(void) {
    char opcao;

    do {
        opcao = tela_transacoes();
        switch(opcao) {
            case '1':  
                tela_saldo();
                break;

            case '2':   
                tela_FazerTransacoes();
                break;
        } 	
    
    } while (opcao != '0');

    return 0;
}

char tela_transacoes (void) { 
    char op;                                                            
    system("clear||cls");                                                                       
    printf("\n");                                                                                       
    printf(".=============================================================================.\n");
    printf("|                                                                             |\n");
    printf("|            ===================================================              |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = = = =              |\n");
    printf("|         = = = = = Sistema de Controle de conta Bancarias = = = = =         |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = = = =              |\n");
    printf("|            ===================================================              |\n");
    printf("|        Developed by @igwbriel and @ericmadsonn -- since august, 2022        |\n");
    printf("|                                                                             |\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|            = = = = = = = Menu Transacoes = = = = = = = = =                  |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|                                                                             |\n");
    printf("|            1. Ver saldo da conta                                            |\n");
    printf("|            2. Realizar transacao                                            |\n");
    printf("|            0. Voltar ao menu anterior                                       |\n");
    printf("|                                                                             |\n");
    printf("|            Escolha a opcao desejada:                                        |\n");
    scanf(" %c", &op);
    getchar();
    printf("|                                                                             |\n");
    printf("|                                                                             |\n");
    printf(".=============================================================================.\n");
    printf("\n");
    return op;
}

void tela_FazerTransacoes(void) {
    // ARRUMAR INDENTACOES
    // ALTERAR NOME DA VARIAVEL
FILE* fp;
  fp = fopen("contas.dat", "r+b");
  Salva* contas;
  char out;
    float op;
  int achou;
    int achou2;
    int continuar;
  char procurado[15];
char procurado2[15];
  // TO DO
  // ALTERAR NOME DA VARIAVEL
  float fuedase = 0;
    float fuedase2 = 0;
if (fp == NULL) {
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                   = = = = = Exclusao revogada = = = = =                     |\n");
  printf("|                                                                             |\n");
  printf("|                   Ocorreu um erro na abertura do arquivo !:\n               |\n");
  printf("|                                                                             |\n");
  printf(".=============================================================================.\n");
  scanf("%c", &out);
  }
  
system("clear||cls");
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                    = = = = = Alterando a senha = = = = =                    |\n");
  printf("|                                                                             |\n");
  printf("|                  Digite a senha atual: ");
  scanf(" %14[^\n]", procurado2);
  getchar();
  printf(".=============================================================================.\n");
  contas = (Salva*) malloc(sizeof(Salva));
  achou2 = 0;
  continuar = 0;
while((!achou2) && (fread(contas, sizeof(Salva), 1, fp)))
 {
   if ((strcmp(contas->password, procurado2) == 0) && (contas->status == '1')) 
   {
     achou2 = 1;
     fuedase2 = contas->saldo;
   }
 }
  if (achou2) {
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|               = = = = = = = = = = = = = = = = = = = = = = = =               |\n");
    printf("|               = = = = = = = =  Menu Deposito  = = = = = = = =               |\n");
    printf("|               = = = = = = = = = = = = = = = = = = = = = = = =               |\n");
    printf("|                                                                             |\n");
    printf("|                      Digite o valor que deseja depositar:                   |\n");
    scanf(" %f", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
    if (((fuedase2 - op) >= 0)) {
    fuedase2 = fuedase2 - op;
    contas->saldo = fuedase2;
    fseek(fp, (-1)*sizeof(Salva), SEEK_CUR);
    fwrite(contas, sizeof(Salva), 1, fp);
    getchar();
    free(contas);
    continuar = 1;
    } else {
    system("clear||cls");   
    printf("\n");
    printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|\n");
    printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|\n");
    printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|\n");
    printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|\n");
    printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|\n");
    getchar();
    free(contas);
    }
  }
  else {
    system("clear||cls");   
    printf("\n");
    printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|\n");
    printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|\n");
        printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|\n");
        printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|\n");
        printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|\n");
        printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|\n");
        printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|\n");
    getchar();
        printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|\n");
    printf("\n"); 
        free(contas);
}
if (continuar) {
    system("clear||cls");
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                    = = = = = Alterando a senha = = = = =                    |\n");
  printf("|                                                                             |\n");
  printf("|                  Digite o cpf da conta a receber transacao:                 |\n");
  scanf(" %14[^\n]", procurado);
  getchar();
  printf(".=============================================================================.\n");
  contas = (Salva*) malloc(sizeof(Salva));
  achou = 0;
while((!achou) && (fread(contas, sizeof(Salva), 1, fp)))
 {
   if ((strcmp(contas->CPF, procurado) == 0) && (contas->status == '1')) 
   {
     achou = 1;
     fuedase = contas->saldo;
   }
 }
  if (achou) {
    // TO DO
    // ALTERAR ELSE
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|               = = = = = = = = = = = = = = = = = = = = = = = =               |\n");
    printf("|               = = = = = = = =  Menu Saque = = = = = = = = = =               |\n");
    printf("|               = = = = = = = = = = = = = = = = = = = = = = = =               |\n");
    printf("|                                                                             |\n");
    printf("|                      Saque realizado com sucesso!                           |\n");
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
    fuedase = fuedase + op;
    contas->saldo = fuedase;
    fseek(fp, (-1)*sizeof(Salva), SEEK_CUR);
    fwrite(contas, sizeof(Salva), 1, fp);
    free(contas);
    fclose(fp);
  }
  else {
    system("clear||cls");   
    printf("\n");
    printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|\n");
    printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|\n");
        printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|\n");
        printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|\n");
        printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|\n");
        printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|\n");
        printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|\n");
    getchar();
        printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|\n");
    printf("\n"); 
    free(contas);
}
}
  // TO DO
  // ALTERAR TEXTOS
  
    fclose(fp);
}

/*

//sub-modulo 3 tela 6 (final se não funcionar)
void tela_ValorNao(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|         = = = = = nao foi possivel realizar a transacao ! = = = = =         |\n");
    printf("|                                                                             |\n");
    printf("|              [verifique os dados inseridos e tente novamente]\n             |\n");
    printf("|                                                                             |\n");
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
 printf("|            3. Histórico de transações                                       |\n");
} */

// ////////////////////////////     OBS: Tá Faltando a tela do histórico de transações ///////////////////////
// ////////////////////////////     va pro inferno gabriel ///////////////////////