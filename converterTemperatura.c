#include <stdio.h>

void converterTemperatura(float valor, int unidadeOrigem, int unidadeDestino) {
    float convertido;

    if (unidadeOrigem == unidadeDestino) {
        printf("O valor convertido e: %.2f\n", valor);
        return;
    }

    // Converte para Celsius como base
    switch (unidadeOrigem) {
        case 1: // Celsius
            convertido = valor;
            break;
        case 2: // Fahrenheit
            convertido = (valor - 32) * 5 / 9;
            break;
        case 3: // Kelvin
            convertido = valor - 273.15;
            break;
        default:
            printf("Unidade de origem invalida!\n");
            return;
    }

    // Converte de Celsius para a unidade de destino
    switch (unidadeDestino) {
        case 1: // Celsius
            printf("O valor convertido e: %.2f Celsius\n", convertido);
            break;
        case 2: // Fahrenheit
            printf("O valor convertido e: %.2f Fahrenheit\n", (convertido * 9 / 5) + 32);
            break;
        case 3: // Kelvin
            printf("O valor convertido e: %.2f Kelvin\n", convertido + 273.15);
            break;
        default:
            printf("Unidade de destino invalida!\n");
            return;
    }
}

int main() {
    float valor;
    int unidadeOrigem, unidadeDestino;

    printf("Conversor de unidades de temperatura\n");
    printf("Escolha a unidade de origem:\n");
    printf("1. Celsius\n2. Fahrenheit\n3. Kelvin\n");
    printf("Digite sua escolha: ");
    scanf("%d", &unidadeOrigem);

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("Escolha a unidade de destino:\n");
    printf("1. Celsius\n2. Fahrenheit\n3. Kelvin\n");
    printf("Digite sua escolha: ");
    scanf("%d", &unidadeDestino);

    converterTemperatura(valor, unidadeOrigem, unidadeDestino);

    return 0;
}