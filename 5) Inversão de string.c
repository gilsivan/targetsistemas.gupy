// 5) Inversão de string
#include <stdio.h>
#include <string.h>

void inverterString(char *str) {
    int i, j;
    char temp;
    int len = strlen(str);
    
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];
    printf("Digite uma string: ");
    scanf("%99s", str);
    inverterString(str);
    printf("String invertida: %s\n", str);
    return 0;
}
