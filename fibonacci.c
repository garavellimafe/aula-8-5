#include <stdio.h>

// Função recursiva para calcular o n-ésimo termo da sequência de Fibonacci
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int i, n;

    // Solicita ao usuário o número de termos
    printf("Digite quantos termos da sequência de Fibonacci deseja ver: ");
    scanf("%d", &n);

    // Validação da entrada
    if (n <= 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
    } else {
        printf("Sequência de Fibonacci (%d primeiros termos):\n", n);
        for (i = 0; i < n; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }

    return 0;
}
