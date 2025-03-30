// 4) Cálculo percentual de faturamento por estado
#include <stdio.h>

int main() {
    double SP = 67836.43, RJ = 36678.66, MG = 29229.88, ES = 27165.48, Outros = 19849.53;
    double total = SP + RJ + MG + ES + Outros;
    
    printf("Percentual de representação por estado:\n");
    printf("SP: %.2f%%\n", (SP / total) * 100);
    printf("RJ: %.2f%%\n", (RJ / total) * 100);
    printf("MG: %.2f%%\n", (MG / total) * 100);
    printf("ES: %.2f%%\n", (ES / total) * 100);
    printf("Outros: %.2f%%\n", (Outros / total) * 100);
    
    return 0;
}
