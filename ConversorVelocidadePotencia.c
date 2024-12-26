/*  Tarefa passada na Mentoria 12/12/24

    Grupo 7 - Subgrupo 6
    Hebert Costa Vaz Santana
    
    Converter Unidades de Velocidade
    Converter Watts, KiloWatts e Cavalo Vapor ou Horse Power
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include "Conversor_Velocidade_Potencia.h"

// Função para converter unidades de velocidade
void converterVelocidade() {
    int opcaoOrigem, opcaoDestino;
    double valorOrigem, valorDestino;
    const char *unidades[] = {"", "m/s", "km/h", "mph"}; // Array com os nomes das unidades

    // Exibe as opções de unidades de velocidade
    printf("\n--- Conversor de Unidades de Velocidade ---\n");
    printf("1. Metros por segundo (m/s)\n");
    printf("2. Quilômetros por hora (km/h)\n");
    printf("3. Milhas por hora (mph)\n");

    // Escolha da unidade de origem
    printf("Escolha a unidade de origem: ");
    scanf("%d", &opcaoOrigem);

    // Entrada do valor na unidade de origem
    printf("Digite o valor na unidade de origem: ");
    scanf("%lf", &valorOrigem);

    // Escolha da unidade de destino
    printf("Escolha a unidade de destino: ");
    scanf("%d", &opcaoDestino);

    system("cls");

    // Conversão entre as unidades
    switch (opcaoOrigem) {
        case 1: // De m/s
            if (opcaoDestino == 2) valorDestino = valorOrigem * 3.6; // Para km/h
            else if (opcaoDestino == 3) valorDestino = valorOrigem * 2.237; // Para mph
            else valorDestino = valorOrigem;
            break;
        case 2: // De km/h
            if (opcaoDestino == 1) valorDestino = valorOrigem / 3.6; // Para m/s
            else if (opcaoDestino == 3) valorDestino = valorOrigem / 1.609; // Para mph
            else valorDestino = valorOrigem;
            break;
        case 3: // De mph
            if (opcaoDestino == 1) valorDestino = valorOrigem / 2.237; // Para m/s
            else if (opcaoDestino == 2) valorDestino = valorOrigem * 1.609; // Para km/h
            else valorDestino = valorOrigem;
            break;
        default:
            printf("Unidade de origem inválida!\n");
            return;
    }

    // Exibe o resultado com as unidades
    printf("O valor %.2f %s é equivalente a %.2f %s.\n", 
        valorOrigem, unidades[opcaoOrigem], valorDestino, unidades[opcaoDestino]);
    system("pause");
}

// Função para converter potência entre Watt, Kilowatt e Horsepower
void converterPotencia() {
    int opcaoOrigem, opcaoDestino;
    double valorOrigem, valorDestino;
    const char *unidades[] = {"", "W", "kW", "HP"}; // Array com os nomes das unidades

    // Exibe as opções de unidades de potência
    printf("\n--- Conversor de Potência ---\n");
    printf("1. Watt (W)\n");
    printf("2. Kilowatt (kW)\n");
    printf("3. Horsepower (HP)\n");

    // Escolha da unidade de origem
    printf("Escolha a unidade de origem: ");
    scanf("%d", &opcaoOrigem);

    // Entrada do valor na unidade de origem
    printf("Digite o valor na unidade de origem: ");
    scanf("%lf", &valorOrigem);

    // Escolha da unidade de destino
    printf("Escolha a unidade de destino: ");
    scanf("%d", &opcaoDestino);

    system("cls");

    // Conversão entre as unidades
    switch (opcaoOrigem) {
        case 1: // De Watt
            if (opcaoDestino == 2) valorDestino = valorOrigem / 1000; // Para kW
            else if (opcaoDestino == 3) valorDestino = valorOrigem / 745.7; // Para HP
            else valorDestino = valorOrigem;
            break;
        case 2: // De Kilowatt
            if (opcaoDestino == 1) valorDestino = valorOrigem * 1000; // Para W
            else if (opcaoDestino == 3) valorDestino = valorOrigem * 1.341; // Para HP
            else valorDestino = valorOrigem;
            break;
        case 3: // De Horsepower
            if (opcaoDestino == 1) valorDestino = valorOrigem * 745.7; // Para W
            else if (opcaoDestino == 2) valorDestino = valorOrigem / 1.341; // Para kW
            else valorDestino = valorOrigem;
            break;
        default:
            printf("Unidade de origem inválida!\n");
            return;
    }

    // Exibe o resultado com as unidades
    printf("O valor %.2f %s é equivalente a %.2f %s.\n", 
        valorOrigem, unidades[opcaoOrigem], valorDestino, unidades[opcaoDestino]);
    system("pause");
}
