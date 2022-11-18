//assinatura das funções


void tela_cadastro(void);
typedef struct cadastro_conta Salva;
struct cadastro_conta {
    char nome[80];
    char CPF[12];
    char password[7];
    char status;
};
// gravação de conta
Salva* SalvaConta(void);
void gravacao(Salva*);
Salva* buscaCliente(void);
void exibeConta(Salva*);

// deletar conta
void listaContas(void);
void tela_nao(void);
void excluirConta(void);
Salva* buscaConta(void);
void deletar_conta(void);
void deletar_nao(void);

