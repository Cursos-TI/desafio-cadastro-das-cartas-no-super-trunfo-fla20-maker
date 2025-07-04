#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    char estado;
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    char estado2;
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    printf("digite o estado: \n");
    scanf("%c", &estado);
    printf("incira a populaçao: \n");
    scanf("%d", &populacao);
    printf("incira a area: \n");
    scanf("%f", &area);
    printf("incira o pib: \n");
    scanf("%f", &pib);
    printf("incira seus pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    printf("carta 1: \n");
    printf("estado: %c \n", estado);
    printf("populaçao: %d habitantes \n", populacao);
    printf("area: %f kilometros quadrados\n", area);
    printf("produto interno bruto: %f bilhoes de reais \n", pib);
    printf("quantidade de pontos turisticos: %d \n", pontosturisticos);
    
    printf("digite o estado: \n");
    scanf("%c", &estado2);
    printf("incira a populaçao: \n");
    scanf("%d", &populacao2);
    printf("incira a area: \n");
    scanf("%f", &area2);
    printf("incira o pib: \n");
    scanf("%f", &pib2);
    printf("incira seus pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);

    printf("carta 2: \n");
    printf("estado: %c \n", estado2);
    printf("populaçao: %d habitantes \n", populacao2);
    printf("area: %f kilometros quadrados\n", area2);
    printf("produto interno bruto: %f bilhoes de reais \n", pib2);
    printf("quantidade de pontos turisticos: %d \n", pontosturisticos2);


    return 0;
}
