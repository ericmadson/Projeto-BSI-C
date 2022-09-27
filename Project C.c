#include <stdio.h>
#include <stdlib.h>
#include "criar_conta.c"

/////
// Assinatura das funções
//sub-modulo 1
void tela_deposito(void);
void tela_saldo(void);
void tela_FazerDeposito(void);
void tela_depositoConcluido(void);
void tela_depositoNao(void);
//sub-modulo 2
void tela_saque(void);
void tela_FazerSaque(void);
void tela_saqueSim(void);
void tela_saqueNao(void);
//sub-modulo 3
void tela_transacoes(void);
void tela_FazerTransacoes(void);
void tela_ValorTransacoes(void);
void tela_ValorSim(void);
void tela_ValorNao(void);
//sub-modulo 4
void tela_cambio(void);
void tela_escolhaCambio(void);
void tela_FazerCambio(void);
void tela_CambioSim(void);
void tela_dolar(void);
void tela_euro(void);
//modulo 1
char tela_conta(void);
// void tela_contaNao(void);
//modulo 2
void tela_principal(void);
void entrar_CPF(void);
void entrar_senha(void);
void entrar_load(void);
void entrar_nao(void);
//modulo 3
void mudar_CPF(void);
void mudar_senha(void);
void mudar_nao(void);
void mudar_sim(void);
//modulo 4
void deletar_CPF(void);
void deletar_senha(void);
void deletar_nao(void);
void deletar_sim(void);
//modulo 5
void tela_sobre(void);
//modulo 6
void tela_equipe(void);

/////
// Programa principal
int main(void) {
    char opcao;

    do {
        opcao = tela_conta();
        switch(opcao) {
            case '1':   criar_conta();
                        break;
            case '2':   // modulo entrar
                        break;
            case '3':   // modulo mudar senha
                        break;
            case '4':   // modulo deletar
                        break;
            case '5':   tela_sobre();
                        break;
            case '6':   tela_equipe();
                        break;
        } 	
    } while (opcao != '0');

    return 0;
}

/////
// Funções


char tela_conta(void) {
    char op;
    system("clear||cls");
    printf("\n");
    printf(".=============================================================================.\n");
    printf("|                                                                             |\n");
    printf("|             Universidade Federal do Rio Grande do Norte                     |\n");
    printf("|                   Centro de Ensino Superior do Seridó                       |\n");
    printf("|                 Departamento de Computação e Tecnologia                     |\n");
    printf("|                    Disciplina DCT1106 -- Programação                        |\n");
    printf("|                 Sistema de Controle de Contas Bancárias                     |\n");
    printf("|        Developed by @igwbriel and @ericmadsonn -- since august, 2022        |\n");
    printf("|                                                                             |\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|         = = = = = Sistema de Controle de Contas Bancárias = = = = =         |\n");
    printf("|                                                                             |\n");
    printf("|              1. Criar conta                                                 |\n");
    printf("|              2. Entrar na conta                                             |\n");
    printf("|              3. Mudar senha                                                 |\n");
    printf("|              4. Deletar conta                                               |\n");
    printf("|              5. Sobre                                                       |\n");
    printf("|              6. Equipe                                                      |\n");
    printf("|              0. Sair                                                        |\n");
    printf("|                                                                             |\n");
    printf(".=============================================================================.\n");
    printf("               Escolha uma opção acima: ");
    scanf("%c", &op);
    getchar();
    printf("\n");
    return op;
}
// modulo 1

// modulo 1 tela final (se não funcionar)
/* void tela_contaNao(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|               = = = = = falha na criacao da conta ! = = = = =               |\n");
    printf("|                                                                             |\n");
    printf("|                [CPF, RG ou nome invalidos, tente novamente]\n               |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
} */

// modulo 2 tela 1
void entrar_CPF(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Entrando na conta = = = = =                    |\n");
    printf("|                                                                             |\n");
    printf("|                              Digite seu CPF:\n                              |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}
// modulo 2 tela 2
void entrar_senha(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Entrando na conta = = = = =                    |\n");
    printf("|                                                                             |\n");
    printf("|                             Digite sua senha:\n                             |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}
//modulo 2 tela 3
void entrar_load(void) {
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                  = = = = = carregando sua conta = = = = =                   |\n");
    printf("|                                                                             |\n");
    printf("|                                 °\n                                         |\n");
    _sleep(1);
    printf("|                                       °\n                                   |\n");
    _sleep(2);
    printf("|                                 °\n                                         |\n");
    _sleep(3);
    printf("|                                [pronto]                                     |\n");
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}

//modulo 2 tela final se funcionar 
void entrar_nao(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|            = = = = = nao foi possivel entrar na conta ! = = = = =           |\n");
    printf("|                                                                             |\n");
    printf("|                 [CPF ou senha invalidos, tente novamente]\n                 |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
}

//modulo 2 tela principal
void tela_principal(void) {
    char op;
    system("clear||cls");
    printf("\n");
    printf(".=============================================================================.\n");
    printf("|                                                                             |\n");
    printf("|             Universidade Federal do Rio Grande do Norte                     |\n");
    printf("|                   Centro de Ensino Superior do Seridó                       |\n");
    printf("|                 Departamento de Computação e Tecnologia                     |\n");
    printf("|                    Disciplina DCT1106 -- Programação                        |\n");
    printf("|                 Sistema de Controle de Contas Bancárias                     |\n");
    printf("|        Developed by @igwbriel and @ericmadsonn -- since august, 2022        |\n");
    printf("|                                                                             |\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|         = = = = = Sistema de Controle de Contas Bancárias = = = = =         |\n");
    printf("|                                                                             |\n");
    printf("|              1. Realizar depósito                                           |\n");
    printf("|              2. Realizar saque                                              |\n");
    printf("|              3. Realizar transações                                         |\n");
    printf("|              4. Câmbio para moeda nacional                                  |\n");
    printf("|              0. Sair                                                        |\n");
    printf("|                                                                             |\n");
    printf("               Escolha uma opção acima: ");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
}

// sub-modulo 1 tela 1
void tela_deposito (void) { 
    char op;                                                            
    system("clear||cls");                                                                       
    printf("\n");                                                                                       
    printf(".=============================================================================.\n");
    printf("|                                                                             |\n");
    printf("|            ===================================================              |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = = = =              |\n");
    printf("|         = = = = = Sistema de Controle de Contas Bancárias = = = = =         |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = = = =              |\n");
    printf("|            ===================================================              |\n");
    printf("|        Developed by @igwbriel and @ericmadsonn -- since august, 2022        |\n");
    printf("|                                                                             |\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|            = = = = = = = =  Menu Depósito  = = = = = = = =                  |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|                                                                             |\n");
    printf("|            1. Ver saldo da conta                                            |\n");
    printf("|            2. Depositar                                                     |\n");
    printf("|            0. Voltar ao menu anterior                                       |\n");
    printf("|                                                                             |\n");
    printf("|            Escolha a opção desejada:  ");
    scanf("%c", &op);
    getchar();
    printf("|                                                                             |\n");
    printf(".=============================================================================.\n");
    printf("\n");
}
//sub-modulo 1 tela 2
void tela_saldo(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|            = = = = = = = =  Menu Depósito  = = = = = = = =                  |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|                                                                             |\n");
    printf("|                    O saldo da sua conta e' xxxxxxx R$ !                     |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}
//sub-modulo 1 tela 3
void tela_FazerDeposito(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|            = = = = = = = =  Menu Depósito  = = = = = = = =                  |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|                                                                             |\n");
    printf("|                    digite o valor que deseja depositar:                     |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}
//sub-modulo 1 tela final (se funcionar)
void tela_depositoConcluido(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|               = = = = = = = = = = = = = = = = = = = = = = = =               |\n");
    printf("|               = = = deposito realizado com sucesso !!!  = = =               |\n");
    printf("|               = = = = = = = = = = = = = = = = = = = = = = = =               |\n");
    printf("|                                                                             |\n");
    printf("|                  [Obrigado por confiar em nossos serviços]                  |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}
//sub-modulo 1 tela final (se não funcionar)
void tela_depositoNao(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|               = = = = = Falha ao realizar o deposito ! = = = = =            |\n");
    printf("|                                                                             |\n");
    printf("|              [verifique os dados inseridos e tente novamente]\n             |\n");
    printf("|                                                                             |\n");
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}

// sub-modulo 2 tela 1
void tela_saque (void) { 
    char op;                                                              
    system("clear||cls");                                                                       
    printf("\n");                                                                                       
    printf(".=============================================================================.\n");
    printf("|                                                                             |\n");
    printf("|            ===================================================              |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = = = =              |\n");
    printf("|         = = = = = Sistema de Controle de Contas Bancárias = = = = =         |\n");
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
    printf("|            Escolha a opção desejada:                                        |\n");
    scanf("%c", &op);
    getchar();
    printf("|                                                                             |\n");
    printf("|                                                                             |\n");
    printf(".=============================================================================.\n");
    printf("\n");
}
//sub-modulo 2 tela 2/////////////////
void tela_saldo(void);
//////////////////////////////////////

//sub-modulo 2 tela 3
void tela_FazerSaque(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|               = = = = = = = = = = = = = = = = = = = = = = = =               |\n");
    printf("|               = = = = = = = =  Menu Saque = = = = = = = = = =               |\n");
    printf("|               = = = = = = = = = = = = = = = = = = = = = = = =               |\n");
    printf("|                                                                             |\n");
    printf("|                      digite o valor que deseja sacar:                       |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}

//sub-modulo 2 tela final (se não funcionar)
void tela_saqueNao(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|               = = = = = Falha ao realizar o saque ! = = = = =               |\n");
    printf("|                                                                             |\n");
    printf("|              [verifique os dados inseridos e tente novamente]\n             |\n");
    printf("|                                                                             |\n");
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}

//sub-modulo 2 tela final (se funcionar)
void tela_saqueSim(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|              = = = = = saque realizado com sucesso ! = = = = =              |\n");
    printf("|                                                                             |\n");
    printf("|                  [Obrigado por confiar em nossos serviços]\n                |\n");
    printf("|                                                                             |\n");
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}

// sub-modulo 3 tela 1
void tela_transacoes (void) {  
    char op;                                                            
    system("clear||cls");                                                                       
    printf("\n");                                                                                       
    printf(".=============================================================================.\n");
    printf("|                                                                             |\n");
    printf("|            ===================================================              |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = = = =              |\n");
    printf("|         = = = = = Sistema de Controle de Contas Bancárias = = = = =         |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = = = =              |\n");
    printf("|            ===================================================              |\n");
    printf("|        Developed by @igwbriel and @ericmadsonn -- since august, 2022        |\n");
    printf("|                                                                             |\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|            = = = = = = = Menu Transações = = = = = = = = =                  |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|                                                                             |\n");
    printf("|            1. Ver saldo da conta                                            |\n");
    printf("|            2. realizar transação                                            |\n");
    printf("|            3. Histórico de transações                                       |\n");
    printf("|            0. Voltar ao menu anterior                                       |\n");
    printf("|                                                                             |\n");
    printf("|            Escolha a opção desejada:                                        |\n");
    scanf("%c", &op);
    getchar();
    printf("|                                                                             |\n");
    printf("|                                                                             |\n");
    printf(".=============================================================================.\n");
    printf("\n");
}
//sub-modulo 3 tela 2/////////////////
void tela_saldo(void);
//////////////////////////////////////

//sub-modulo 3 tela 3
void tela_FazerTransacoes(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|               = = = = = = = = = = = = = = = = = = = = = = = =               |\n");
    printf("|                = = = = = = =  Menu transacoes = = = = = = =                 |\n");
    printf("|               = = = = = = = = = = = = = = = = = = = = = = = =               |\n");
    printf("|                                                                             |\n");
    printf("|                digite o CPF da conta que deseja transferir:                 |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}

//sub-modulo 3 tela 4
void tela_ValorTransacoes(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|               = = = = = = = = = = = = = = = = = = = = = = = =               |\n");
    printf("|                = = = = = = =  Menu transacoes = = = = = = =                 |\n");
    printf("|               = = = = = = = = = = = = = = = = = = = = = = = =               |\n");
    printf("|                                                                             |\n");
    printf("|                     digite o valor a ser transferido:                      |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}

//sub-modulo 3 tela 5 (final se funcionar)
void tela_ValorSim(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|            = = = = = transaçao concluida com sucesso ! = = = = =            |\n");
    printf("|                                                                             |\n");
    printf("|                  [Obrigado por confiar em nossos serviços]\n                |\n");
    printf("|                                                                             |\n");
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}

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
}

// sub-modulo 4 tela 1
void tela_cambio (void) { 
    char op;                                                             
    system("clear||cls");                                                                       
    printf("\n");                                                                                       
    printf(".=============================================================================.\n");
    printf("|                                                                             |\n");
    printf("|            ===================================================              |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = = = =              |\n");
    printf("|         = = = = = Sistema de Controle de Contas Bancárias = = = = =         |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = = = =              |\n");
    printf("|            ===================================================              |\n");
    printf("|        Developed by @igwbriel and @ericmadsonn -- since august, 2022        |\n");
    printf("|                                                                             |\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|            = = = = = = =   Menu Câmbio   = = = = = = = = =                  |\n");
    printf("|            = = = = = = = = = = = = = = = = = = = = = = = =                  |\n");
    printf("|                                                                             |\n");
    printf("|            1. Ver saldo da conta                                            |\n");
    printf("|            2. Realizar câmbio                                               |\n");
    printf("|            3. Visualizar cotação do dolár                                   |\n");
    printf("|            4. Visualizar cotação do euro                                    |\n");
    printf("|            0. Voltar ao menu anterior                                       |\n");
    printf("|                                                                             |\n");
    printf("|            Escolha a opção desejada:                                        |\n");
    scanf("%c", &op);
    getchar();
    printf("|                                                                             |\n");
    printf("|                                                                             |\n");
    printf(".=============================================================================.\n");
    printf("\n");
}
//sub-modulo 4 tela 1/////////////////
void tela_saldo(void);
//////////////////////////////////////

//sub-modulo 4 tela 2
void tela_escolhaCambio(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|               = = = = = = = = = = = = = = = = = = = = = = = =               |\n");
    printf("|               = = = = = = = =  Menu cambio = = = = = = = = = =              |\n");
    printf("|               = = = = = = = = = = = = = = = = = = = = = = = =               |\n");
    printf("|                                                                             |\n");
    printf("|                      Qual moeda deseja converter:                           |\n");
    printf("|                                                                             |\n"); 
    printf("|                      1.Dolar                                                |\n"); 
    printf("|                      2.Euro                                                 |\n");  
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}

void tela_FazerCambio(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|               = = = = = = = = = = = = = = = = = = = = = = = =               |\n");
    printf("|               = = = = = = = =  Menu cambio = = = = = = = = = =              |\n");
    printf("|               = = = = = = = = = = = = = = = = = = = = = = = =               |\n");
    printf("|                                                                             |\n");
    printf("|                    Digite o valor que deseja converter:                     |\n");  
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}

void tela_CambioSim(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|              = = = = = Cambio concluido com sucesso ! = = = = =             |\n");
    printf("|                                                                             |\n");
    printf("|                  [Obrigado por confiar em nossos serviços]\n                |\n");
    printf("|                                                                             |\n");
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}

//sub-modulo 4 tela 3
void tela_dolar(void) {
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                = = = = = Cotação do Dólar (05/09/22) = = = = =              |\n");
    printf("|                                                                             |\n");
    printf("|                           1 Dólar : 5,16 Reais                              |\n");
    printf("|                                                                             |\n"); 
    printf(".=============================================================================.\n");
    getchar();
    printf("\n");                                                                             
}
//sub-modulo 4 tela 4
void tela_euro(void) {
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                = = = = = Cotação do Euro (05/09/22) = = = = =               |\n");
    printf("|                                                                             |\n");
    printf("|                            1 Euro : 5,12 Reais                              |\n");
    printf("|                                                                             |\n"); 
    printf(".=============================================================================.\n");
    getchar();
    printf("\n");                                                                              
}                                                                                                     

//modulo 3 tela 1
void mudar_CPF(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Alterando a senha = = = = =                    |\n");
    printf("|                                                                             |\n");
    printf("|                   Digite o CPF da conta a ser alterada:\n                   |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}
//modulo 3 tela 2
void mudar_senha(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Alterando a senha = = = = =                    |\n");
    printf("|                                                                             |\n");
    printf("|                  Digite a senha da conta a ser alterada:\n                  |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}

//modulo 3 tela final se funcionar 
void mudar_sim(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|           = = = = = sua senha foi alterada com sucesso ! = = = = =          |\n");
    printf("|                                                                             |\n");
    printf("|                 [Obrigado por confiar em nossos serviços]\n                 |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
}

//modulo 3 tela final se funcionar 
void mudar_nao(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|           = = = = = nao foi possivel alterar sua senha ! = = = = =          |\n");
    printf("|                                                                             |\n");
    printf("|                 [CPF ou senha invalidos, tente novamente]\n                 |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
}

//modulo 4 tela 1
void deletar_CPF(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|              = = = = = buscando conta a ser deletada = = = = =              |\n");
    printf("|                                                                             |\n");
    printf("|                   Digite o CPF da conta a ser deletada:\n                   |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
}
//modulo 4 tela 2
void deletar_senha(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|              = = = = = buscando conta a ser deletada = = = = =              |\n");
    printf("|                                                                             |\n");
    printf("|                  Digite a senha da conta a ser deletada:\n                  |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
}

//modulo 4 tela final se funcionar
void deletar_sim(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|              = = = = = Conta deletada com sucesso ! = = = = =               |\n");
    printf("|                                                                             |\n");
    printf("|                 [Obrigado por confiar em nossos serviços]\n                 |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
}

//modulo 4 tela final se não funcionar
void deletar_nao(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|           = = = = = Não foi possivel deletar a conta ! = = = = =            |\n");
    printf("|                                                                             |\n");
    printf("|                 [CPF ou senha invalidos, tente novamente]\n                 |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
}

// modulo 5 
void tela_sobre(void) {
    system("clear||cls");
    printf("\n");
    printf(".=============================================================================.\n");
    printf("|                                                                             |\n");
    printf("|             Universidade Federal do Rio Grande do Norte                     |\n");
    printf("|                 Centro de Ensino Superior do Seridó                         |\n");
    printf("|               Departamento de Computação e Tecnologia                       |\n");
    printf("|                  Disciplina DCT1106 -- Programação                          |\n");
    printf("|               Sistema de Controle de Contas Bancárias                       |\n");
    printf("|        Developed by @igwbriel and @ericmadsonn -- since august, 2022        |\n");
    printf("|                                                                             |\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|       = = = = = Sistema de Controle de Contas Bancárias = = = = =           |\n");
    printf("|                                                                             |\n");
    printf("|     Algumas pessoas físicas e a maioria das pessoas jurídicas dispõe de     |\n");
    printf("|     contas em vários bancos. O controle financeiro das várias contas de     |\n");
    printf("|     uma pessoa ou empresa demanda tempo e esforço, principalmente se for    |\n");
    printf("|     realizadoo sem a ajuda de um software. O presente projeto tem como      |\n");
    printf("|     objetivo desenvolver um programa de computador que realize o registro   |\n");
    printf("|     e o acompanhamento de operações financeiras de várias contas bancárias  |\n");
    printf("|     simulando as atividades que possam ocorrer em um banco real.            |\n");
    printf("|                                                                             |\n");    
    printf(".=============================================================================.\n");
    getchar();
    printf("\n");
}
//modulo 6
void tela_equipe(void) {
    system("clear||cls");   
    printf("\n");
    printf(".=============================================================================.\n");
    printf("|                                                                             |\n");
    printf("|               Universidade Federal do Rio Grande do Norte                   |\n");
    printf("|                   Centro de Ensino Superior do Seridó                       |\n");
    printf("|                 Departamento de Computação e Tecnologia                     |\n");
    printf("|                    Disciplina DCT1106 -- Programação                        |\n");
    printf("|                 Sistema de Controle de Contas Bancárias                     |\n");
    printf("|        Developed by @igwbriel and @ericmadsonn -- since august, 2022        |\n");
    printf("|                                                                             |\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|         = = = = = Sistema de Controle de Contas Bancárias = = = = =         |\n");
    printf("|                                                                             |\n");
    printf("|              This project was developed by:                                 |\n");
    printf("|                                                                             |\n");
    printf("|              Gabriel D. Oliveira                                            |\n");
    printf("|              E-mail: Gabreelzinn@gmail.com                                  |\n");
    printf("|              Redes sociais: @igwbriel                                       |\n");
    printf("|              Git: https://github.com/Igwbriel                               |\n");
    printf("|                                                                             |\n"); 
    printf("|              Eric M.A.M. De Oliveira                                        |\n");
    printf("|              E-mail: Ericmadson67@hotmail.com                               |\n");
    printf("|              Redes sociais: @ericmadsonn                                    |\n");
    printf("|              Git: https://github.com/ericmadson                             |\n");
    printf("|                                                                             |\n");
    printf(".=============================================================================.\n");
    getchar();
    printf("\n");                                                                           
}                                                                                                   

                                             