# Gerenciamento de Memória e Ponteiros em C 🚀

Este repositório contém uma sequência de exercícios práticos em linguagem C focados no entendimento aprofundado de **Ponteiros**, **Passagem por Referência**, **Manipulação de Estruturas (Structs)**, **Aritmética de Ponteiros** e **Alocação Dinâmica de Memória**.

O projeto foi construído de forma incremental, onde cada atividade evoluiu o código anterior para resolver problemas mais complexos de gerenciamento de dados.

---

## 📌 Sumário das Atividades

1. [Atividade 1: Fundamentos de Ponteiros e Modificação Direta](#atividade-1-fundamentos-de-ponteiros-e-modificacao-direta)
2. [Atividade 2: Passagem por Referência](#atividade-2-passagem-por-referencia)
3. [Atividade 3: Ponteiros para Structs](#atividade-3-ponteiros-para-structs)
4. [Atividade 4: Aritmética de Ponteiros em Arrays](#atividade-4-aritmetica-de-ponteiros-em-arrays)
5. [Atividade 5: Alocação Dinâmica de Memória (malloc e free)](#atividade-5-alocacao-dinamica-de-memoria-malloc-e-free)

---

## 💻 Resolução dos Exercícios

### Atividade 1: Fundamentos de Ponteiros e Modificação Direta
**Conceito-chave:** Entender o operador de endereço (`&`) e o operador de desreferenciação (`*`).

Nesta etapa inicial, criamos uma variável `preco` e um ponteiro `ptr_preco` apontando para ela. A alteração do valor (aumento de 10%) foi feita exclusivamente manipulando o ponteiro, demonstrando que mudanças no valor apontado afetam diretamente a variável original.

* **`&preco`**: Obtém o endereço de memória da variável.
* **`*ptr_preco`**: Acessa/modifica o conteúdo guardado naquele endereço.

---

### Atividade 2: Passagem por Referência
**Conceito-chave:** Modificar variáveis fora do escopo local da função `main`.

A lógica de modificação foi movida para a função `aplicar_desconto`. Em C, a passagem de parâmetros padrão é feita por cópia (*passagem por valor*). Para permitir que a função alterasse o preço original, passamos o endereço de memória (`&preco`), caracterizando a *passagem por referência*.

---

### Atividade 3: Ponteiros para Structs
**Conceito-chave:** Abstração de dados e o operador seta (`->`).

Evoluímos o conceito isolado de preço para uma estrutura de dados chamada `Produto`, que agrupa um identificador (`id`) e um `preco`. 
Ao passar o ponteiro de uma struct para uma função, utilizamos o operador **`->`** (operador seta). Ele é um atalho sintático para `(*ponteiro).campo`, tornando o código mais limpo e legível.

---

### Atividade 4: Aritmética de Ponteiros em Arrays
**Conceito-chave:** Como arrays funcionam na memória e deslocamento de ponteiros.

Criamos um pequeno estoque estático composto por um array de 3 produtos. Para listar os itens, a função `imprimir_produtos` utilizou **aritmética de ponteiros** em vez dos colchetes tradicionais (`ptr[i]`).

* O nome de um array aponta nativamente para o seu primeiro elemento (posição `0`).
* A expressão `*(ptr + i)` ou `(ptr + i)->` calcula o endereço do próximo elemento multiplicando o índice `i` pelo tamanho (`sizeof`) da struct, saltando perfeitamente de um bloco de memória para o outro.

---

### Atividade 5: Alocação Dinâmica de Memória (malloc e free)
**Conceito-chave:** Gerenciamento manual da memória Heap.

Na última fase, eliminamos o limite estático de 3 produtos. O programa agora pergunta ao usuário quantos produtos deseja cadastrar em tempo de execução. 

* **`malloc()`**: Aloca um bloco contínuo de bytes na memória *Heap* baseado na quantidade informada pelo usuário.
* **Validação**: É feita uma checagem preventiva para garantir que o sistema operacional conseguiu liberar a memória solicitada (se `estoque == NULL`).
* **`free()`**: Como a linguagem C não possui coletor de lixo automático (*Garbage Collector*), a função `free()` é obrigatoriamente chamada no fim para devolver a memória ao sistema, evitando vazamentos de memória (*Memory Leaks*).

---
