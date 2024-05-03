#include <stdio.h>

void regr(int n) {
    if (n == 0) {
        printf("0\n");
    } else {
        printf("%d ", n);
        regr(n - 1);
    }
}


void bin(int n) {
    if (n > 0) {
        bin(n / 2);
        printf("%d", n % 2);
    }
}

int main() {
    int numero;

    printf("Digite um numero para a contagem regressiva: ");
    scanf("%d", &numero);
    regr(numero);

    printf("\nDigite um numero para exibir em binario: ");
    scanf("%d", &numero);
    printf("O numero %d em binario: ", numero);
    bin(numero);
    printf("\n");

    return 0;
}