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
    Produto prod2;
    Produto prod3;
    
    
    prod1.id = 101;
    prod1.produto = "Jaca";
    prod1.preco = 100.0;
    prod1.qtn = 20;
    
    prod2.id = 101;
    prod2.produto = "Jaca";
    prod2.preco = 100.0;
    prod2.qtn = 20;

    prod3.id = 77;
    prod3.produto = "Uva";
    prod3.preco = 50.0;
    prod3.qtn = 10;
    

    float desconto = 10.0; 

    printf("Produto ID: %d | Preco Original: R$ %.2f\n", prod1.id, prod1.preco);


    aplicar_desconto(&prod1, desconto);


    printf("Produto ID: %d | Preco com Desconto: R$ %.2f\n", prod1.id, prod1.preco);

    return 0;
}