#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    char estado;
    char codigo[3];
    char nomedacidade[30];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    
    printf("digite o estado: \n");
    scanf("%c, &estado");
    printf("atribua um codigo(lembrando que a letra no inicio do codigo deve ser a mesma do estado, e o numero e apenas de 01 a 04.): \n");
    scanf("%s, &codigo");
    printf("digite a cidade: \n");
    scanf("%s, &nomedacidade");
    printf("incira a populaçao: \n");
    scanf("%d, &populacao");
    printf("incira a area: \n");
    scanf("%f, &area");
    printf("incira o pib: \n");
    scanf("%f, &pib");
    printf("incira seus pontos turisticos: \n");
    scanf("%d, &pontosturisticos");

    printf("carta 1: \n");
    printf("estado: %s\n", estado);
    printf("estado: %s\n", codigo);
    printf("estado: %s\n", nomedacidade);
    printf("estado: %d\n", populacao);
    printf("estado: %f\n", area);
    printf("estado: %f\n", pib);
    printf("estado: %d\n", pontosturisticos);

    return 0;
}
