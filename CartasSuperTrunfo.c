#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    char estado;
    char codigo[3];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    char estado2;
    char codigo2[3];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    printf("digite o estado: \n");
    scanf("%c", &estado);
    printf("incira um codigo: \n");
    scanf("%s", codigo);
    printf("incira a cidade: \n");
    scanf("%s", cidade);
    printf("incira a populaçao: \n");
    scanf("%d", &populacao);
    printf("incira a area: \n");
    scanf("%f", &area);
    printf("incira o pib: \n");
    scanf("%f", &pib);
    printf("incira seus pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    printf("digite o estado: \n");
    scanf("%c", &estado2);
    printf("incira um codigo: \n");
    scanf("%s", codigo2);
    printf("incira a cidade: \n");
    scanf("%s", cidade2);
    printf("incira a populaçao: \n");
    scanf("%d", &populacao2);
    printf("incira a area: \n");
    scanf("%f", &area2);
    printf("incira o pib: \n");
    scanf("%f", &pib2);
    printf("incira seus pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);

    printf("carta 1: \n");
    printf("estado: %c \n", estado);
    printf("codigo: %s \n", codigo);
    printf("cidade: %s \n", cidade);
    printf("populaçao: %d habitantes \n", populacao);
    printf("area: %f kilometros quadrados\n", area);
    printf("produto interno bruto: %f bilhoes de reais \n", pib);
    printf("quantidade de pontos turisticos: %d \n", pontosturisticos);

    printf("carta 2: \n");
    printf("estado: %c \n", estado2);
    printf("codigo: %s \n", codigo2);
    printf("cidade: %s \n", cidade2);
    printf("populaçao: %d habitantes \n", populacao2);
    printf("area: %f kilometros quadrados\n", area2);
    printf("produto interno bruto: %f bilhoes de reais \n", pib2);
    printf("quantidade de pontos turisticos: %d \n", pontosturisticos2);


    return 0;
}
