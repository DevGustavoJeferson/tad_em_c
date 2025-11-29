# 🧪 Nível 1 - Exercício 2 — **ESTOQUE**

🎯 *Objetivo:* Entender a estrutura básica de um TAD em C e começar a praticar modularização e uso de ponteiros.

---

## 🧠 Explicação do algoritmo

1. Criamos a variável `produto1`, utilizando a `struct Produto`.  
   Inicializamos os valores.

2. Entramos na função `adicionar_estoque`  
   1. Utilizamos os parâmetros `&produto1, 30`  
   2. Essa função **Adiciona valores ao estoque**.  

3. Entramos na função `remover_estoque`  
   1. Utilizamos os parâmetros `&produto1, 20`.  
   2. Essa função **Remove valores do estoque**.  

4. Entramos na função `verificar_produto`
   1. Essa função apenas **mostra os valores**, sem alterá-los. 

---

## ⚙️ Como compilar?

**🔹 Requisitos:**  
Estar na pasta do projeto e ter o compilador **GCC** instalado.

**🔹 Comandos no terminal (VS Code, Git Bash ou CMD):**
```bash
gcc main.c estoque.c -o programa.exe
programa.exe
```

## 📤 Saída esperada

```
Nome do produto: Banana
Quantidade: 30
Preco: 2.99
```

