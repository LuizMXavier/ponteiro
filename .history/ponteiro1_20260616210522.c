#include <stdio.h>


typedef struct {
    int id;
    char produto[50];
    int qtn;
    float preco;
} Produto;


void aplicar_desconto(Produto *ptr_prod, float percentual) {
    
    ptr_prod->preco = ptr_prod->preco - (ptr_prod->preco * (percentual / 100.0f));
}

void  imprimir_produtos(Produto *produto, float qnt ){

}

int main() {

    Produto prod1;
    prod1.id = 101;
    prod1.produto = "Jaca";
    prod1.preco = 100.0;
     
    
    float desconto = 10.0; 

    printf("Produto ID: %d | Preco Original: R$ %.2f\n", prod1.id, prod1.preco);


    aplicar_desconto(&prod1, desconto);


    printf("Produto ID: %d | Preco com Desconto: R$ %.2f\n", prod1.id, prod1.preco);

    return 0;
}