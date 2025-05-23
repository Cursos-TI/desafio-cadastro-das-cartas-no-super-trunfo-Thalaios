    #include <stdio.h>

    int main() {
    // Variáveis para a Carta 1
        int carta1;
        char estado1;
        char codigo1[4];
        char nomeCidade1[100];
        unsigned long int populacao1;
        float area1;
        float pib1;
        int pontosTuristicos1;
        float densidade_populacional1;
        float pib_percapita1;
        float superpoder1;

    // Variáveis para a Carta 2
        int carta2;
        char estado2;
        char codigo2[4];
        char nomeCidade2[100];
        unsigned long int populacao2;
        float area2;
        float pib2;
        int pontosTuristicos2;
        float densidade_populacional2;
        float pib_percapita2;
        float superpoder2;

    // Leitura dos dados da Carta 1
        printf("=== Cadastro da Carta 1 ===\n");
        printf("Digite o estado (letra de A a H): ");
        scanf(" %c", &estado1);

        printf("Digite o código da carta, sendo a letra do estado seguida de um número de 01 a 04(ex: A01): ");
        scanf(" %3s", &codigo1);

        printf("Digite o nome da cidade(Caso seja um nome composto escreva da seguinte forma: Rio_de_Janeiro): ");
        scanf("%s", &nomeCidade1);

        printf("Digite a área da cidade (em km²)(apenas numeros): ");
        scanf("%f", &area1);

        printf("Digite o número da População(apenas numeros):");
        scanf("%lu", &populacao1);

        printf("Digite o PIB da cidade (em bilhões de reais)(apenas numeros): ");
        scanf("%f", &pib1);

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontosTuristicos1);


    //calculo da densidade populacional e pib percapita da carta 1;
        densidade_populacional1 = (populacao1 / area1);
        pib_percapita1 = (pib1 / populacao1);

    //calculo do super poder da carta 1;
        superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pib_percapita1 + ( 1 / densidade_populacional1);

    // Leitura dos dados da Carta 2
        printf("=== Cadastro da Carta 2 ===\n");
        printf("Digite o Estado (Letra de A a H): ");
        scanf(" %c", &estado2);

        printf("Digite o Código da Carta, sendo a letra do estado seguida de um número de 01 a 04(ex: A01): ");
        scanf(" %3s", &codigo2);

        printf("Digite o nome da cidade (Caso seja um nome composto escreva da seguinte forma: Rio_de_Janeiro): ");
        scanf("%s", &nomeCidade2);

        printf("Digite a área da cidade (em km²)(apenas numeros): ");
        scanf("%f", &area2);

        printf("Digite o número da População(apenas numeros):");
        scanf("%lu", &populacao2);

        printf("Digite o PIB da cidade (em bilhões de reais)(apenas numeros): ");
        scanf("%f", &pib2);

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontosTuristicos2);

    //calculo da densidade populacional e pib percapita da carta 1
        densidade_populacional2 = (populacao2 / area2);
        pib_percapita2 = (pib2 / populacao2);

    //calculo do super poder da carta 2;
        superpoder2 = (float)populacao2 + area2 + pib2 +(float) pontosTuristicos2 + pib_percapita2 + ( 1 / densidade_populacional2);

    // Exibição dos dados da Carta 1
        printf("\n=== Carta 1 ===\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", nomeCidade1);
        printf("População: %lu\n", populacao1);
        printf("Área: %f km²\n", area1);
        printf("PIB: %f bilhões de reais\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
        printf("PIB Per Capita:%f\n", pib_percapita1);
        printf("Densidade Populacional:%f\n", densidade_populacional1);
        printf("SuperPoder: %f\n", superpoder1);

    // Exibição dos dados da Carta 2
        printf("\n=== Carta 2 ===\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", nomeCidade2);
        printf("População: %lu\n", populacao2);
        printf("Área: %f km²\n", area2);
        printf("PIB: %f bilhões de reais\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
        printf("PIB Per Capita:%f\n", pib_percapita1);
        printf("Densidade Populacional:%f\n", densidade_populacional1);
        printf("SuperPoder: %f\n", superpoder2);
        
    // Comparação dos dados da carta 1 e carta 2
        printf("\n=== Comparação das Cartas ===\n");
        
        printf("\nCarta 1: População: %lu\n", populacao1);    
        printf("Carta 2: População: %lu\n", populacao2);    
    if(populacao1 > populacao2){
        printf("=== Carta 1 Venceu!=== \n");
     } else{
        printf("=== Carta 2 Venceu!=== \n");
    }   
        if(populacao1 == populacao2){
        printf("=== Empate!=== \n");
     }

        printf("\nCarta 1: Área: %f\n", area1);    
        printf("Carta 2: Área: %f\n", area2);    
    if(area1 > area2){
        printf("=== Carta 1 Venceu!=== \n");
     } else{
        printf("=== Carta 2 Venceu!=== \n");
    }
        if(area1 == area2){
        printf("=== Empate!=== \n");
     }

        printf("\nCarta 1: PIB: %f\n", pib1);    
        printf("Carta 2: PIB: %f\n", pib2);    
    if(pib1 > pib2){
        printf("=== Carta 1 Venceu!=== \n");
     } else{
        printf("=== Carta 2 Venceu!=== \n");
    }
        if(pib1 == pib2){
        printf("=== Empate!=== \n");
     }

        printf("\nCarta 1: Pontos Turísticos: %d\n", pontosTuristicos1);    
        printf("Carta 2: Pontos Turísticos: %d\n", pontosTuristicos2);    
    if(pontosTuristicos1 > pontosTuristicos2){
        printf("=== Carta 1 Venceu!=== \n");
     } else{
        printf("=== Carta 2 Venceu!=== \n");
    }
        if(pontosTuristicos1 == pontosTuristicos2){
        printf("=== Empate!=== \n");
     }

        printf("\nCarta 1: PIB Per Capita: %f\n", pib_percapita1);    
        printf("Carta 2: PIB Per Capita: %f\n", pib_percapita2);    
    if(pib_percapita1 > pib_percapita2){
        printf("=== Carta 1 Venceu!=== \n");
     } else{
        printf("=== Carta 2 Venceu!=== \n");
    }
        if(pib_percapita1 == pib_percapita2){
        printf("=== Empate!=== \n");
     }

        printf("\nCarta 1: Densidade Populacional: %f\n", densidade_populacional1);
        printf("Carta 2: Densidade Populacional: %f\n", densidade_populacional2);
        if(densidade_populacional1 > densidade_populacional2){
            printf("=== Carta 1 Venceu! ===\n");
        } else{
            printf("=== Carta 2 Venceu! ===\n");
        }
        if(densidade_populacional1 == densidade_populacional2){
        printf("=== Empate!=== \n");
     }

        printf("\nCarta 1: SuperPoder: %f\n", superpoder1);    
        printf("Carta 2: SuperPoder: %f\n", superpoder2);    
    if(superpoder1 > superpoder2){
        printf("=== Carta 1 Venceu!=== \n");
     } else{
        printf("=== Carta 2 Venceu!=== \n");
    }
        if(superpoder1 == superpoder2){
        printf("=== Empate!=== \n");
     }


    
        
}