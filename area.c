#include <stdio.h>

// Função para realizar a conversão de área
double converterArea(int escolha, double area) {
    if (escolha == 1) {
        return area * 10000; // Metros quadrados para centímetros quadrados
    } else if (escolha == 2) {
        return area / 10000; // Centímetros quadrados para metros quadrados
    }
    return -1; // Retorna -1 para escolha inválida
}

int main() {
    int escolha;
    double area, resultado;

    printf("Escolha a conversão:\n");
    printf("1 - Metros quadrados para centimetros quadrados\n");
    printf("2 - Centimetros quadrados para metros quadrados\n");
    printf("Digite sua escolha (1 ou 2): \n");
    scanf("%d", &escolha);

    if (escolha == 1 || escolha == 2) {
        printf("Digite a área: \n");
        scanf("%lf", &area);

        resultado = converterArea(escolha, area);

        if (escolha == 1) {
            printf("%.2f metros quadrados equivalem a %.2f centimetros quadrados.\n", area, resultado);
        } else {
            printf("%.2f centimetros quadrados equivalem a %.2f metros quadrados.\n", area, resultado);
        }
    } else {
        printf("Escolha invalida!\n");
    }

    return 0;
}
