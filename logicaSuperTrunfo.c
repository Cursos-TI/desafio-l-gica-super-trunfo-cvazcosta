#include <stdio.h>

int main() {
    
    char codigo_estado1[4], codigo_carta1[4], nome_cidade1[30];
    unsigned long int populacao1;
    int pontos_turisticos1;
    float area1, densidade_pop1, pib_pc1, sup_poder1;
    double pib1;

    char codigo_estado2[4], codigo_carta2[4], nome_cidade2[30];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area2, densidade_pop2, pib_pc2, sup_poder2;
    double pib2;

    int populacao, area, pib, pontos_turisticos, atributo, 
    densidade_pop, pib_pc, sup_poder;

    // Cadastro da 1ª carta    
    printf("Informe o código do estado: ");
    scanf("%s", codigo_estado1);

    printf("Informe o código da carta: ");
    scanf("%s", codigo_carta1);

    printf("Informe o nome da cidade (separado por _ se for nome composto): ");
    scanf("%s", nome_cidade1);

    printf("Informe a quantidade de habitantes: ");
    scanf("%lu", &populacao1);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("Informe a área da cidade em Km²: ");
    scanf("%f", &area1);

    printf("Informe o PIB: ");
    scanf("%lf%*c", &pib1);

    // Cálculo da densidade populacional
    densidade_pop1 = populacao1 / area1;

    // Cálculo do PIB per capita
    pib_pc1 = pib1 / populacao1;

    // Impressão das informações da primeira carta
    printf("\nInformações da Carta Cadastrada\n");
    printf("\nCódigo do Estado: %s\n", codigo_estado1);
    printf("Código da Carta: %s\n", codigo_carta1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("Número de Habitantes: %lu\n", populacao1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: R$ %.2lf\n", pib1);
    printf("Densidade Populacional: %.2f Habitantes por Km²\n", densidade_pop1);
    printf("PIB Per Capita: R$ %.2f\n\n", pib_pc1);

    // Cadastro da 2ª carta
    printf("Informe o código do estado: ");
    scanf("%s", codigo_estado2);

    printf("Informe o código da carta: ");
    scanf("%s", codigo_carta2);

    printf("Informe o nome da cidade (separado por _ se for nome composto): ");
    scanf("%s", nome_cidade2);

    printf("Informe a quantidade de habitantes: ");
    scanf("%lu", &populacao2);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("Informe a área da cidade em Km²: ");
    scanf("%f", &area2);

    printf("Informe o PIB: ");
    scanf("%lf%*c", &pib2);

    // Cálculo da densidade populacional
    densidade_pop2 = populacao2 / area2;

    // Cálculo do PIB per capita
    pib_pc2 = pib2 / populacao2;

    // Impressão das informações da 2ª carta
    printf("\nInformações da Carta Cadastrada\n");
    printf("\nEstado: %s\n", codigo_estado2);
    printf("Código da Carta: %s\n", codigo_carta2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("Número de Habitantes: %lu\n", populacao2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: R$ %.2lf\n", pib2);
    printf("Densidade Populacional: %.2f Habitantes por Km²\n", densidade_pop2);
    printf("PIB Per Capita: R$ %.2f\n", pib_pc2);

    // Cálculo do super poder
    sup_poder1 = 
    populacao1 + 
    pontos_turisticos1 + 
    area1 + 
    pib1 + 
    pib_pc1 +
    (1 / densidade_pop1);

    sup_poder2 = 
    populacao2 + 
    pontos_turisticos2 + 
    area2 + 
    pib2 + 
    pib_pc2 +
    (1 / densidade_pop2);

    // Menu para escolha do atributo a ser comparado
    printf("\n*** Escolha o atributo para comparar ***\n");
    printf("1- Nº de Habitantes\n");
    printf("2- Nº de Pontos Turísticos\n");
    printf("3- Área\n");
    printf("4- PIB\n");
    printf("5- Densidade Populacional\n");
    printf("6- PIB Per Capita\n");
    printf("7- Super Poder\n");
    printf("Digite o número associado à opção desejada: ");
    scanf(" %d", &atributo);
    
    printf("\n%s x %s\n", nome_cidade1, nome_cidade2);

    switch (atributo)
    {
    case 1:
            printf("Atributo escolhido: Nº de Habitantes\n");
            printf("%s: %.2lu\n", nome_cidade1, populacao1);
            printf("%s: %.2lu\n", nome_cidade2, populacao2);

            if (populacao1 > populacao2)
                printf("%s venceu!\n", nome_cidade1);
            else if (populacao1 < populacao2) 
                printf("%s venceu!\n", nome_cidade2);
            else
                printf("Empate!\n");
        break;

    case 2:
            printf("Atributo escolhido: Nº de Pontos Turísticos\n");
            printf("%s: %d\n", nome_cidade1, pontos_turisticos1);
            printf("%s: %d\n", nome_cidade2, pontos_turisticos2);

            if (pontos_turisticos1 > pontos_turisticos2)
                printf("%s venceu!\n", nome_cidade1);
            else if (pontos_turisticos1 < pontos_turisticos2) 
                printf("%s venceu!\n", nome_cidade2);
            else
                printf("Empate!\n");
        break;

    case 3:
            printf("Atributo escolhido: Área\n");
            printf("%s: %.2f\n", nome_cidade1, area1);
            printf("%s: %.2f\n", nome_cidade2, area2);

            if (area1 > area2)
                printf("%s venceu!\n", nome_cidade1);
            else if (area1 < area2) 
                printf("%s venceu!\n", nome_cidade2);
            else
                printf("Empate!\n");
        break;

    case 4:
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2lf\n", nome_cidade1, pib1);
            printf("%s: %.2lf\n", nome_cidade2, pib2);

            if (pib1 > pib2)
                printf("%s venceu!\n", nome_cidade1);
            else if (pib1 < pib2) 
                printf("%s venceu!\n", nome_cidade2);
            else
                printf("Empate!\n");
        break;

    case 5:
            printf("Atributo escolhido: Densidade Populacional\n");
            printf("%s: %.2f\n", nome_cidade1, densidade_pop1);
            printf("%s: %.2f\n", nome_cidade2, densidade_pop2);

            if (densidade_pop1 < densidade_pop2)
                printf("%s venceu!\n", nome_cidade1);
            else if (densidade_pop1 > densidade_pop2) 
                printf("%s venceu!\n", nome_cidade2);
            else
                printf("Empate!\n");
        break;

    case 6:
            printf("Atributo escolhido: PIB Per Capita\n");
            printf("%s: %.2f\n", nome_cidade1, pib_pc1);
            printf("%s: %.2f\n", nome_cidade2, pib_pc2);

            if (pib_pc1 < pib_pc2)
                printf("%s venceu!\n", nome_cidade1);
            else if (pib_pc1 > pib_pc2) 
                printf("%s venceu!\n", nome_cidade2);
            else
                printf("Empate!\n");
        break;

    case 7:
            printf("Atributo escolhido: Super Poder\n");
            printf("%s: %.2f\n", nome_cidade1, sup_poder1);
            printf("%s: %.2f\n", nome_cidade2, sup_poder2);

            if (sup_poder1 < sup_poder2)
                printf("%s venceu!\n", nome_cidade1);
            else if (sup_poder1 > sup_poder2) 
                printf("%s venceu!\n", nome_cidade2);
            else
                printf("Empate!\n");
        break;
    
    default:
            printf("Opção inválida");
        break;
    }
    
    return 0;

}