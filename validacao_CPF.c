#include <stdio.h>
#include"validacao_CPF.h"
#include <stdlib.h>
#include <string.h>
#include "criar_conta.h"


int CPFvalidation(char *cpf){
  int i, j, digito1 = 0, digito2 =0;
  if(strlen(cpf) !=11) 
  {
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = CPF inválido = = = = =                         |\n");
    printf("|                                                                             |\n");
    printf("|                          Digite um CPF válido:\n                            |\n");
    printf("|                                                                             |\n");
    printf("|                         Pressione 0 para cancelar                           |\n");
    return 0;
  }
  else if((strcmp(cpf,"00000000000") == 0) || (strcmp(cpf,"11111111111") == 0) || (strcmp(cpf,"22222222222") == 0) ||(strcmp(cpf,"33333333333") == 0) || (strcmp(cpf,"44444444444") == 0) || (strcmp(cpf,"55555555555") == 0) ||(strcmp(cpf,"66666666666") == 0) || (strcmp(cpf,"77777777777") == 0) || (strcmp(cpf,"88888888888") == 0) ||(strcmp(cpf,"99999999999") == 0))
    {
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = CPF inválido = = = = =                         |\n");
    printf("|                                                                             |\n");
    printf("|                          Digite um CPF válido:\n                            |\n");
    printf("|                                                                             |\n");
    printf("|                         Pressione 0 para cancelar                           |\n");
    return 0;
  }
  else {
    for(i = 0, j = 10; i < strlen(cpf)-2; i++, j--)
        digito1 += (cpf[i]-48) * j;
    digito1 %= 11;
    if(digito1 < 2)
        digito1 = 0;
    else
        digito1 = 11 - digito1;
    if((cpf[9]-48) != digito1) 
    {
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = CPF inválido = = = = =                         |\n");
    printf("|                                                                             |\n");
    printf("|                          Digite um CPF válido:\n                            |\n");
    printf("|                                                                             |\n");
    printf("|                         Pressione 0 para cancelar                           |\n");
    return 0;
  }
    else 
    {
      for(i = 0, j = 11; i < strlen(cpf)-1; i++, j--)
    digito2 += (cpf[i]-48) * j;
    digito2 %= 11;
    if(digito2 < 2)
        digito2 = 0;
    else
        digito2 = 11 - digito2;
    if((cpf[10]-48) != digito2)
    {
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = CPF inválido = = = = =                         |\n");
    printf("|                                                                             |\n");
    printf("|                          Digite um CPF válido:\n                            |\n");
    printf("|                                                                             |\n");
    printf("|                         Pressione 0 para cancelar                           |\n");
    return 0;
  }
    }
    }
    return 1;
    }