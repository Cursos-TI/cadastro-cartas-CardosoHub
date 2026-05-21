#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // --- VARIÁVEIS DA CARTA 1 (Belo Horizonte) ---
    char estado1;
    char codigo1[10];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1; 

    // --- VARIÁVEIS DA CARTA 2 (Contagem) ---
    char estado2;
    char codigo2[10];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

  // Área para entrada de dados
    printf(" CADASTRO DA CARTA 1 \n");
    
    printf("Digite a letra do Estado (Use 'M' para MG): ") ;
    scanf(" %c", &estado1);
    
    printf("Digite o Código da Carta (Sugerido 'M02'): ") ;
    scanf(" %s", codigo1);
    printf("\n");
    
    printf("Digite o Nome da Cidade: ") ;
    scanf(" %[^\n]", nomeCidade1);
    
    printf("Digite a População: ");
    scanf(" %d", &populacao1);
    
    printf("Digite a Área (em km²): ");
    scanf(" %f", &area1);
    
    printf("Digite o PIB (em bilhões): ");
    scanf(" %f", &pib1);
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);
    
    printf("\n"); // Pula linha

    // --- ENTRADA DE DADOS: CARTA 2 ---
    printf("CADASTRO DA CARTA 2 \n");
    
    printf("Digite a letra do Estado (Use 'M' para MG): ") ;
    scanf(" %c", &estado2);
    
    printf("Digite o Código da Carta (Sugerido 'M02'): ") ;
    scanf(" %s", codigo2);
    
    printf("Digite o Nome da Cidade: ") ;
    scanf(" %[^\n]", nomeCidade2);
    
    printf("Digite a População: ");
    scanf(" %d", &populacao2);
    
    printf("Digite a Área (em km²): ");
    scanf(" %f", &area2);
    
    printf("Digite o PIB (em bilhões): ");
    scanf(" %f", &pib2);
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);
    
    printf("\n========================================\n\n");

  // Área para exibição dos dados da cidade
  printf("--- CARTAS CADASTRADAS COM SUCESSO ---\n\n");

    // Exibindo Belo Horizonte
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontosTuristicos1);

    // Exibindo Contagem
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

     
    return 0;
} 
