// 3) Análise de faturamento mensal com JSON
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <jansson.h> // Biblioteca para manipulação de JSON

#define ARQUIVO_JSON "faturamento.json"

int main() {
    FILE *arquivo = fopen(ARQUIVO_JSON, "r");
    if (!arquivo) {
        printf("Erro ao abrir o arquivo JSON.\n");
        return 1;
    }
    
    fseek(arquivo, 0, SEEK_END);
    long tamanho = ftell(arquivo);
    rewind(arquivo);
    
    char *conteudo = (char *)malloc(tamanho + 1);
    fread(conteudo, 1, tamanho, arquivo);
    fclose(arquivo);
    conteudo[tamanho] = '\0';
    
    json_t *root;
    json_error_t error;
    root = json_loads(conteudo, 0, &error);
    free(conteudo);
    if (!root) {
        printf("Erro ao carregar JSON: %s\n", error.text);
        return 1;
    }
    
    double menor = __DBL_MAX__, maior = 0, soma = 0;
    int dias_validos = 0, dias_acima_media = 0;
    size_t index;
    json_t *item;
    
    json_array_foreach(root, index, item) {
        json_t *valor = json_object_get(item, "valor");
        if (!json_is_number(valor)) continue;
        
        double faturamento = json_number_value(valor);
        if (faturamento > 0) {
            if (faturamento < menor) menor = faturamento;
            if (faturamento > maior) maior = faturamento;
            soma += faturamento;
            dias_validos++;
        }
    }
    double media = soma / dias_validos;
    
    json_array_foreach(root, index, item) {
        json_t *valor = json_object_get(item, "valor");
        if (!json_is_number(valor)) continue;
        
        double faturamento = json_number_value(valor);
        if (faturamento > media) dias_acima_media++;
    }
    
    json_decref(root);
    
    printf("Menor faturamento: %.2f\n", menor);
    printf("Maior faturamento: %.2f\n", maior);
    printf("Dias acima da média: %d\n", dias_acima_media);
    return 0;
}
