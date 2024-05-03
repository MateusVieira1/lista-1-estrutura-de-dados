#include <stdio.h>


long long int fibonacci(int n) {
    
    if (n == 1 || n == 2){
        return 1;
    }
    else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    printf("Digite o valor de n (deve ser maior ou igual a 1): ");
    scanf("%d", &n);

    
    if (n < 1) {
        printf("Valor inválido para n. Deve ser maior ou igual a 1.\n");
        return 1;
        }
    long long int termo = fibonacci(n);

    printf("O %d-ésimo termo da sequência de Fibonacci é: %lld\n", n, termo);

    return 0;
}