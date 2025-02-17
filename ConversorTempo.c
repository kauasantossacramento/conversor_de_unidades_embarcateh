#include "Conversor_Tempo.h"
#include <stdio.h>

// Implementação da função para converter tempo
void converterTempo(float valor, int unidadeOrigem, int unidadeDestino) {
    float convertido;

    if (unidadeOrigem == unidadeDestino) {
        printf("O valor convertido e: %.2f\n", valor);
        return;
    }

    // Converte para segundos como base
    switch (unidadeOrigem) {
        case 1: // Segundos
            convertido = valor;
            break;
        case 2: // Minutos
            convertido = valor * 60;
            break;
        case 3: // Horas
            convertido = valor * 3600;
            break;
        default:
            printf("Unidade de origem invalida!\n");
            return;
    }

    // Converte de segundos para a unidade de destino
    switch (unidadeDestino) {
        case 1: // Segundos
            printf("O valor convertido e: %.2f segundos\n", convertido);
            break;
        case 2: // Minutos
            printf("O valor convertido e: %.2f minutos\n", convertido / 60);
            break;
        case 3: // Horas
            printf("O valor convertido e: %.2f horas\n", convertido / 3600);
            break;
        default:
            printf("Unidade de destino invalida!\n");
            return;
    }
}
