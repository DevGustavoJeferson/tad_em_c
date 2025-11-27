#ifndef PESSOA_H
#define PESSOA_H

typedef struct{
    char nome[20];
    int idade;
}Pessoa;

void definir_pessoa(Pessoa*p,char nome[],int idade);
void mostrar_pessoa(Pessoa p);

#endif