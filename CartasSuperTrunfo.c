
#include <stdio.h>

int main() {
    // Variáveis carta 1
    char estado, codigo[4], cidade[100];
    unsigned long int populacao;
    float area, densidade1;
    double pib, pibPerCapita1;
    int pturistico;
    float superPoder1;

    // Variáveis carta 2
    char estado2, codigo2[4], cidade2[100];
    unsigned long int populacao2;
    float area2, densidade2;
    double pib2, pibPerCapita2;
    int pturistico2;
    float superPoder2;

    // Entrada de dados carta 1
    printf("Seja bem-vindo ao Super Trunfo!!\n");
    printf("Este é o menu de cadastro de cartas.\n");

    printf("Por gentileza digite os dados da carta 1\n");
    printf("Informe o estado (Uma letra de 'A' a 'H'):\n");
    scanf(" %c", &estado);

    printf("Informe o código da carta (Ex: A01):\n");
    scanf("%3s", codigo);

    printf("Informe o nome da cidade:\n");
    scanf("%99s", cidade);

    printf("Informe a população:\n");
    scanf("%lu", &populacao);

    printf("Informe a área (em km²):\n");
    scanf("%f", &area);

    printf("Informe o PIB (em bilhões de reais):\n");
    scanf("%lf", &pib);

    printf("Informe o número de pontos turísticos:\n");
    scanf("%d", &pturistico);

    // Cálculos carta 1
    densidade1 = (float) populacao / area;
    pibPerCapita1 = (pib * 1000000000.0) / populacao;
    superPoder1 = (float) populacao + area + (float)(pib * 1000000000.0) + 
                  (float) pturistico + (float) pibPerCapita1 + (1.0f / densidade1);

    // Entrada de dados carta 2
    printf("\nPor gentileza digite os dados da carta 2\n");
    printf("Informe o estado (Uma letra de 'A' a 'H'):\n");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (Ex: B02):\n");
    scanf("%3s", codigo2);

    printf("Informe o nome da cidade:\n");
    scanf("%99s", cidade2);

    printf("Informe a população:\n");
    scanf("%lu", &populacao2);

    printf("Informe a área (em km²):\n");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões de reais):\n");
    scanf("%lf", &pib2);

    printf("Informe o número de pontos turísticos:\n");
    scanf("%d", &pturistico2);

    // Cálculos carta 2
    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
    superPoder2 = (float) populacao2 + area2 + (float)(pib2 * 1000000000.0) + 
                  (float) pturistico2 + (float) pibPerCapita2 + (1.0f / densidade2);

    // Exibição carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pturistico);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n\n", superPoder1);

    // Exibição carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n\n", superPoder2);

    // Comparações
    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pturistico > pturistico2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); 
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
