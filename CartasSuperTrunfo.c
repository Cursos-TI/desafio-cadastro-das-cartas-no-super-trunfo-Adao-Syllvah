#include <stdio.h>


int main() {

    char estado, estado2;
    char codigoCarta [3], nomeCidade [20], codigoCarta2 [3], nomeCidade2 [20];
    int populacao, numerosPontosTuristicos, populacao2, numerosPontosTuristicos2;
    float area, pib, area2, pib2;
    
    //Entrada de dados primeira carta
    printf("Carta 1: \n");
    printf("Digite a letra do primeiro estado de A a H: ");
    scanf(" %c", &estado);
    printf("Codigo da primeira carta de 01 a 04: ");
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

    
    //Entrada de dados segunda carta
    printf("\nCarta 2:\n");
    printf("Digite a letra do segundo estado de A a H: ");
    scanf(" %c", &estado2);
    printf("Codigo da segunda carta de 01 a 04: ");
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
    
    //Exibição de dados digitados
    printf("\nCarta 1 \n Estado: %c\n Codigo: %c%s\n Nome da cidade: %s\n Populacao: %d\n area: %f Km2\n PIB: %f\n Numero de pontos turisticos: %d \n\n", estado, estado, codigoCarta, nomeCidade, populacao, area, pib, numerosPontosTuristicos);
    printf("Carta 2 \n Estado: %c\n Codigo: %c%s\n Nome da cidade: %s\n Populacao: %d\n area: %f Km2\n PIB: %f\n Numero de pontos turisticos: %d \n\n", estado2, estado2, codigoCarta2, nomeCidade2, populacao2, area2, pib2, numerosPontosTuristicos2);
    

    return 0;
}
