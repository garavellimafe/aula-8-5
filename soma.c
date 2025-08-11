#include <stdio.h>

// Função recursiva para somar os n primeiros números
int soma(int n) {
    if (n == 0) return 0;
    return n + soma(n - 1);
}

int main() {
    int n = 4;
    int resultado = soma(n);
    printf("Soma de %d até 1 = %d\n", n, resultado);
    return 0;
}
