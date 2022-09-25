#include <stdio.h>
#include <stdlib.h>

/////
// Assinatura das funções
char tela_conta(void);
void criar_conta(void);
void tela_principal(void);
void tela_deposito(void);
void tela_saque(void);
void tela_transacoes(void);
void tela_cambio(void);
void tela_dolar(void);
void tela_euro(void);
//modulo 1
void tela_contaNome(void);
void tela_contaCPF(void);
void tela_contaRG(void);
void tela_contaConcluida(void);
//modulo 2
void entrar_CPF(void);
void entrar_senha(void);
void entrar_load(void);
//modulo 3
void mudar_CPF(void);
void mudar_senha(void);
//modulo 4
void deletar_CPF(void);
void deletar_senha(void);
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
    printf("               Escolha uma opção acima:");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n");
}
void criar_conta(void) {
    tela_contaNome();
    tela_contaCPF();
    tela_contaRG();
    tela_contaConcluida();
}
// modulo 1
void tela_contaNome(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Criação de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                          Digite seu nome completo:\n                        |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}
// modulo 1 tela 2
void tela_contaCPF(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Criação de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                          Digite seu CPF:\n                                  |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}
// modulo 1 tela 3
void tela_contaRG(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|                    = = = = = Criação de conta = = = = =                     |\n");
    printf("|                                                                             |\n");
    printf("|                              Digite seu RG:\n                               |\n");
    scanf("%c", &op);
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}
// modulo 1 tela 4 (final)
void tela_contaConcluida(void) {
    char op;
    system("clear||cls");   
    printf("\n");
    printf("|=============================================================================|\n");
    printf("|                                                                             |\n");
    printf("|               = = = = = Conta criada com sucesso ! = = = = =                |\n");
    printf("|                                                                             |\n");
    printf("|                  [Obrigado por confiar em nossos serviços]                  |\n");
    printf("|                                                                             |\n");
    getchar();
    printf(".=============================================================================.\n");
    printf("\n"); 
}
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


                                                                                                                                                   