#include <stdio.h>

// Função recursiva para calcular o fatorial
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Caso base
    } else {
        return n * fatorial(n - 1); // Chamada recursiva
    }
}

int main() {
    int numero;

    // Solicita entrada do usuário
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    // Validação da entrada
    if (numero < 0) {
        printf("Número inválido! Digite apenas inteiros positivos.\n");
    } else {
        printf("Fatorial de %d = %d\n", numero, fatorial(numero));
    }

    return 0;
}
