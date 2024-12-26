#include <stdio.h>

int main() {
    int escolha;
    double area, resultado;

    printf("Escolha a conversão:\n");
    printf("1 - Metros quadrados para centimetros quadrados\n");
    printf("2 - Centimetros quadrados para metros quadrados\n");
    printf("Digite sua escolha (1 ou 2): \n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Digite a area em metros quadrados: \n");
        scanf("%lf", &area);
        resultado = area * 10000;
        printf("%.2f metros quadrados equivalem a %.2f centimetros quadrados.\n", area, resultado);
    } else if (escolha == 2) {
        printf("Digite a area em centimetros quadrados: \n");
        scanf("%lf", &area);
        resultado = area / 10000;
        printf("%.2f centimetros quadrados equivalem a %.2f metros quadrados.\n", area, resultado);
    } 
    else {
        printf("Escolha invalida!\n");
    }

    return 0;
}
