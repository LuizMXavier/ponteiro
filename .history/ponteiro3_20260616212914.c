#include <stdio.h>

typedef struct {
    int id;
    float preco;
} Produto;


void aplicar_desconto(Produto *ptr_prod, float percentual) {
    // O operador -> substitui a sintaxe (*ptr_prod).preco
    // Ele acessa diretamente o campo 'preco' do produto apontado
    ptr_prod->preco = ptr_prod->preco - (ptr_prod->preco * (percentual / 100.0f));
}

int main() {
    // 3. Declarando e inicializando a struct Produto
    Produto prod1;
    prod1.id = 101;
    prod1.preco = 100.0f; // Preço inicial
    
    float desconto = 15.0f; // 15% de desconto

    printf("Produto ID: %d | Preco Original: R$ %.2f\n", prod1.id, prod1.preco);

    // 4. Passando o endereço da struct para a função
    aplicar_desconto(&prod1, desconto);

    // 5. Exibindo o preço atualizado para comprovar a alteração na memória
    printf("Produto ID: %d | Preco com Desconto: R$ %.2f\n", prod1.id, prod1.preco);

    return 0;
}