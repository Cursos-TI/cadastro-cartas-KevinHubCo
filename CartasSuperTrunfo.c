#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
    //Variaveis para a Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1, turisticos1;
    float area1, pib1;
    //Variaveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2, turisticos2;
    float area2, pib2;

  // Área para entrada de dados
    // Entrada de dados Carta 1
    printf("=============CARTA 1=============\n");
    printf("Digite o Estado (Uma letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o Codigo da Carta (Ex: A01): ");
    scanf("%s", &codigo1);

    getchar(); // Limpar o enter

    printf("Digite o nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1 [strcspn(cidade1, "\n")] = '\0';

    printf("Digite a População: ");
    scanf("%d", &populacao1);
    printf("Digite a Area (em KM²): ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de Pontos Turisticos: ");
    scanf("%d", &turisticos1);

    // Entrada de dados Carta 2

    printf("=============CARTA 2=============\n");
    printf("Digite o Estado (Uma letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o Codigo da Carta (Ex: A01): ");
    scanf("%s", &codigo2);

    getchar();

    printf("Digite o Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite a População: ");
    scanf("%d", &populacao2);
    printf("Digite a Area (em Km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de Pontos Turisticos: ");
    scanf("%d", &turisticos2);

  // Área para exibição dos dados da cidade
    
    printf("\n=================================\n");
    printf("\n       CARTAS CADASTRADAS\n");
    printf("\n=================================\n");
    
    //CARTA 1
    printf("\n========== CARTA 1 ==========\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d de habitantes\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", turisticos1);

    //CARTA 2
    printf("\n========== CARTA 2 ==========\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d de habitantes\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", turisticos2);



return 0;
} 
