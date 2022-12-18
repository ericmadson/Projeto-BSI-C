//assinatura das funções


int tela_cadastro(void);
typedef struct cadastro_conta Salva;
struct cadastro_conta {
    char nome[80];
    char CPF[12];
    char password[7];
    char estado[3];
    char saldo[8];
    char status;
};
// gravação de conta
Salva* SalvaConta(void);
void gravacao(Salva*);
void exibeConta(Salva*);

// deletar conta
int listaContas(void);
int listaContasMenu(void);

char tela_listagem(void);
int listarPorEstado(void);
void tela_nao(void);
/*int excluirConta(void);*/
int buscarConta(char CPF[12], char senha[7]);
void deletar_conta(void);
void deletar_nao(void);
