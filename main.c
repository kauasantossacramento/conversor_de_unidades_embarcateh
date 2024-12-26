 /* Código MAIN para execução do Projeto Completo */

#include <stdio.h>
#include "Conversor_Area.h"
#include "Conversor_Bit.h"
#include "conversor_Energia.h"
#include "conversor_Pressao.h"
#include "Conversor_Temperatura.h"
#include "Conversor_Tempo.h"
#include "Conversor_Velocidade_Potencia.h"

int main() {
    int escolhaConversao;

    printf("Escolha o tipo de conversão que deseja realizar:\n");
    printf("1 - Conversor de Área\n");
    printf("2 - Conversor de Bits\n");
    printf("3 - Conversor de Energia\n");
    printf("4 - Conversor de Pressão\n");
    printf("5 - Conversor de Temperatura\n");
    printf("6 - Conversor de Tempo\n");
    printf("7 - Conversor de Velocidade e Potência\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolhaConversao);

    switch (escolhaConversao) {
        case 1:
            // Chama o conversor de área
            printf("\nConversor de Área:\n");
            double area;
            int escolhaArea;
            printf("Escolha a conversão:\n");
            printf("1 - Metros quadrados para centímetros quadrados\n");
            printf("2 - Centímetros quadrados para metros quadrados\n");
            printf("Digite sua escolha: ");
            scanf("%d", &escolhaArea);
            printf("Digite a área: ");
            scanf("%lf", &area);
            converterArea(escolhaArea, area);
            break;

        case 2:
            // Chama o conversor de bits
            printf("\nConversor de Bits:\n");
            conversorBit();
            break;

        case 3:
            // Chama o conversor de energia
            printf("\nConversor de Energia:\n");
            conversorEnergia();
            break;

        case 4:
            // Chama o conversor de pressão
            printf("\nConversor de Pressão:\n");
            conversorPressao();
            break;

        case 5:
            // Chama o conversor de temperatura
            printf("\nConversor de Temperatura:\n");
            temperatura();
            break;

        case 6:
            // Chama o conversor de tempo
            printf("\nConversor de Tempo:\n");
            float valorTempo;
            int origemTempo, destinoTempo;
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valorTempo);
            printf("Escolha a unidade de origem (1 - Segundos, 2 - Minutos, 3 - Horas): ");
            scanf("%d", &origemTempo);
            printf("Escolha a unidade de destino (1 - Segundos, 2 - Minutos, 3 - Horas): ");
            scanf("%d", &destinoTempo);
            converterTempo(valorTempo, origemTempo, destinoTempo);
            break;

        case 7:
            // Chama o conversor de velocidade e potência
            printf("\nConversor de Velocidade e Potência:\n");
            converterVelocidade();
            break;

        default:
            printf("Escolha inválida!\n");
            break;
    }

    return 0;
}
