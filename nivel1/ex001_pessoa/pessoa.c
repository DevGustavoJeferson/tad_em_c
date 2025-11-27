# include <stdio.h>
# include <string.h>
# include "pessoa.h"

void definir_pessoa(Pessoa *p, char nome[] ,int idade){
    strcpy(p->nome,nome);
    p->idade = idade;
}

void mostrar_pessoa(Pessoa p){
    printf("Nome: %s\n",p.nome);
    printf("Idade: %d\n",p.idade);
}