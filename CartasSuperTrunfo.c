#include <stdio.h>

int main() {
    //variaveis carta1
    char estado, codigo[4], cidade[100];
    int populacao, pturistico;
    float area, pib;
    //variaveis carta2
    char estado2, codigo2[4], cidade2[100];
    int populacao2, pturistico2;
    float area2, pib2;
    //carta1
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
    printf("Informe o PIB:\n");
    scanf("%f", &pib);
    printf("Informe o número de pontos turísticos:\n");
    scanf("%d", &pturistico);
    //carta2
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
    printf("Informe o PIB:\n");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos:\n");
    scanf("%d", &pturistico2);
    //exibição da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n\n", pturistico);
    //exibição da carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pturistico2);

    return 0;
}
