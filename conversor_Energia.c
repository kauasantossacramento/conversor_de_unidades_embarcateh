#include <stdio.h>
#include <math.h>
#include "conversor_Energia.h"

//  Joule(J), hWh, Caloria(cal)

void conversorEnergia(){
    int tipoConversao;
    float energia, resultado;
    
    wprintf(L"\nEscolha o tipo de conversao de Energia:\n\n");
    printf("Joule(J) para:\n1. hWh\n2. Caloria(cal)\n\n");
    printf("hWh para:\n3. Joule(J)\n4. Caloria(cal)\n\n");
    printf("Caloria(cal) para:\n5. Joule(J)\n6. hWh\n\n");
    wprintf(L"Digite o número do tipo de conversão: ");
    
    scanf("%d", &tipoConversao);
    switch (tipoConversao){
        case 1:
            printf("Digite a energia em Joule(J): ");
            scanf("%f", &energia);
            resultado = (energia * 2.77778 * pow(10, -7));
            wprintf(L"A energia em hWh é: %g\n", resultado);
            break;
        case 2:
            printf("Digite a energia em Joule(J): ");
            scanf("%f", &energia);
            resultado = (energia * 0.23885);
            wprintf(L"A energia em Caloria(cal) é: %g\n", resultado);
            break;
        case 3:
            printf("Digite a energia em hWh: ");
            scanf("%f", &energia);
            resultado = (energia * 3600000);
            wprintf(L"A energia em Joule(J) é: %g\n", resultado);
            break;
        case 4:
            printf("Digite a energia em hWh: ");
            scanf("%f", &energia);
            resultado = (energia * 859845.24);
            wprintf(L"A energia em Caloria(cal) é: %g\n", resultado);
            break;
        case 5:
            printf("\nDigite a energia em Caloria(cal): ");
            scanf("%f", &energia);
            resultado = (energia * 4.1868);
            wprintf(L"A energia em Joule(J) é: %g\n", resultado);
            break;
        case 6:
            printf("Digite a energia em Caloria(cal): ");
            scanf("%f", &energia);
            resultado = (energia * 1.163 * pow(10, -6));
            wprintf(L"A energia em hWh é: %g\n", resultado);
            break;
        default:
            wprintf(L"Opção inválida!\n");
            break;
    }
}
