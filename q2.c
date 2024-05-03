#include <stdio.h>

int main() {
    int numErros = 5; 

    if (numErros == 1) {
        printf("1 erro detectado\n");
    } else {
        printf("%d erros detectados\n", numErros);
    }

    return 0;
}