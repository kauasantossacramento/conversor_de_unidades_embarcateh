#include <stdio.h>
#include <stdlib.h>
#include "Conversor_Area.h"          // Inclusão do cabeçalho para conversor de área
#include "Conversor_Bit.h"           // Inclusão do cabeçalho para conversor de bits
#include "conversor_Energia.h"       // Inclusão do cabeçalho para conversor de energia
#include "conversor_Pressao.h"       // Inclusão do cabeçalho para conversor de pressão
#include "Conversor_Temperatura.h"   // Inclusão do cabeçalho para conversor de temperatura
#include "Conversor_Tempo.h"         // Inclusão do cabeçalho para conversor de tempo
#include "Conversor_Velocidade_Potencia.h" // Inclusão do cabeçalho para conversor de velocidade e potência

// Função para exibir o menu de opções para o usuário
void exibirMenu() {
    printf("\n--- Menu de Conversão ---\n");
    printf("1. Conversor de Área\n");
    printf("2. Conversor de Bits\n");
    printf("3. Conversor de Energia\n");
    printf("4. Conversor de Pressão\n");
    printf("5. Conversor de Temperatura\n");
    printf("6. Conversor de Tempo\n");
    printf("7. Conversor de Velocidade e Potência\n");
    printf("0. Sair\n");
    printf("Escolha uma opção: ");
}

int main() {
    int opcao;

    // Loop infinito para manter o menu ativo até o usuário decidir sair
    while (1) {
        // Exibe o menu de opções
        exibirMenu();
        
        // Lê a opção escolhida pelo usuário
        scanf("%d", &opcao);

        // Verifica a opção escolhida e chama a função correspondente
        switch (opcao) {
            case 1:
                executarConversaoArea();  // Chama a função para conversão de área
                break;
            case 2:
                conversorBit();  // Chama a função para conversão de bits
                break;
            case 3:
                conversorEnergia();  // Chama a função para conversão de energia
                break;
            case 4:
                conversorPressao();  // Chama a função para conversão de pressão
                break;
            case 5:
                temperatura();  // Chama a função para conversão de temperatura
                break;
            case 6: {
                // Definindo variáveis para receber os dados do usuário
                float valorTempo;
                int unidadeOrigem, unidadeDestino;

                // Solicita ao usuário os dados necessários para conversão de tempo
                printf("Digite o valor de tempo: ");
                scanf("%f", &valorTempo);
                printf("Escolha a unidade de origem (1 - Segundos, 2 - Minutos, 3 - Horas): ");
                scanf("%d", &unidadeOrigem);
                printf("Escolha a unidade de destino (1 - Segundos, 2 - Minutos, 3 - Horas): ");
                scanf("%d", &unidadeDestino);

                // Chama a função passando os parâmetros
                converterTempo(valorTempo, unidadeOrigem, unidadeDestino);
                break;
            }
            case 7:
                converterVelocidade();  // Chama a função para conversão de velocidade e potência
                break;
            case 0:
                printf("Saindo...\n");  // Exibe uma mensagem ao sair
                return 0;  // Encerra o programa
            default:
                // Caso a opção fornecida não seja válida, exibe uma mensagem de erro
                printf("Opção inválida, tente novamente!\n");
        }
    }

    return 0;  // Retorna 0 ao final da execução (embora o loop infinito acima nunca chegue a este ponto)
}
