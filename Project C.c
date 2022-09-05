#include <stdio.h>
#include <stdlib.h>

/////
// Assinatura das funções
void tela_principal(void);
void tela_sobre(void);
void tela_equipe(void);
void tela_conta(void);
void tela_deposito(void);
void tela_saque(void);
void tela_transacoes(void);
void tela_cambio(void);
void tela_dolar(void);
void tela_euro(void);

/////
// Programa principal
int main(void) {
    tela_conta();
    tela_principal();
    tela_deposito();
    tela_saque();
    tela_transacoes();
    tela_cambio();
    tela_sobre();
    tela_equipe();
    tela_dolar();
    tela_euro();


    return 0;
}



/////
// Funções


void tela_conta(void) {
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
    printf("|              3. Atualizar dados                                             |\n");
    printf("|              4. Deletar conta                                               |\n");
    printf("|              5. Sobre                                                       |\n");
    printf("|              6. Equipe                                                      |\n");
    printf("|              0. Sair                                                        |\n");
    printf("|                                                                             |\n");
    printf(".=============================================================================.\n");
    printf("\n");
}


void tela_principal(void) {
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
    printf(".=============================================================================.\n");
    printf("\n");
}


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
    printf("\n");
}

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
    printf("\n");                                                                               
}                                                                                                   

void tela_deposito (void) {                                                             
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
    printf("|            Escolha a opção desejada:                                        |\n");
    printf("|                                                                             |\n");
    printf("|                                                                             |\n");
    printf(".=============================================================================.\n");
    printf("\n");
}

void tela_saque (void) {                                                             
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
    printf("|                                                                             |\n");
    printf("|                                                                             |\n");
    printf(".=============================================================================.\n");
    printf("\n");
}

void tela_transacoes (void) {                                                             
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
    printf("|                                                                             |\n");
    printf("|                                                                             |\n");
    printf(".=============================================================================.\n");
    printf("\n");
}

void tela_cambio (void) {                                                             
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
    printf("|                                                                             |\n");
    printf("|                                                                             |\n");
    printf(".=============================================================================.\n");
    printf("\n");


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
    printf("\n");                                                                               
}


}
