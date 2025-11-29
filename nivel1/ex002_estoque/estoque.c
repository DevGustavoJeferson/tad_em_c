#include <stdio.h>
#include <string.h>
#include "estoque.h"

void alterar_preco(Produto *p, float preco){
    p->preco = preco;
}
void adicionar_estoque(Produto *p, int quantidade){
    p->quantidade+= quantidade;
}
void remover_estoque(Produto *p, int quantidade){
    p->quantidade-= quantidade;
}
void verificar_produto(Produto p){
    printf("Nome do produto: %s\nQuantidade: %d\nPreco: %.2f",p.nome_produto,p.quantidade,p.preco);
}