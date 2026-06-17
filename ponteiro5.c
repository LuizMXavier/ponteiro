#include <stdio.h>
#include <stdlib.h> 


typedef struct {
    int id;
    float preco;
} Produto;


void imprimir_produtos(Produto *ptr, int quantidade) {
    printf("\n--- RELATORIO DE ESTOQUE DINAMICO ---\n");
    for (int i = 0; i < quantidade; i++) {
        
        printf("Produto %d -> ID: %d | Preco: R$ %.2f\n", i + 1, (ptr + i)->id, (ptr + i)->preco);
    }
    printf("-------------------------------------\n");
}

int main() {
    int quantidade;
    Produto *estoque = NULL; 

    
    printf("Quantos produtos deseja cadastrar? ");
    if (scanf("%d", &quantidade) != 1 || quantidade <= 0) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    
    
    estoque = (Produto *) malloc(quantidade * sizeof(Produto));

    
    if (estoque == NULL) {
        printf("Erro: Memoria insuficiente!\n");
        return 1; 
    }

    
    printf("\n--- CADASTRO DE PRODUTOS ---\n");
    for (int i = 0; i < quantidade; i++) {
        
        printf("Digite o ID do produto %d: ", i + 1);
        scanf("%d", &(estoque + i)->id); 
        
        printf("Digite o preco do produto %d: ", i + 1);
        scanf("%f", &(estoque + i)->preco); 
    }

   
    imprimir_produtos(estoque, quantidade);

    free(estoque);
    estoque = NULL; 

    printf("\nMemoria desalocada com sucesso. Programa finalizado.\n");
    return 0;
}