#include <stdio.h>


typedef struct {
    int id;
    float preco;
} Produto;


void aplicar_desconto(Produto *ptr_prod, float percentual) {
    
    ptr_prod->preco = ptr_prod->preco - (ptr_prod->preco * (percentual / 100.0f));
}

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
        {102, 120.0},
        {103, 300.0}
    };
    

    printf("Estoque Inicial:");
    imprimir_produtos(estoque, 3); // O nome do array 'estoque' decai automaticamente para um ponteiro

    // 2. Aplicando descontos em produtos específicos usando aritmética de ponteiros para testar
    printf("\nAplicando 10%% de desconto no segundo produto (ID 102)...");
    aplicar_desconto((estoque + 1), 10.0f); // (estoque + 1) aponta para a segunda posição

    printf("\nAplicando 20%% de desconto no terceiro produto (ID 103)...");
    aplicar_desconto((estoque + 2), 20.0f); // (estoque + 2) aponta para a terceira posição

    // Exibe o estoque atualizado
    printf("\nEstoque Final (Apos Descontos):");
    imprimir_produtos(estoque, 3);

    return 0;
}