#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#define BUFFER 64
#define LIMPA_TELA system("cls")

Dados* inicio = NULL;
Dados*  final = NULL;

void insere()
{
     int     age;
    char   *nome;
    char  *email;
    double telefone;

    LIMPA_TELA;

    nome  = (char*) malloc(sizeof(BUFFER));
    email = (char*) malloc(sizeof(BUFFER));

    printf("Digite o nome: ");
    scanf("%s",nome);

    printf("\nDigite a idade: ");
    scanf("%d",&age);

    printf("\nDigite o e-mail: ");
    scanf("%s",email);

    printf("\nDigite o telefone: ");
    scanf("%lf",&telefone);

    Dados *atual = (Dados*) malloc(sizeof(BUFFER));
    atual -> idade = age;
    atual -> proximo = NULL;

    atual -> nome = nome;
    atual -> proximo = NULL;

    atual -> email  = email;
    atual -> proximo = NULL;

    atual -> telefone = telefone;
    atual -> proximo = NULL;
    if(inicio == NULL)
    {
        inicio = final = atual;
    }
    else
    {
        final->proximo=atual;
        final=atual;
    }
    printf("\nValor inserido!\n");
    getchar();
}

void exclui()
{
    Dados *auxiliar;
    auxiliar= inicio -> proximo;
    free(inicio);

    inicio = auxiliar;
    printf("\nValor excluido!\n");
    printf("--------------------------------------");
    getchar();
}
void mostra()
{
    int posicao=0;
    Dados *nova = inicio;
    LIMPA_TELA;
    printf("     DADOS DA FILA DINAMICA:  ");
    for (; nova != NULL; nova = nova->proximo)
    {
        posicao++;
        printf("\n----------------------------------");
        printf("\nPosicao: %d ",posicao);
        printf("\nNome: %s",nova->nome);
        printf("\nIdade: %d anos",nova->idade);
        printf("\nE-mail: %s",nova->email);
        printf("\nTelefone: %lf",nova->telefone);
        printf("\n----------------------------------");
    }
    getchar();
}

void mostra_erro()
{
    LIMPA_TELA;
    printf("\nDigite uma opção valida (pressione -Enter- p/ continuar)!\n\n");
    printf("--------------------------------------");
    getchar();
}
