
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
char tela_conta();
void tela_sobre(void);
//modulo 6
void tela_equipe(void);

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
