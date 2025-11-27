# 🧪 Nível 1 - Exercício 1 — **PESSOA**

🎯 *Objetivo:* Entender a estrutura básica de um TAD em C e começar a praticar modularização e uso de ponteiros.

---

## 🧠 Explicação do algoritmo

1. Criamos a variável `pessoa1`, utilizando a `struct Pessoa`.  
   Inicializamos os valores por **boas práticas**, evitando lixo de memória.

2. Entramos na função `definir_pessoa`  
   1. Utilizamos os parâmetros `&pessoa1, "Gustavo", 24`  
   2. Essa função faz **passagem de parâmetros por referência**.  
      👉 Como queremos **alterar os valores da struct**, usamos **ponteiro para struct**.

3. Entramos na função `mostrar_pessoa`  
   1. Utilizamos o parâmetro `pessoa1`, que representa nosso objeto.  
   2. Essa função apenas **mostra os valores**, sem alterá-los.  
      👉 Quando **não alteramos**, usamos apenas a instância `.nome / .idade`.

---

## ⚙️ Como compilar?

**🔹 Requisitos:**  
Estar na pasta do projeto e ter o compilador **GCC** instalado.

**🔹 Comandos no terminal (VS Code, Git Bash ou CMD):**
```bash
gcc main.c pessoa.c -o programa.exe
programa.exe
```

## 📤 Saída esperada

```
Nome: Gustavo
Idade: 24
```

## 📘 Aprendizagem — Nível 1

1. 🔗 **`pessoa.h` funciona como uma ponte de conexão**  
- Ele permite que outros arquivos conheçam a `struct Pessoa` e as funções declaradas.  
- É o ponto central para **modularização e reutilização de código**.

2. 💻 **Compilar manualmente pelo terminal**  
- Aprendi a usar o `gcc` para compilar múltiplos arquivos `.c`, gerando um executável.  
   ```bash
   gcc main.c pessoa.c -o programa.exe
   programa.exe
   ```
3. 🔄 **Quando usar passagem por referência ou por valor**

- **Referência (`&pessoa`)** → quando **preciso alterar** os dados da struct.
- **Valor (`pessoa`)** → quando **apenas uso os dados**, sem modificar.

4. 🧱 **Estrutura básica de um TAD (Tipo Abstrato de Dados)**

- `arquivo.h` → declaração da struct e das funções (**interface**).
- `arquivo.c` → implementação das funções (**lógica**).
- `main.c` → uso do TAD no programa (**aplicação**).

