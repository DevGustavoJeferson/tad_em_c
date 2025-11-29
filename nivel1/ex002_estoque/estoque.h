#ifndef ESTOQUE_H
#define ESTOQUE_H

typedef struct
{
    int id_produto;
    char nome_produto[30];
    int quantidade;
    float preco;
}Produto;

void alterar_preco(Produto *p, float preco);
void adicionar_estoque(Produto *p, int quantidade);
void remover_estoque(Produto *p, int quantidade);
void verificar_produto(Produto p);

#endif
