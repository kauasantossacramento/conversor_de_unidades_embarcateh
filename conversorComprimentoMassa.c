// Função para conversão de comprimento
void convert_comprimento() {
    double value;
    int unidade_origem, unidade_destino;

    printf("\n*** Conversão de Comprimento ***\n");
    printf("Unidades disponíveis:\n1. Metros\n2. Centímetros\n3. Quilômetros\nEscolha a unidade de origem: ");
    scanf("%d", &unidade_origem);
    printf("Escolha a unidade de destino: ");
    scanf("%d", &unidade_destino);
    printf("Digite o valor: ");
    scanf("%lf", &value);

    if (unidade_origem == 1 && unidade_destino == 2) value *= 100; // Metros para centímetros
    else if (unidade_origem == 1 && unidade_destino == 3) value /= 1000; // Metros para quilômetros
    else if (unidade_origem == 2 && unidade_destino == 1) value /= 100; // Centímetros para metros
    else if (unidade_origem == 2 && unidade_destino == 3) value /= 100000; // Centímetros para quilômetros
    else if (unidade_origem == 3 && unidade_destino == 1) value *= 1000; // Quilômetros para metros
    else if (unidade_origem == 3 && unidade_destino == 2) value *= 100000; // Quilômetros para centímetros
    else {
        printf("Conversão inválida!\n");
        return;
    }

    printf("Resultado: %.2lf\n", value);
}

// Função para conversão de massa
void convert_mass() {
    double value;
    int unidade_origem, unidade_destino;

    printf("\n*** Conversão de Massa ***\n");
    printf("Unidades disponíveis:\n1. Gramas\n2. Quilogramas\n3. Toneladas\nEscolha a unidade de origem: ");
    scanf("%d", &unidade_origem);
    printf("Escolha a unidade de destino: ");
    scanf("%d", &unidade_destino);
    printf("Digite o valor: ");
    scanf("%lf", &value);

    if (unidade_origem == 1 && unidade_destino == 2) value /= 1000; // Gramas para quilogramas
    else if (unidade_origem == 1 && unidade_destino == 3) value /= 1000000; // Gramas para toneladas
    else if (unidade_origem == 2 && unidade_destino == 1) value *= 1000; // Quilogramas para gramas
    else if (unidade_origem == 2 && unidade_destino == 3) value /= 1000; // Quilogramas para toneladas
    else if (unidade_origem == 3 && unidade_destino == 1) value *= 1000000; // Toneladas para gramas
    else if (unidade_origem == 3 && unidade_destino == 2) value *= 1000; // Toneladas para quilogramas
    else {
        printf("Conversão inválida!\n");
        return;
    }

    printf("Resultado: %.2lf\n", value);
}
