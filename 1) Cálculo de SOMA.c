// 1) Cálculo de SOMA
#include <stdio.h>

int main() {
    int INDICE = 13, SOMA = 0, K = 0;
    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }
    printf("Valor final de SOMA: %d\n", SOMA);
    return 0;
}

