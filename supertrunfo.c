#include <stdio.h>

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;

    // Cadastro das Cartas (Entradas do usuário)
    printf("Digite o nome da cidade 1: ");
    scanf("%s", cidade1);
    printf("Digite a população da cidade 1 (em milhões): ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade 1 (em trilhões): ");
    scanf("%f", &pib1);

    printf("\nDigite o nome da cidade 2: ");
    scanf("%s", cidade2);
    printf("Digite a população da cidade 2 (em milhões): ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade 2 (em trilhões): ");
    scanf("%f", &pib2);

    // Comparação de Cartas:
    // Comparando população
    if (populacao1 > populacao2) {
        printf("%s tem maior população.\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("%s tem maior população.\n", cidade2);
    } else {
        printf("Ambas as cidades têm a mesma população.\n");
    }

    // Comparando área
    if (area1 > area2) {
        printf("%s tem maior área.\n", cidade1);
    } else if (area2 > area1) {
        printf("%s tem maior área.\n", cidade2);
    } else {
        printf("Ambas as cidades têm a mesma área.\n");
    }

    // Comparando PIB
    if (pib1 > pib2) {
        printf("%s tem maior PIB.\n", cidade1);
    } else if (pib2 > pib1) {
        printf("%s tem maior PIB.\n", cidade2);
    } else {
        printf("Ambas as cidades têm o mesmo PIB.\n");
    }

    return 0;
}
