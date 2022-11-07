//assinatura das funções

void tela_cadastro(void);
typedef struct cadastro_conta Salva;
struct cadastro_conta {
    char nome[80];
    char CPF[20];
    char password[7];
    char status;
};

Salva* preencheAluno(void);
void gravaAluno(Salva*);
Salva* buscaCliente(void);