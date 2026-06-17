#include <stdio.h>


void aplicar_desconto(float *preco, float percentual_desconto) {
   
    *preco = *preco - (*preco * (percentual_desconto / 100.0f));
}

int main() {
    float preco = 100.0f;
    float desconto = 10.0f; 
    float *ptr_preco = &preco;
    
    
    aplicar_desconto(ptr_preco, desconto);
    
   
    printf("O preco final com desconto eh: %.2f\n", *ptr_preco); 
    
    return 0;
}