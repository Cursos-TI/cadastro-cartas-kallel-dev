#include <stdio.h>
//Estou montando a carta com printf

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char cidade[50];
    int codigo;
    float populacao;
    float area;
    float pib;
    int pontos;

    char cidade2[50];
    int codigo2;
    float populacao2;
    float area2;
    float pib2;
    int pontos2;



    
  // Área para entrada de dados

    // Cidade 1
    printf("Digite o nome da cidade que ira representar Tocantins: ");
    scanf("%s", cidade);

    printf("Digite o código de 1 a 4: ");
    scanf("%d", &codigo);

    printf("Digite a populacao da sua cidade: ");
    scanf("%f", &populacao);

    printf("Digite a área aproximada da cidade em km2: ");
    scanf("%f", &area);

    printf("Digite o PIB aproximado da cidade: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &pontos);

    printf("\n");

    // Cidade 2
    printf("Digite o nome da segunda cidade que ira representar Tocantins: ");
    scanf("%s", cidade2);

    printf("Digite o código (diferente de 1 a 4): ");
    scanf("%d", &codigo2);

    printf("Digite a populacao da cidade: ");
    scanf("%f", &populacao2);

    printf("Digite a área aproximada da cidade em km2: ");
    scanf("%f", &area2);

    printf("Digite o PIB aproximado da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &pontos2);

    printf("\n");


  // Área para exibição dos dados da cidade

    // Primeira Carta
    printf("Carta 01\n");
    printf("Cidade: %s\n", cidade);
    printf("Codigo da Cidade: T%d\n", codigo);
    printf("Populacao: %.0f habitantes\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turisticos: %d\n", pontos);

    printf("\n");

    // Segunda Carta
    printf("Carta 02\n");
    printf("Cidade: %s\n", cidade2);
    printf("Codigo da Cidade: T%d\n", codigo2);
    printf("Populacao: %.0f habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);

    
    return 0;
}