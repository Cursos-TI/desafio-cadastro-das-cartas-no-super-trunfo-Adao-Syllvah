#include <stdio.h>


int main() {

    printf("Carta 1: \n");
    char estado, estado2;
    char codigoCarta [3], nomeCidade [10], codigoCarta2 [3], nomeCidade2 [10];
    int populacao, numerosPontosTuristicos, populacao2, numerosPontosTuristicos2;
    float area, pib, area2, pib2;
    printf("Digite o estado: ");
    scanf(" %c", &estado);
    printf("Codigo da carta: ");
    scanf("%s", codigoCarta);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade);
    printf("Populacao: ");
    scanf("%d", &populacao);
    printf("Area: ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Numeros de pontos turisticos: ");
    scanf("%d", &numerosPontosTuristicos);

    
    
    printf("Carta 2:\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado2);
    printf("Codigo da carta: ");
    scanf("%s", codigoCarta2);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numeros de pontos turisticos: ");
    scanf("%d", &numerosPontosTuristicos2);
    
    
    printf("\nCarta 1 \n Estado: %c\n Codigo: %c%s\n Nome da cidade: %s\n Populacao: %d\n area: %f Km2\n PIB: %f\n Numero de pontos turisticos: %d \n\n", estado, estado, codigoCarta, nomeCidade, populacao, area, pib, numerosPontosTuristicos);
    printf("Carta 2 \n Estado: %c\n Codigo: %c%s\n Nome da cidade: %s\n Populacao: %d\n area: %f Km2\n PIB: %f\n Numero de pontos turisticos: %d \n\n", estado2, estado2, codigoCarta2, nomeCidade2, populacao2, area2, pib2, numerosPontosTuristicos2);
    

    return 0;
}
