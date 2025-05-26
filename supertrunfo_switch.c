    #include <stdio.h>

    int main() {

        int escolhaJogador;

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

        printf("Digite o número de pontos turísticos: \n");
        scanf("%d", &pontosTuristicos2);

    //calculo da densidade populacional e pib percapita da carta 1
        densidade_populacional2 = (populacao2 / area2);
        pib_percapita2 = (pib2 / populacao2);

    //calculo do super poder da carta 2;
        superpoder2 = (float)populacao2 + area2 + pib2 +(float) pontosTuristicos2 + pib_percapita2 + ( 1 / densidade_populacional2);

    //Menu de escolha de atributo para comparação
    printf("== Comparação de Atributos ===\n");
    printf("Escolha qual atributo você quer comparar: \n");
    printf("1. Nome da cidade. \n");
    printf("2. População. \n");
    printf("3. Área. \n");
    printf("4. PIB. \n");
    printf("5. Número de Pontos turísticos. \n");
    printf("6. PIB Per Capita \n");
    printf("7. Densidade Populacional \n");  
    printf("8. Super Poder \n");  
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);
        
    // Comparação dos dados da carta 1 e carta 2
        printf("\n=== Comparação das Cartas ===\n");
  
        switch (escolhaJogador)
        { case 1: 
        printf("A cidade da Carta 1 é: %s\n", nomeCidade1); 
        printf("A cidade da Carta 2 é:%s\n", nomeCidade2);\
        break;

         case 2:      
        printf("\n%s: População: %lu\n", nomeCidade1, populacao1);         
        printf("\n%s: População: %lu\n", nomeCidade2, populacao2); 

         if(populacao1 > populacao2){
        printf("=== Carta 1 Venceu!=== \n");
     }    else if (populacao1 < populacao2){
          printf("=== Carta 2 Venceu!=== \n");
    }   else {
        printf("=== Empate!=== \n"); }
     break;

         case 3:       
        printf("\n%s: Área: %f\n", nomeCidade1, area1);         
        printf("\n%s: Área: %f\n", nomeCidade2, area2); 

    if(area1 > area2){
        printf("=== Carta 1 Venceu!=== \n");
     } else if (area1 < area2){
        printf("=== Carta 2 Venceu!=== \n");
    }  else {
        printf("=== Empate!=== \n");
     } 
     break;

         case 4:
        printf("\n%s: PIB: %lu\n", nomeCidade1, pib1);        
        printf("\n%s: PIB: %lu\n", nomeCidade2, pib2); 

    if(pib1 > pib2){
        printf("=== Carta 1 Venceu!=== \n");
     } else if (pib1 < pib2){
        printf("=== Carta 2 Venceu!=== \n");
    } else{
        printf("=== Empate!=== \n");
     }
     break;

         case 5:     
        printf("\n%s: Pontos Turísticos: %lu\n", nomeCidade1, pontosTuristicos1);       
        printf("\n%s: Pontos Turísticos: %lu\n", nomeCidade2, pontosTuristicos2); 

    if(pontosTuristicos1 > pontosTuristicos2){
        printf("=== Carta 1 Venceu!=== \n");
     } else if(pontosTuristicos1 < pontosTuristicos2){
        printf("=== Carta 2 Venceu!=== \n");
    }
        else {
        printf("=== Empate!=== \n");
     }
     break;

         case 6:     
        printf("\n%s: PIB Per Capita: %lu\n", nomeCidade1, pib_percapita1);  
        printf("\n%s: PIB Per Capita: %lu\n", nomeCidade2, pib_percapita2); 

    if(pib_percapita1 > pib_percapita2){
        printf("=== Carta 1 Venceu!=== \n");
     } else if(pib_percapita1 < pib_percapita2){
        printf("=== Carta 2 Venceu!=== \n");
    }
        else {
        printf("=== Empate!=== \n");
     }
     break;

         case 7:  
        printf("%s: Densidade Populacional: %lu\n", nomeCidade1, densidade_populacional1);        
        printf("%s: Densidade Populacional: %lu\n", nomeCidade2, densidade_populacional2); 

    if(densidade_populacional1 < densidade_populacional2){
        printf("=== Carta 1 Venceu!=== \n");
     } else if(densidade_populacional1 > densidade_populacional2){
        printf("=== Carta 2 Venceu!=== \n");
    }
        else {
        printf("=== Empate!=== \n");
     }
     break;
     
         case 8:      
        printf("%s: SuperPoder: %lu\n", nomeCidade1, superpoder1);        
        printf("%s: SuperPoder: %lu\n", nomeCidade2, superpoder2); 

    if(superpoder1 > superpoder2){
        printf("=== Carta 1 Venceu!=== \n");
     } else if(superpoder1 < superpoder2){
        printf("=== Carta 2 Venceu!=== \n");
    }
        else {
        printf("=== Empate!=== \n");
     }
     break;
        default :
            printf("Opção invalida");
        break;
       
}
return 0;
}