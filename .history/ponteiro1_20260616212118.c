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

    // 1. Pergunta ao usuário o tamanho do estoque
    printf("Quantos produtos deseja cadastrar? ");
    if (scanf("%d", &quantidade) != 1 || quantidade <= 0) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    // 2. Aloca memória dinamicamente
    // O malloc reserva: (quantidade de itens) * (tamanho em bytes de cada Produto)
    estoque = (Produto *) malloc(quantidade * sizeof(Produto));

    // BOA PRÁTICA: Sempre verificar se o sistema conseguiu alocar a memória
    if (estoque == NULL) {
        printf("Erro: Memoria insuficiente!\n");
        return 1; 
    }

    // 3. Preenche o array iterando exclusivamente com aritmética de ponteiros
    printf("\n--- CADASTRO DE PRODUTOS ---\n");
    for (int i = 0; i < quantidade; i++) {
        // (estoque + i) calcula o endereço correto de cada posição
        printf("Digite o ID do produto %d: ", i + 1);
        scanf("%d", &(estoque + i)->id); // Passamos o endereço do campo ID
        
        printf("Digite o preco do produto %d: ", i + 1);
        scanf("%f", &(estoque + i)->preco); // Passamos o endereço do campo preco
    }

    // 4. Chama a função de impressão passando o ponteiro da memória alocada
    imprimir_produtos(estoque, quantidade);

    free(estoque);
    estoque = NULL; 

    printf("\nMemoria desalocada com sucesso. Programa finalizado.\n");
    return 0;
}