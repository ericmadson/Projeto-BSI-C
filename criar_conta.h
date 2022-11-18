//assinatura das funções


int tela_cadastro(void);
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
void exibeConta(Salva*);

// deletar conta
int listaContas(void);
void tela_nao(void);
void excluirConta(void);
int buscarConta(char CPF[12], char senha[7]);
void deletar_conta(void);
void deletar_nao(void);

