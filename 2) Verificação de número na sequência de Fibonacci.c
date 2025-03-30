// 2) Verificação de número na sequência de Fibonacci
#include <stdio.h>

int pertenceFibonacci(int num) {
    int a = 0, b = 1, temp;
    while (b < num) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return (b == num || num == 0);
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    if (pertenceFibonacci(num)) {
        printf("%d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", num);
    }
    return 0;
}

