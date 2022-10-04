#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "saldo.h"

void tela_saldo(void) {
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|            = = = = = = = = = = =  Saldo  = = = = = = = = =                  |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|                                                                             |\n");
    printf("|                    O saldo da sua conta é R$xxxxxxx  !                      |\n");
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}