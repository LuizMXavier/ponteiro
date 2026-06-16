#include <stdio.h>

// 1. Definição da struct Produto
typedef struct {
    int id;
    float preco;
} Produto;

// 2. Função atualizada para receber o ponteiro da struct
void aplicar_desconto(Produto *ptr_prod, float percentual) {
    // O operador -> substitui a sintaxe (*ptr_prod).preco
    // Ele acessa diretamente o campo 'preco' do produto apontado
    ptr_prod->preco = ptr_prod->preco - (ptr_prod->preco * (percentual / 100.0f));
}

int main() {
    // 3. Declarando e inicializando a struct Produto
    Produto prod1;
    prod1.id = 101;
    prod1.preco = 100.0f; 
    
    float desconto = 15.0f; 

    printf("Produto ID: %d | Preco Original: R$ %.2f\n", prod1.id, prod1.preco);


    aplicar_desconto(&prod1, desconto);


    printf("Produto ID: %d | Preco com Desconto: R$ %.2f\n", prod1.id, prod1.preco);

    return 0;
}