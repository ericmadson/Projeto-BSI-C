#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

// trocar mensagens de erro e sucesso para ficar genérico

int validacao_senha(char password[7]) {
    char pw = (int)strlen(password);
  if (((int)strlen(password) > 6) || ((int)strlen(password) < 6)) {
            system("clear||cls");   
            printf("\n");
            printf("|=============================================================================|\n");
            printf("|                                                                             |\n");
            printf("|               = = = = = Falha na criacao da conta ! = = = = =               |\n");
            printf("|                                                                             |\n");
            printf("|                   Digite a nova senha da sua conta: ");
            getchar();
            printf(".=============================================================================.\n");
            printf("\n");
            return 0;
        }
    if (isalpha(pw) == 1) {
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
        return 0;
    }
    return 1;
}