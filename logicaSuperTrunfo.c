#include <stdio.h>

int main() {
    // Variáveis utilizadas no programa para armazenar dados da 1ª carta
    char codigo_estado1[4], codigo_carta1[4], nome_cidade1[30];
    unsigned long int populacao1;
    int pontos_turisticos1, atributo1;
    float area1, densidade_pop1, pib_pc1, sup_poder1, soma1;
    double pib1;

    // Variáveis utilizadas no programa para armazenar dados da 2ª carta
    char codigo_estado2[4], codigo_carta2[4], nome_cidade2[30];
    unsigned long int populacao2;
    int pontos_turisticos2, atributo2;
    float area2, densidade_pop2, pib_pc2, sup_poder2, soma2;
    double pib2;    

    // Variáveis para as alternativas do menu interativo dinâmico
    char alt1[40] = "1- Nº de Habitantes";
    char alt2[40] = "2- Nº de Pontos Turísticos";
    char alt3[40] = "3- Área";
    char alt4[40] = "4- PIB";
    char alt5[40] = "5- Densidade Populacional";
    char alt6[40] = "6- PIB Per Capita";
    char alt7[40] = "7- Super Poder";

    // Cadastro da 1ª carta    
    printf("Informe o código do estado: ");
    scanf(" %s", codigo_estado1);

    printf("Informe o código da carta: ");
    scanf(" %s", codigo_carta1);

    printf("Informe o nome da cidade: ");
    scanf(" %s", nome_cidade1);

    printf("Informe a quantidade de habitantes: ");
    scanf(" %lu", &populacao1);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos1);

    printf("Informe a área da cidade em Km²: ");
    scanf(" %f", &area1);

    printf("Informe o PIB: ");
    scanf(" %lf", &pib1);

    // Cálculo da densidade populacional da 1ª carta
    densidade_pop1 = populacao1 / area1;

    // Cálculo do PIB per capita da 1ª carta
    pib_pc1 = pib1 / populacao1;

    // Cálculo do super poder da 1ª carta
    sup_poder1 = 
        populacao1 + 
        pontos_turisticos1 + 
        area1 + 
        pib1 + 
        pib_pc1 +
        (1 / densidade_pop1)
    ;

    // Impressão das informações da 1ª carta
    printf("\nInformações da Carta Cadastrada\n");
    printf("\nCódigo do Estado: %s\n", codigo_estado1);
    printf("Código da Carta: %s\n", codigo_carta1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("Número de Habitantes: %lu\n", populacao1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: R$ %.2lf\n", pib1);
    printf("Densidade Populacional: %.2f Habitantes por Km²\n", densidade_pop1);
    printf("PIB Per Capita: R$ %.2f\n", pib_pc1);
    printf("Superpoder: %.2f\n\n", sup_poder1);

    // Cadastro da 2ª carta
    printf("Informe o código do estado: ");
    scanf(" %s", codigo_estado2);

    printf("Informe o código da carta: ");
    scanf(" %s", codigo_carta2);

    printf("Informe o nome da cidade: ");
    scanf(" %s", nome_cidade2);

    printf("Informe a quantidade de habitantes: ");
    scanf(" %lu", &populacao2);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos2);

    printf("Informe a área da cidade em Km²: ");
    scanf(" %f", &area2);

    printf("Informe o PIB: ");
    scanf(" %lf", &pib2);

    // Cálculo da densidade populacional da 2ª carta
    densidade_pop2 = populacao2 / area2;

    // Cálculo do PIB per capita da 2ª carta
    pib_pc2 = pib2 / populacao2;

    // Cálculo do super poder da 2ª carta
    sup_poder2 = 
        populacao2 + 
        pontos_turisticos2 + 
        area2 + 
        pib2 + 
        pib_pc2 +
        (1 / densidade_pop2)
    ;

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
    printf("Superpoder: %.2f\n\n", sup_poder2);  

    // Menu interativo
    printf("*** Escolha o primeiro atributo para comparar ***\n");
    printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n", 
    alt1, alt2, alt3, alt4, alt5, alt6, alt7);    
    printf("Digite o número associado à opção desejada: ");
    scanf(" %d", &atributo1);

    // Definindo as alternativas restantes do menu interativo
    printf("\n*** Escolha o segundo atributo para comparar ***\n");

    switch (atributo1)
    {
    case 1:
        printf("%s\n%s\n%s\n%s\n%s\n%s\n", alt2, alt3, alt4, alt5, alt6, alt7); 
        break;
    
    case 2:
        printf("%s\n%s\n%s\n%s\n%s\n%s\n", alt1, alt3, alt4, alt5, alt6, alt7);
        break; 

    case 3:
        printf("%s\n%s\n%s\n%s\n%s\n%s\n", alt1, alt2, alt4, alt5, alt6, alt7);
        break;

    case 4:
        printf("%s\n%s\n%s\n%s\n%s\n%s\n", alt1, alt2, alt3, alt5, alt6, alt7);
        break;
    
    case 5:
        printf("%s\n%s\n%s\n%s\n%s\n%s\n", alt1, alt2, alt3, alt4, alt6, alt7);
        break;

    case 6:
        printf("%s\n%s\n%s\n%s\n%s\n%s\n", alt1, alt2, alt3, alt4, alt5, alt7);
        break;

    case 7:
        printf("%s\n%s\n%s\n%s\n%s\n%s\n", alt1, alt2, alt3, alt4, alt5, alt6);
        break; 
    }

    printf("Digite o número associado à opção desejada: ");
    scanf(" %d", &atributo2);
    
    // Mostrando o nome das cidades
    printf("\n*** %s x %s ***\n", nome_cidade1, nome_cidade2);

    // Mostrando o 1º atributo escolhido
    switch (atributo1)
    {
    case 1:
        printf("1º atributo escolhido: Nº de Habitantes\n");
        break;
    
    case 2:
        printf("1º atributo escolhido: Nº de Pontos Turísticos\n");
        break;
    
    case 3:
        printf("1º atributo escolhido: Área\n");
        break;

    case 4:
        printf("1º atributo escolhido: PIB\n");
        break;
    
    case 5:
        printf("1º atributo escolhido: Densidade Populacional\n");
        break;
    
    case 6:
        printf("1º atributo escolhido: PIB Per Capita\n");
        break;

    case 7:
        printf("1º atributo escolhido: Super Poder\n");
        break;    
    }

    // Mostrando o 2º atributo escolhido
    switch (atributo2)
    {
    case 1:
        printf("2º atributo escolhido: Nº de Habitantes\n");
        break;
    
    case 2:
        printf("2º atributo escolhido: Nº de Pontos Turísticos\n");
        break;
    
    case 3:
        printf("2º atributo escolhido: Área\n");
        break;

    case 4:
        printf("2º atributo escolhido: PIB\n");
        break;
    
    case 5:
        printf("2º atributo escolhido: Densidade Populacional\n");
        break;
    
    case 6:
        printf("2º atributo escolhido: PIB Per Capita\n");
        break;

    case 7:
        printf("2º atributo escolhido: Super Poder\n");
        break;    
    }

    // Mostrando os valores do 1º atributo de cada carta
    // Iniciando a soma dos atributos
    switch (atributo1)
    {
    case 1:
        printf("\n1º atributo: Nº de Habitantes\n");
        printf("%s: %.2lu\n", nome_cidade1, populacao1);
        printf("%s: %.2lu\n", nome_cidade2, populacao2);

        soma1 = populacao1;
        soma2 = populacao2;
        break;

    case 2:
        printf("\n1º atributo: Nº de Pontos Turísticos\n");
        printf("%s: %d\n", nome_cidade1, pontos_turisticos1);
        printf("%s: %d\n", nome_cidade2, pontos_turisticos2);

        soma1 = pontos_turisticos1;
        soma2 = pontos_turisticos2;
        break;

    case 3:
        printf("\n1º atributo: Área\n");
        printf("%s: %.2f\n", nome_cidade1, area1);
        printf("%s: %.2f\n", nome_cidade2, area2);

        soma1 = area1;
        soma2 = area2;
        break;

    case 4:
        printf("\n1º atributo: PIB\n");
        printf("%s: %.2lf\n", nome_cidade1, pib1);
        printf("%s: %.2lf\n", nome_cidade2, pib2);

        soma1 = pib1;
        soma2 = pib2;
        break;

    case 5:
        printf("\n1º atributo: Densidade Populacional\n");
        printf("%s: %.2f\n", nome_cidade1, densidade_pop1);
        printf("%s: %.2f\n", nome_cidade2, densidade_pop2);

        soma1 = densidade_pop1;
        soma2 = densidade_pop2;
        break;

    case 6:
        printf("\n1º atributo: PIB Per Capita\n");
        printf("%s: %.2f\n", nome_cidade1, pib_pc1);
        printf("%s: %.2f\n", nome_cidade2, pib_pc2);

        soma1 = pib_pc1;
        soma2 = pib_pc2;
        break;

    case 7:
        printf("\n1º atributo: Super Poder\n");
        printf("%s: %.2f\n", nome_cidade1, sup_poder1);
        printf("%s: %.2f\n", nome_cidade2, sup_poder2);

        soma1 = sup_poder1;
        soma2 = sup_poder2;
        break;
    
    default:
        printf("Opção inválida!");
        break;
    }

    // Mostrando os valores do 2º atributo de cada carta
    // Concluindo a soma dos atributos
    switch (atributo2)
    {
    case 1:
        printf("\n2º atributo: Nº de Habitantes\n");
        printf("%s: %.2lu\n", nome_cidade1, populacao1);
        printf("%s: %.2lu\n", nome_cidade2, populacao2);

        soma1 += populacao1;
        soma2 += populacao2;
        break;

    case 2:
        printf("\n2º atributo: Nº de Pontos Turísticos\n");
        printf("%s: %d\n", nome_cidade1, pontos_turisticos1);
        printf("%s: %d\n", nome_cidade2, pontos_turisticos2);

        soma1 += pontos_turisticos1;
        soma2 += pontos_turisticos2;
        break;

    case 3:
        printf("\n2º atributo: Área\n");
        printf("%s: %.2f\n", nome_cidade1, area1);
        printf("%s: %.2f\n", nome_cidade2, area2);

        soma1 += area1;
        soma2 += area2;
        break;

    case 4:
        printf("\n2º atributo: PIB\n");
        printf("%s: %.2lf\n", nome_cidade1, pib1);
        printf("%s: %.2lf\n", nome_cidade2, pib2);

        soma1 += pib1;
        soma2 += pib2;
        break;

    case 5:
        printf("\n2º atributo: Densidade Populacional\n");
        printf("%s: %.2f\n", nome_cidade1, densidade_pop1);
        printf("%s: %.2f\n", nome_cidade2, densidade_pop2);

        soma1 += densidade_pop1;
        soma2 += densidade_pop2;
        break;

    case 6:
        printf("\n2º atributo: PIB Per Capita\n");
        printf("%s: %.2f\n", nome_cidade1, pib_pc1);
        printf("%s: %.2f\n", nome_cidade2, pib_pc2);

        soma1 += pib_pc1;
        soma2 += pib_pc2;
        break;

    case 7:
        printf("\n2º atributo: Super Poder\n");
        printf("%s: %.2f\n", nome_cidade1, sup_poder1);
        printf("%s: %.2f\n", nome_cidade2, sup_poder2);

        soma1 += sup_poder1;
        soma2 += sup_poder2;
        break;
    
    default:
        printf("Opção inválida!");
        break;
    }

    // Mostrando a soma dos atributos para as duas cartas
    printf("\nSoma da 1ª Carta: %.2f\n", soma1);
    printf("Soma da 2ª Carta: %.2f\n", soma2);

    // Verificando e informando o resultado final
    if (soma1 > soma2)
        printf("\nA 1ª carta venceu!\n");
    else if (soma2 < soma1)
        printf("\nA 2ª carta venceu!\n");
    else
        printf("\nEmpate!\n");
    
    return 0;

}