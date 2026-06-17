#include <stdio.h>


typedef struct {
    int id;
    float preco;
} Produto;


void aplicar_desconto(Produto *ptr_prod, float percentual) {
    
    ptr_prod->preco = ptr_prod->preco - (ptr_prod->preco * (percentual / 100.0f));
}

void  imprimir_produtos(Produto *produto, float qnt ){

}

int main() {

    Produto prod1;
    Produto prod2;
    Produto prod3;
    
    
    Produto estoque[3] = {
        {101, 50.0f},
        {102, 120.0f},
        {103, 300.0f}
    };
    

    float desconto = 10.0; 

    printf("Produto ID: %d | Preco Original: R$ %.2f\n", prod1.id, prod1.preco);


    aplicar_desconto(&prod1, desconto);


    printf("Produto ID: %d | Preco com Desconto: R$ %.2f\n", prod1.id, prod1.preco);

    return 0;
}