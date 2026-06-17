#include <stdio.h>

// Definição da struct Produto
typedef struct {
    int id;
    float preco;
} Produto;

// Função que aplica o desconto (mantida do passo anterior)
void aplicar_desconto(Produto *ptr_prod, float percentual) {
    ptr_prod->preco = ptr_prod->preco - (ptr_prod->preco * (percentual / 100.0f));
}

// OBRIGATÓRIO: Função que percorre e imprime o array usando aritmética de ponteiros
void imprimir_produtos(Produto *ptr, int quantidade) {
    printf("\n--- RELATORIO DE PRODUTOS ---\n");
    for (int i = 0; i < quantidade; i++) {
        
        
        printf("  ID: %d | Preco: R$ %.2f\n", (ptr + i)->id, (ptr + i)->preco);
    }
    printf("-----------------------------\n");
}

int main() {
    
    Produto estoque[3] = {
        {101, 50.0f},
        {102, 120.0f},
        {103, 300.0f}
    };
    
    // Exibe o estoque inicial
    printf("Estoque Inicial:");
    imprimir_produtos(estoque, 3); 

    
    printf("\nAplicando 10%% de desconto no segundo produto (ID 102)...");
    aplicar_desconto((estoque + 1), 10.0f); 

    printf("\nAplicando 20%% de desconto no terceiro produto (ID 103)...");
    aplicar_desconto((estoque + 2), 20.0f); 

    
    printf("\nEstoque Final (Apos Descontos):");
    imprimir_produtos(estoque, 3);

    return 0;
}