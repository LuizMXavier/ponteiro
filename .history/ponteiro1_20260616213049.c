#include <stdio.h>

int main() {
   
    float preco = 100.0f;
    
   
    float *ptr_preco = &preco;
    
    // 3. Através exclusivamente do ponteiro, aplica o aumento de 10%
    // O operador * (desreferenciação) acessa o valor no endereço apontado
    *ptr_preco = *ptr_preco * 1.10f;
    
    // 4. Imprime o valor da variável original para comprovar a alteração
    printf("Preco alterado: R$ %.2f\n", preco);
    
    return 0;
}