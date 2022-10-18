#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

// trocar mensagens de erro e sucesso para ficar genérico

void validacao_senha(char password[]) {
    char pw = (int)strlen(password);
  if ((int)strlen(password) > 6) {
            getchar();
            system("clear||cls");   
            printf("\n");
            printf("|=============================================================================|\n");
            printf("|                                                                             |\n");
            printf("|               = = = = = Falha na criacao da conta ! = = = = =               |\n");
            printf("|                                                                             |\n");
            printf("|                [CPF, senha ou nome invalidos, tente novamente]\n            |\n");
            getchar();
            printf(".=============================================================================.\n");
            printf("\n");
        }
        else {
            if (isalpha(pw) == 0) {
                getchar();
                system("clear||cls");   
                printf("\n");
                printf("|=============================================================================|\n");
                printf("|                                                                             |\n");
                printf("|               = = = = = Falha na criacao da conta ! = = = = =               |\n");
                printf("|                                                                             |\n");
                printf("|                [CPF, senha ou nome invalidos, tente novamente]\n            |\n");
                getchar();
                printf(".=============================================================================.\n");
                printf("\n");
            }
            else {
                getchar();
                printf(".=============================================================================.\n");
                printf("\n"); 
                system("clear||cls");   
                printf("\n");
                printf("|=============================================================================|\n");
                printf("|                                                                             |\n");
                printf("|               = = = = = Conta criada com sucesso ! = = = = =                |\n");
                printf("|                                                                             |\n");
                printf("|                  [Obrigado por confiar em nossos serviços]\n                |\n");
                printf("|                                                                             |\n");
                getchar();
                printf(".=============================================================================.\n");
                printf("\n"); 
                
            }
        }
}