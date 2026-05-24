#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // CARTA 1 - Belo Horizonte
    char estado1[50]= "Minas Gerais";
    char codigo1[10]= "M01";
    char cidade1[50]= "Belo Horizonte";
    int populacao1 = 2315560;
    float area1 = 331.41;
    float pib1= 130.2;
    int pontosTuristicos1= 25; 
    float Densidade1;
    float Pib_percapita1;
  

    // CARTA 2 - Contagem
    char estado2[50] = "Minas Gerais";
    char codigo2[10] = "M02";
    char cidade2[50] = "Contagem";
    int populacao2 = 668949 ;
    float area2 = 194.74;
    float pib2 =36.27;
    int pontosTuristicos2 = 10;
    float Densidade2;
    float Pib_percapita2;
   

    //calculo Densidade
    Densidade1 = populacao1 / area1;
    Densidade2 = populacao2 / area2;

    // calculo Pib per capita
    Pib_percapita1 = pib1 * 1000000000.0 / populacao1;
    Pib_percapita2 = pib2 * 1000000000.0/ populacao2;

    printf("\n"); // Pula linha
    printf("----------------------------\n\n");

    printf("***CARTAS CADASTRADAS COM SUCESSO ***\n\n");

    printf("----------------------------\n");
    printf("----------------------------\n");

    // Exibindo Belo Horizonte
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População habitantes:  %.d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populaciona: %.2f hab/km²\n", Densidade1);
    printf("Pib per Capita: R$ %.2f reais\n", Pib_percapita1);

    printf("----------------------------\n");
    printf("----------------------------\n");

    // Exibindo Contagem
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População habitantes: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populaciona: %.2f hab/km²\n", Densidade2);
    printf("Pib per Capita: R$ %.2f reais\n", Pib_percapita2);

    printf("----------------------------\n");

     
    return 0;
} 
