#include <stdio.h>
#include "conversor_Pressao.h"
#include <wchar.h> 

//  Pascal(Pa), Libra por polegada quadrada (psi), Atmosfera(atm)


void conversorPressao(){
    int tipoConversao;
    float pressao, resultado;
    
    wprintf(L"\nEscolha o tipo de conversao de Pressão:\n\n");
    printf("Pascal para:\n1. Libra por polegada quadrada (psi)\n2. Atmosfera(atm)\n\n");
    printf("Libra por polegada quadrada (psi) para:\n3. Pascal(Pa)\n4. Atmosfera(atm)\n\n");
    printf("Atmosfera(atm) para:\n5. Pascal(Pa)\n6. Libra por polegada quadrada (psi)\n\n");
    wprintf(L"Digite o número do tipo de conversão: ");
    
    scanf("%d", &tipoConversao);
    switch (tipoConversao){
        case 1:
            printf("Digite a pressão em Pascal(Pa): ");
            scanf("%f", &pressao);
            resultado = (pressao * 0.000145);
            wprintf(L"A pressão em Libra por polegada quadrada (psi) é: %g\n", resultado);
            break;
        case 2:
            printf("Digite a pressão em Pascal(Pa): ");
            scanf("%f", &pressao);
            resultado = (pressao * 0.00001);
            wprintf(L"A pressão em Atmosfera(atm) é: %g\n", resultado);
            break;
        case 3:
            printf("Digite a pressão em Libra por polegada quadrada (psi): ");
            scanf("%f", &pressao);
            resultado = (pressao * 6894.75909);
            wprintf(L"A pressão em Pascal(Pa) é: %g\n", resultado);
            break;
        case 4:
            printf("Digite a pressão em Libra por polegada quadrada (psi): ");
            scanf("%f", &pressao);
            resultado = (pressao * 0.06805);
            wprintf(L"A pressão em Atmosfera(atm) é: %g\n", resultado);
            break;
        case 5:
            printf("\nDigite a pressão em Atmosfera(atm): ");
            scanf("%f", &pressao);
            resultado = (pressao * 101324.99658);
            wprintf(L"A pressão em Pascal(Pa) é: %g\n", resultado);
            break;
        case 6:
            printf("Digite a pressão em Atmosfera(atm): ");
            scanf("%f", &pressao);
            resultado = (pressao * 14.69594);
            wprintf(L"A pressão em Libra por polegada quadrada (psi) é: %g\n", resultado);
            break;
        default:
            wprintf(L"Opção inválida!\n");
            break;
    }
}
