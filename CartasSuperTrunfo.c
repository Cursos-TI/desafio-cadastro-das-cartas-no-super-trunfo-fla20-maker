#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    char estado;
    char codigo[3],nomedacidade[30];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    
    printf("digite o estado: \n");
    scanf("%c", &estado);
    printf("atribua um codigo: \n");
    scanf("%s", &codigo);
    printf("digite a cidade: \n");
    scanf("%s", &nomedacidade);
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
    printf("codigo: %s \n", codigo);
    printf("cidade nomeada: %s \n", nomedacidade);
    printf("populaçao: %d habitantes \n", populacao);
    printf("area: %f kilometros quadrados\n", area);
    printf("produto interno bruto: %f bilhoes de reais \n", pib);
    printf("quantidade de pontos turisticos: %d \n", pontosturisticos);

    return 0;
}
