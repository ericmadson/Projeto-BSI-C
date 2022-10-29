#include <stdint.h>
#include <stdio.h>

int str() {
   
struct cadastro_conta {
    char nome[100];
    int cpf[15];
    int password[6];
};

struct cadastro_conta conta;
    printf("Nome do cliente: \n");
    fgets(conta.nome, 100,stdin);

    printf("Seu CPF: \n");
    scanf("%d", &conta.cpf, 15);

    printf("crie uma senha de 6 digitos para sua conta: ");
    scanf("%d", &conta.password, 6);


    printf("\n Nome: %s", conta.nome);
    printf("\n Nome: %d", conta.cpf);
    printf("\n Nome: %d", conta.password);


//por os "." e "-" no CPF




return 0;
}


