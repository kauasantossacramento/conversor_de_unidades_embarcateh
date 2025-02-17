#include "Conversor_Volume.h"
#include <stdio.h>

// Implementação da função para converter volume
void converterVolume(float valor, int unidadeOrigem, int unidadeDestino) {
    float convertido;

    // Converte o valor para litros como base
    switch (unidadeOrigem) {
        case 1: // Litros
            convertido = valor;
            break;
        case 2: // Mililitros
            convertido = valor / 1000;
            break;
        case 3: // Metros cubicos
            convertido = valor * 1000;
            break;
        default:
            printf("Unidade de origem inválida!\n");
            return;
    }

    // Converte de litros para a unidade de destino
    switch (unidadeDestino) {
        case 1: // Litros
            printf("%.2f litros\n", convertido);
            break;
        case 2: // Mililitros
            printf("%.2f mililitros\n", convertido * 1000);
            break;
        case 3: // Metros cúbicos
            printf("%.2f metros cubicos\n", convertido / 1000);
            break;
        default:
            printf("Unidade de destino invalida!\n");
            return;
    }
}

// Implementação da função que encapsula a lógica do conversor de volume
void volume() {
    float valor;
    int unidadeOrigem, unidadeDestino;

    printf("\nConversor de unidades de volume\n");
    printf("Escolha a unidade de origem:\n");
    printf("1. Litros\n2. Mililitros\n3. Metros cubicos\n");
    printf("Digite sua escolha: ");
    scanf("%d", &unidadeOrigem);

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("Escolha a unidade de destino:\n");
    printf("1. Litros\n2. Mililitros\n3. Metros cubicos\n");
    printf("Digite sua escolha: ");
    scanf("%d", &unidadeDestino);

    printf("Resultado da conversao: ");
    converterVolume(valor, unidadeOrigem, unidadeDestino);
}
