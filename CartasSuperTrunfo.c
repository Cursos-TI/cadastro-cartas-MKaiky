#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // --- Carta 1 ---
    char estado[50];
    char codigo[10];
    char cidade[50];
    int populacao;
    int pontosturisticos;
    float area;
    float PIB;

    // --- Carta 2 ---
    char estado2[50];
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    int pontosturisticos2;
    float area2;
    float PIB2;

  // Área para entrada de dados

  // Cadastro da carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Nome do Estado: ");
    scanf(" %s", estado); 
    printf("Código da Carta: ");
    scanf(" %d", codigo); 
    printf("Nome da Cidade: ");
    scanf(" %s", cidade);
    printf("População: ");
    scanf("%d", &populacao);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos);
    printf("Área de km²: ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &PIB);

    // Cadastro da carta 2
    printf("=== Cadastro da Carta 2 ===\n");
    printf("Nome do Estado: ");
    scanf(" %s", estado2); 
    printf("Código da Carta: ");
    scanf(" %d", codigo2); 
    printf("Nome da Cidade: ");
    scanf(" %s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);
    printf("Área de km²: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &PIB2);

  // Área para exibição dos dados da cidade

   // Exibição das cartas
    printf("\n=== Cartas Cadastradas ===\n");
    printf("\nCarta 1\n");
    printf("Nome do Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade:  %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos);
    printf("Área de km²: %f\n", area);
    printf("PIB: %f", PIB);

    printf("\nCarta 2\n");
    printf("Nome do Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade:  %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Área de km²: %f\n", area2);
    printf("PIB: %f", PIB2);

return 0;
} 
