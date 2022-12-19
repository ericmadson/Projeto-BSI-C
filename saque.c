#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "saldo.h"
#include "criar_conta.h"
#include "saque.h"
#include "menu_conta.h"

int menu_saque(void) {
    char opcao;

    do {
        opcao = tela_saque();
        switch(opcao) {
            case '1':  
                tela_saldo();
                break;

            case '2':   
                tela_FazerSaque();
                break;
        } 	
    
    } while (opcao != '0');

    return 0;
}

char tela_saque (void) { 
    char op;                                                              
    system("clear||cls");                                                                       
    printf("\n");                                                                                       
    printf(".=============================================================================.\n");
    printf("|                                                                             |\n");
    printf("|            ===================================================              |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = = = =              |\n");
    printf("|         = = = = = Sistema de Controle de Contas Bancarias = = = = =         |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = = = =              |\n");
    printf("|            ===================================================              |\n");
    printf("|        Developed by @igwbriel and @ericmadsonn -- since august, 2022        |\n");
    printf("|                                                                             |\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|            = = = = = = = =   Menu Saque    = = = = = = = =                  |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|                                                                             |\n");
    printf("|            1. Ver saldo da conta                                            |\n");
    printf("|            2. Sacar                                                         |\n");
    printf("|            0. Voltar ao menu anterior                                       |\n");
    printf("|                                                                             |\n");
    printf("|            Escolha a opcao desejada:                                        |\n");
    scanf("%c", &op);
    getchar();
    printf("|                                                                             |\n");
    printf("|                                                                             |\n");
    printf(".=============================================================================.\n");
    printf("\n");
    return op;
}

void tela_FazerSaque(void) {
    FILE* fp;
  fp = fopen("contas.dat", "r+b");
  Salva* contas;
  char out;
    float op;
  int achou;
  char procurado[15];
  float valor = 0;
if (fp == NULL) {
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                     = = = = = Saque revogado = = = = =                      |\n");
  printf("|                                                                             |\n");
  printf("|                   Ocorreu um erro na abertura do arquivo !:\n               |\n");
  printf("|                                                                             |\n");
  printf(".=============================================================================.\n");
  scanf("%c", &out);
  }

  system("clear||cls");
  printf("|=============================================================================|\n");
  printf("|                                                                             |\n");
  printf("|                     = = = = = Buscando conta = = = = =                      |\n");
  printf("|                                                                             |\n");
  printf("|                  Digite a senha atual: ");
  scanf(" %14[^\n]", procurado);
  getchar();
  printf(".=============================================================================.\n");
  contas = (Salva*) malloc(sizeof(Salva));
  achou = 0;
while((!achou) && (fread(contas, sizeof(Salva), 1, fp)))
 {
   if ((strcmp(contas->password, procurado) == 0) && (contas->status == '1')) 
   {
     achou = 1;
     valor = contas->saldo;
   }
 }
  if (achou) {
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|               = = = = = = = = = = = = = = = = = = = = = = = =               |\n");
    printf("|               = = = = = = = =  Menu Saque = = = = = = = = = =               |\n");
    printf("|               = = = = = = = = = = = = = = = = = = = = = = = =               |\n");
    printf("|                                                                             |\n");
    printf("|                      Digite o valor que deseja sacar: ");
    scanf("%f", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
    valor = valor - op;
    contas->saldo = valor;
    fseek(fp, (-1)*sizeof(Salva), SEEK_CUR);
    fwrite(contas, sizeof(Salva), 1, fp);
    getchar();
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|               = = = = = = = = = = = = = = = = = = = = = = = =               |\n");
    printf("|               = = = = = = = =  Menu Saque = = = = = = = = = =               |\n");
    printf("|               = = = = = = = = = = = = = = = = = = = = = = = =               |\n");
    printf("|                                                                             |\n");
    printf("|                      Saque realizado com sucesso!                           |\n");
    printf(".=============================================================================.\n");
    getchar();
    printf("\n"); 
    free(contas);
    fclose(fp);
  }
  else {
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|               = = = = = Falha ao realizar o saque ! = = = = =               |\n");
    printf("|                                                                             |\n");
    printf("|              [verifique os dados inseridos e tente novamente]\n             |\n");
    printf("|                                                                             |\n");
    printf(".=============================================================================.\n");
    getchar();
    printf("\n"); 
    free(contas);

}
}
