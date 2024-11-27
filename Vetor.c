#include <stdio.h>

int main() {
    // Declaração e inicialização de um array de inteiros
    int numeros[5] = {10, 20, 30, 40, 50};

    // Acesso e exibição dos elementos do array
    printf("Elementos do Array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento na posição %d: %d\n", i, numeros[i]);
    }

    // Modificando um elemento do array
    numeros[2] = 99; // Substitui o valor na posição 2

    printf("\nArray após modificação:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento na posição %d: %d\n", i, numeros[i]);
    }

    return 0;
}
