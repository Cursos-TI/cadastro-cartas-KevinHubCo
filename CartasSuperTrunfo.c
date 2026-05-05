#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main(){
    // Área para definição das variáveis para armazenar as propriedades das cidades
    
    // Variaveis para a carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1, turisticos1;
    float area1, densidade1, percapita1;
    double pib1;
    float superpoder1;
    
    // Variaveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2, turisticos2;
    float area2, densidade2, percapita2;
    double pib2;
    float superpoder2;
    // Área para entrada de dados

    // Leitura da Carta 1
    printf("=============CARTA 1=============\n");
    printf("Digite o Estado (Uma letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o Codigo da Carta (Ex: A01): ");
    scanf("%s", codigo1);
    
    getchar(); // Limpar o enter 

    printf("Digite o nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Digite a População: ");
    scanf("%lu", &populacao1);
    printf("Digite a Area (em Km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB exato: ");
    scanf("%lf", &pib1);
    printf("Digite o número de Pontos Turisticos: ");
    scanf("%lu", &turisticos1);
    // Finalização Carta 1

    // Calcular Densidade 1 / PIB per Capita
    densidade1 = populacao1 / area1;
    percapita1 = pib1 / populacao1;

    // Leitura Carta 2
    printf("=============CARTA 2=============\n");

    printf("Digite o Estado (Uma letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o Codigo da Carta(Ex: B02): ");
    scanf(" %s", codigo2);

    getchar(); // Limpar o enter 

    printf("Digite o Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite a População: ");
    scanf("%lu", &populacao2);
    printf("Digite a Area (em Km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB exato: ");
    scanf("%lf", &pib2);
    printf("Digite o número de Pontos Turisticos: ");
    scanf("%lu", &turisticos2);

    // Calculos Densidade/PIB per Capita

    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;

    // Área para exibição dos dados da cidade

    // DADOS COLETADOS

    printf("\n=================================\n");
    printf("\n       CARTAS CADASTRADAS\n");
    printf("\n=================================\n");

    // CARTA 1
    printf("\n========== CARTA 1 ==========\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d de habitantes\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.1f Bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", percapita1);

    //CARTA 2
    printf("\n========== CARTA 2 ==========\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d de habitantes\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.1f Bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reias\n", percapita2);
    // SUPER PODER CARTA 1
    superpoder1 = (float)populacao1 + area1 + (float)pib1 + (float)turisticos1 + percapita1 + (1.0 / densidade1);
    //SUPER PODER CARTA 2
    superpoder2 = (float)populacao2 + area2 + (float)pib2 + (float)turisticos2 + percapita2 + (1.0 / densidade2);

    // COMPARAÇÃO DE CARTAS
    printf("\n ======== RESULTADO DA COMPARAÇÃO =========\n");

    printf("População: CARTA 1 VENCEU(%d)\n", populacao1 > populacao2);
    printf("Área: CARTA 1 VENCEU (%d)\n", area1 > area2);
    printf("PIB: CARTA 1 VENCEU (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: CARTA 1 VENCEU(%d)\n", turisticos1 > turisticos2);
    printf("PIB per Capita: CARTA 1 VENCEU(%d)\n",percapita1 > percapita2);
    printf("Super Poder: CARTA 1 VENCEU (%d)\n", superpoder1 > superpoder2);
    printf("Densidade Populacional: CARTA 2 VENCEU (%d)\n", densidade1 < densidade2);

    return 0;
}