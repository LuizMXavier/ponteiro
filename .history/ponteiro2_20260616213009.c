#include <stdio.h>


void aplicar_desconto(float *preco, float percentual_desconto) {
    // Ex: 100 - (100 * 0.10) = 90
    *preco = *preco - (*preco * (percentual_desconto / 100.0f));
}

int main() {
    float preco = 100.0f;
    float desconto = 10.0f; // 10% de desconto
    float *ptr_preco = &preco;
    
    // Passamos o ponteiro e o valor do desconto
    aplicar_desconto(ptr_preco, desconto);
    
    // O print original usando o ponteiro está correto!
    printf("O preco final com desconto eh: %.2f\n", *ptr_preco); 
    
    return 0;
}