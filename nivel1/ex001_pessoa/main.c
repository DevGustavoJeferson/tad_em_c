#include <stdio.h>
#include "pessoa.h"

int main(){
    Pessoa pessoa1 = {0};
    definir_pessoa(&pessoa1,"Gustavo",24);
    mostrar_pessoa(pessoa1);

    return 0;
}