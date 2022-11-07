#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

typedef struct cadastro_conta Salva;

struct cadastro_conta {
    char nome;
    long int CPF;
    long int password;
    char status;
};

void gravaAluno(Salva*);
void salvaConta(Salva*);
int struct_conta() {
   
struct cadastro_conta;
    Salva* aln;
    aln = (Salva*) malloc(sizeof(Salva));
    system("clear||cls");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Criação de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                          Digite seu nome completo:\n                        |\n");
    scanf("%80[^\n]", &aln->nome);
    printf(".=============================================================================.\n");
    printf("\n");
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Criação de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                          Digite seu CPF:\n                                  |\n");
    scanf("%ld", aln->CPF);
    getchar();
    printf(".=============================================================================.\n");
    system("clear||cls"); 
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                           |\n");
    printf("|                    = = = = = Criação de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                          Digite sua senha: (apenas números)\n               |\n");
    scanf("%ld", aln->password);
    system("clear||cls");
    getchar();
    aln->status = 'm';
    return aln;
}

void gravaAluno(Salva* aln) {
    FILE* fps;
    fps = fopen("contas.dat", "ab");
    if (fps == NULL){
        printf("Ops ! Ocorreu um erro na abertura do arquivo!\n");
        printf("não é possível continuar este programa....\n");
        exit(1);
    }
    fwrite(aln, sizeof(Salva), 1, fps);
    fclose(fps);
}