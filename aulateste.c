#include <stdio.h>
#include <string.h>

// Função para limpar o buffer de entrada
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        ; // descarta
    }
}

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1[50], codigodecarta1[50], nomedacidade1[100];
    int populacao1, numerodepontosturisticos1;
    float area1, pib1, densidade1, pib_per_capita1;

    // Entrada de dados para a Carta 1
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf("%s", estado1);
    limpar_buffer();

    printf("Codigo da Carta: ");
    scanf("%s", codigodecarta1);
    limpar_buffer();

    printf("Nome da Cidade: ");
    fgets(nomedacidade1, sizeof(nomedacidade1), stdin);
    nomedacidade1[strcspn(nomedacidade1, "\n")] = '\0'; // Remove o '\n' do final

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &numerodepontosturisticos1);

    // Cálculos para a Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 * 1e9 / populacao1; // Convertendo PIB para reais

    // Exibição dos resultados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigodecarta1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", numerodepontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // Declaração das variáveis para a Carta 2
    char estado2[50], codigodecarta2[50], nomedacidade2[100];
    int populacao2, numerodepontosturisticos2;
    float area2, pib2, densidade2, pib_per_capita2;

    // Entrada de dados para a Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    limpar_buffer();

    printf("Codigo da Carta: ");
    scanf("%Ms", codigodecarta2);
    limpar_buffer();

    printf("Nome da Cidade: ");
    fgets(nomedacidade2, sizeof(nomedacidade2), stdin);
    nomedacidade2[strcspn(nomedacidade2, "\n")] = '\0'; // Remove o '\n' do final

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &numerodepontosturisticos2);

    // Cálculos para a Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 * 1e9 / populacao2; // Convertendo PIB para reais

    // Exibição dos resultados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigodecarta2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", numerodepontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}