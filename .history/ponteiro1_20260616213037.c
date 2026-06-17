#include <stdio.h>

int main() {
    // 1. Declara e inicializa a variável do tipo float
    float preco = 100.0f;
    
    // 2. Declara um ponteiro para float e o aponta para o endereço da variável preco
    float *ptr_preco = &preco;
    
    // 3. Através exclusivamente do ponteiro, aplica o aumento de 10%
    // O operador * (desreferenciação) acessa o valor no endereço apontado
    *ptr_preco = *ptr_preco * 1.10f;
    
    // 4. Imprime o valor da variável original para comprovar a alteração
    printf("Preco alterado: R$ %.2f\n", preco);
    
    return 0;
}