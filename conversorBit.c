#include <stdio.h>
#include "conversorBit.h" 

int conversorBit() { 
    double valor, resultado;
    int escolha;

    printf("Escolha a conversão que deseja realizar:\n");
    printf("1 - Kilobytes (KB) para Megabytes (MB)\n");
    printf("2 - Megabytes (MB) para Gigabytes (GB)\n");
    printf("3 - Gigabytes (GB) para Terabytes (TB)\n");
    printf("4 - Terabytes (TB) para Gigabytes (GB)\n");
    printf("5 - Gigabytes (GB) para Megabytes (MB)\n");
    printf("6 - Megabytes (MB) para Kilobytes (KB)\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    printf("Digite o valor para conversão: ");
    scanf("%lf", &valor);

    switch (escolha) {
        case 1:
            resultado = valor / 1024.0;
            printf("Resultado: %.2lf MB\n", resultado);
            break;
        case 2:
            resultado = valor / 1024.0;
            printf("Resultado: %.2lf GB\n", resultado);
            break;
        case 3:
            resultado = valor / 1024.0;
            printf("Resultado: %.2lf TB\n", resultado);
            break;
        case 4:
            resultado = valor * 1024.0;
            printf("Resultado: %.2lf GB\n", resultado);
            break;
        case 5:
            resultado = valor * 1024.0;
            printf("Resultado: %.2lf MB\n", resultado);
            break;
        case 6:
            resultado = valor * 1024.0;
            printf("Resultado: %.2lf KB\n", resultado);
            break;
        default:
            printf("Escolha inválida.\n");
            break;
    }

    return 0;
}
