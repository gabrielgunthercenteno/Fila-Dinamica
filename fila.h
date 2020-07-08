#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

struct Fila{
    int    idade;
    char   *nome;
    char  *email;
    double telefone;
    struct Fila* proximo;
};
typedef struct Fila Dados;

extern Dados* inicio;
extern Dados*  final;

void insere();
void exclui();
void mostra();
void mostra_erro();

#endif // FILA_H_INCLUDED
