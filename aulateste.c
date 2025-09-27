#include <stdio.h>

int main() {
  printf("Desafio Super Trunfo!\n");

  // carta 1
  char estado1[23]; char codigodecarta1[23]; char nomedacidade1[45];     
  int populacao1, numerodepontosturisticos1;
  float area1, pib1;

  // cadastro carta 1
  printf("Codigo da Carta: ");
  scanf("%s", codigodecarta1);

  printf("Estado: ");
  scanf("%s", estado1);

  printf("Nome da Cidade: ");
  scanf("%s", nomedacidade1);

  printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("Area: ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &numerodepontosturisticos1);

  // exibicao carta 1
  
  printf("Codigo da Carta: %s\n", codigodecarta1);
  printf("Estado: %s\n", estado1);
  printf("Nome da Cidade: %s\n", nomedacidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", numerodepontosturisticos1);

  // carta 2
  char estado2[12];
  char codigodecarta2[29];
  char nomedacidade2[38];
  int populacao2, numerodepontosturisticos2;
  float area2, pib2;

  // cadastro carta 2
  printf("\nCodigo da Carta: ");
  scanf("%s", codigodecarta2);

  printf("Estado: ");
  scanf("%s", estado2);

  printf("Nome da Cidad: ");
  scanf("%s", nomedacidade2);

  printf("Populacao: ");
  scanf("%d", &populacao2);

  printf("Area: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &numerodepontosturisticos2);

  // exibicao carta 2

  printf("Codigo da Carta: %s\n", codigodecarta2);
  printf("Estado: %s\n", estado2);
  printf("Nome da Cidade: %s\n", nomedacidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", numerodepontosturisticos2);

  return 0;
}
