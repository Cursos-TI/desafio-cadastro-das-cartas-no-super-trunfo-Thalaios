#include <stdio.h>

int main() {
    // Variáveis para a Carta 1
    int pontosTuristicos1;
    char estado1, nomeCidade1[100], codigo1[4];
    unsigned long int populacao1;
    float area1, pib1, pib_percapita1, superpoder1, densidade_populacional1;

    // Variáveis para a Carta 2
    int pontosTuristicos2;
    char estado2, codigo2[4], nomeCidade2[100];
    unsigned long int populacao2;
    float area2, pib2, densidade_populacional2, pib_percapita2, superpoder2;

    // Variáveis de resultado
    int resultado_populacao, resultado_superpoder, resultado_area, resultado_pib,
        resultado_pontosTuristicos, resultado_densidade_populacional, resultado_pib_percapita;

    // Leitura dos dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (letra de A a H): \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta, sendo a letra do estado seguida de um número de 01 a 04 (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade (caso seja um nome composto, use underline, ex: Rio_de_Janeiro): ");
    scanf("%s", nomeCidade1);

    printf("Digite a área da cidade (em km², apenas números): ");
    scanf("%f", &area1);

    printf("Digite o número da População (apenas números): ");
    scanf("%lu", &populacao1);

    printf("Digite o PIB da cidade (em bilhões de reais, apenas números): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calculo da densidade populacional e PIB per capita da carta 1
    densidade_populacional1 = (float)populacao1 / area1;
    pib_percapita1 = pib1 / (float)populacao1;

    // Calculo do superpoder da carta 1
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pib_percapita1 + (1.0f / densidade_populacional1);

    // Leitura dos dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (letra de A a H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta, sendo a letra do estado seguida de um número de 01 a 04 (ex: A01): ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade (caso seja um nome composto, use underline, ex: Rio_de_Janeiro): ");
    scanf("%s", nomeCidade2);

    printf("Digite a área da cidade (em km², apenas números): ");
    scanf("%f", &area2);

    printf("Digite o número da População (apenas números): ");
    scanf("%lu", &populacao2);

    printf("Digite o PIB da cidade (em bilhões de reais, apenas números): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculo da densidade populacional e PIB per capita da carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_percapita2 = pib2 / (float)populacao2;

    // Calculo do superpoder da carta 2
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pib_percapita2 + (1.0f / densidade_populacional2);

    // Calculo dos resultados
    resultado_populacao = (populacao1 > populacao2);
    resultado_area = (area1 > area2);
    resultado_pib = (pib1 > pib2);
    resultado_pontosTuristicos = (pontosTuristicos1 > pontosTuristicos2);
    resultado_densidade_populacional = (densidade_populacional1 < densidade_populacional2); // menor densidade = melhor
    resultado_pib_percapita = (pib_percapita1 > pib_percapita2);
    resultado_superpoder = (superpoder1 > superpoder2);

    // Comparação dos dados das cartas
    printf("\n=== Comparação das Cartas ===\n");

    printf("\nPopulação da Cidade 1: %lu", populacao1);
    printf("\nPopulação da Cidade 2: %lu", populacao2);
    printf("\nMaior população: %s\n", resultado_populacao ? "Cidade 1" : "Cidade 2");

    printf("\nÁrea da Cidade 1: %.2f km²", area1);
    printf("\nÁrea da Cidade 2: %.2f km²", area2);
    printf("\nMaior área: %s\n", resultado_area ? "Cidade 1" : "Cidade 2");

    printf("\nPIB da Cidade 1: %.2f bilhões", pib1);
    printf("\nPIB da Cidade 2: %.2f bilhões", pib2);
    printf("\nMaior PIB: %s\n", resultado_pib ? "Cidade 1" : "Cidade 2");

    printf("\nNúmero de Pontos Turísticos da Cidade 1: %d", pontosTuristicos1);
    printf("\nNúmero de Pontos Turísticos da Cidade 2: %d", pontosTuristicos2);
    printf("\nMais pontos turísticos: %s\n", resultado_pontosTuristicos ? "Cidade 1" : "Cidade 2");

    printf("\nDensidade Populacional da Cidade 1: %.2f hab/km²", densidade_populacional1);
    printf("\nDensidade Populacional da Cidade 2: %.2f hab/km²", densidade_populacional2);
    printf("\nMenor densidade populacional (melhor): %s\n", resultado_densidade_populacional ? "Cidade 1" : "Cidade 2");

    printf("\nPIB Per Capita da Cidade 1: %.6f", pib_percapita1);
    printf("\nPIB Per Capita da Cidade 2: %.6f", pib_percapita2);
    printf("\nMaior PIB Per Capita: %s\n", resultado_pib_percapita ? "Cidade 1" : "Cidade 2");

    printf("\nSuperpoder da Cidade 1: %.2f", superpoder1);
    printf("\nSuperpoder da Cidade 2: %.2f", superpoder2);
    printf("\nMaior Superpoder: %s\n", resultado_superpoder ? "Cidade 1" : "Cidade 2");

    return 0;
}
