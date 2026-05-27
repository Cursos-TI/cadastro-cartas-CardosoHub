#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

  // Variáveis para armazenar as propriedades das cidades

  // CARTA 1 - Belo Horizonte
    char estado1[50]= "Minas Gerais";
    char codigo1[10]= "M01";
    char cidade1[50]= "Belo Horizonte";
    unsigned long int populacao1 = 2315560;
    float area1 = 331.41;
    float pib1= 130.2;
    int pontosTuristicos1= 25; 
    float Densidade1;
    float Pib_percapita1;
    float SuperPoderCarta1;
  

    // CARTA 2 - Contagem
    char estado2[50] = "Minas Gerais";
    char codigo2[10] = "M02";
    char cidade2[50] = "Contagem";
    unsigned long int populacao2 = 668949 ;
    float area2 = 194.74;
    float pib2 =36.27;
    int pontosTuristicos2 = 10;
    float Densidade2;
    float Pib_percapita2;
    float SuperPoderCarta2;

   

    //Cálculo  Densidade (População / Área)
    Densidade1 = populacao1 / area1;
    Densidade2 = populacao2 / area2;

    // calculo Pib per capita
    Pib_percapita1 = pib1 * 1000000000.0 / populacao1;
    Pib_percapita2 = pib2 * 1000000000.0/ populacao2;

    // CÁLCULO DO SUPER PODER
    // Regra: Soma de todos os atributos + o inverso da densidade (1.0 / densidade)
    // O PIB entra com seu valor real em reais para ficar equilibrado com a população
    SuperPoderCarta1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + (float)pontosTuristicos1 + Pib_percapita1 + (1.0f / Densidade1);
    SuperPoderCarta2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + (float)pontosTuristicos2 + Pib_percapita2 + (1.0f / Densidade2);

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
    printf("População habitantes: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populaciona: %.2f hab/km²\n", Densidade1);
    printf("Pib per Capita: R$ %.2f reais\n", Pib_percapita1);
    printf("Super Poder: %.2f\n", SuperPoderCarta1); // Exibindo o Super Poder

    printf("----------------------------\n");
    printf("----------------------------\n");

    // Exibindo Contagem
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População habitantes: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populaciona: %.2f hab/km²\n", Densidade2);
    printf("Pib per Capita: R$ %.2f reais\n", Pib_percapita2);
    printf("Super Poder: %.2f\n", SuperPoderCarta2); // Exibindo o Super Poder

    printf("----------------------------\n");

    //  COMPARAÇÃO DAS CARTAS - // LÓGICA DE COMPARAÇÃO USANDO IF / IF-ELSE
    
    printf("============================================\n");
    printf("Comparação de cartas (Atributo: População):\n");
    printf("============================================\n");
    
    printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);
    printf("--------------------------------------------\n");

    // Estrutura de decisão para verificar quem tem a maior população
    if (populacao1 > populacao2) {
        printf("Resultado:  (%s) possui a maior população!\n", cidade1);
    } else {
        printf("Resultado:  (%s) possui a maior população!\n", cidade2);
    }

    printf("============================================\n");
    printf("Comparação de cartas (Atributo: Área):\n");
    printf("============================================\n");
    
    printf("Carta 1 - %s (%s): %f\n", cidade1, estado1, area1);
    printf("Carta 2 - %s (%s): %f\n", cidade2, estado2, area2);
    printf("--------------------------------------------\n");

    // Estrutura de decisão para verificar quem tem a maior Área
    if (area1 > area2) {
        printf("Resultado:  (%s) possui a maior Área !!\n", cidade1);
    } else {
        printf("Resultado:  (%s) possui a maior Área!\n", cidade2);
    } 

    printf("============================================\n");
    printf("Comparação de cartas (Atributo: PIB):\n");
    printf("============================================\n");
    
    printf("Carta 1 - %s (%s): %f\n", cidade1, estado1, pib1);
    printf("Carta 2 - %s (%s): %f\n", cidade2, estado2, pib2);
    printf("--------------------------------------------\n");

    // Estrutura de decisão para verificar quem tem a maior Área
    if (pib1 > pib2) {
        printf("Resultado:  (%s) possui o maior PIB !!\n", cidade1);
    } else {
        printf("Resultado:  (%s) possui o maior PIB!\n", cidade2);
    } 

    printf("============================================\n");
    printf("Comparação de cartas (Atributo: Pontos Turisticos):\n");
    printf("============================================\n");
    
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, pontosTuristicos1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pontosTuristicos2);
    printf("--------------------------------------------\n");

    // Estrutura de decisão para verificar quem tem a maior quantidade de pontos turisticos
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Resultado:  (%s) possui  a maior quantidade de pontos turisticos !!\n", cidade1);
    } else {
        printf("Resultado:  (%s) possui  a maior quantidade de pontos turisticos!\n", cidade2);
    } 

    printf("============================================\n");
    printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
    printf("============================================\n");
    
    printf("Carta 1 - %s (%s): %f\n", cidade1, estado1, Densidade1);
    printf("Carta 2 - %s (%s): %f\n", cidade2, estado2, Densidade2);
    printf("--------------------------------------------\n");

    // Estrutura de decisão para verificar quem tem a menor Densidade Populacional)
    if (Densidade1 < Densidade2) {
        printf("Resultado:  (%s) possui  a menor Densidade Populacional) !!\n", cidade1);
    } else {
        printf("Resultado:  (%s) possui  a menor Densidade Populacional)!\n", cidade2);
    } 
       
    printf("============================================\n");
    printf("Comparação de cartas (Atributo: Pib per capita");
    printf("============================================\n");
    
    printf("Carta 1 - %s (%s): %f\n", cidade1, estado1, Pib_percapita1);
    printf("Carta 2 - %s (%s): %f\n", cidade2, estado2, Pib_percapita2);
    printf("--------------------------------------------\n");

    // Estrutura de decisão para verificar quem tem o maior Pib per capita)
    if (Pib_percapita1 > Pib_percapita2) {
        printf("Resultado:  (%s) possui  o maior Pib per capita) !!\n", cidade1);
    } else {
        printf("Resultado:  (%s) possui  o maior Pib per capita)!\n", cidade2);
    } 
     
    return 0;
} 
