#include <stdio.h>

int main() {
    // Variáveis carta1
    char estado, codigo[4], cidade[100];
    int populacao, pturistico;
    float area, pib, pibPerCapita, densidade;

    // Variáveis carta2
    char estado2, codigo2[4], cidade2[100];
    int populacao2, pturistico2;
    float area2, pib2, pibPerCapita2, densidade2;

    // Carta 1
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
    scanf("%d", &populacao);
    printf("Informe a área (em km²):\n");
    scanf("%f", &area);
    printf("Informe o PIB (em bilhões de reais):\n");
    scanf("%f", &pib);
    printf("Informe o número de pontos turísticos:\n");
    scanf("%d", &pturistico);

    // Cálculos carta 1
    densidade = populacao / area;
    pibPerCapita = (pib * 1000000000) / populacao;

    // Carta 2
    printf("\nPor gentileza digite os dados da carta 2\n");
    printf("Informe o estado (Uma letra de 'A' a 'H'):\n");
    scanf(" %c", &estado2);
    printf("Informe o código da carta (Ex: B02):\n");
    scanf("%3s", codigo2);
    printf("Informe o nome da cidade:\n");
    scanf("%99s", cidade2);
    printf("Informe a população:\n");
    scanf("%d", &populacao2);
    printf("Informe a área (em km²):\n");
    scanf("%f", &area2);
    printf("Informe o PIB (em bilhões de reais):\n");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos:\n");
    scanf("%d", &pturistico2);

    // Cálculos carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pturistico);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita);

    // Exibição carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
