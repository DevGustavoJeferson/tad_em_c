#include <stdio.h>
#include "estoque.h"

int main(){
    Produto produto1 = {1 ,"Banana" ,20 ,2.99};
    adicionar_estoque(&produto1,30);
    remover_estoque(&produto1,20);
    verificar_produto(produto1);
    return 0;
}