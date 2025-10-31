#include <stdio.h>
#include <string.h>

struct Carta {
    char estado[50];
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos;
};

int main() {
    struct Carta c1, c2;

    printf("\n--- Carta 1 ---\n");
    printf("Estado: ");
    fgets(c1.estado, 50, stdin);
    c1.estado[strcspn(c1.estado, "\n")] = 0;

    printf("Codigo: ");
    scanf("%s", c1.codigo);
    getchar();

    printf("Cidade: ");
    fgets(c1.cidade, 50, stdin);
    c1.cidade[strcspn(c1.cidade, "\n")] = 0;

    printf("Populacao: ");
    scanf("%d", &c1.populacao);

    printf("Area: ");
    scanf("%f", &c1.area);

    printf("PIB: ");
    scanf("%f", &c1.pib);

    printf("Pontos turisticos: ");
    scanf("%d", &c1.pontos);
    getchar();

    printf("\n--- Carta 2 ---\n");
    printf("Estado: ");
    fgets(c2.estado, 50, stdin);
    c2.estado[strcspn(c2.estado, "\n")] = 0;

    printf("Codigo: ");
    scanf("%s", c2.codigo);
    getchar();

    printf("Cidade: ");
    fgets(c2.cidade, 50, stdin);
    c2.cidade[strcspn(c2.cidade, "\n")] = 0;

    printf("Populacao: ");
    scanf("%d", &c2.populacao);

    printf("Area: ");
    scanf("%f", &c2.area);

    printf("PIB: ");
    scanf("%f", &c2.pib);

    printf("Pontos turisticos: ");
    scanf("%d", &c2.pontos);

    float dens1 = c1.populacao / c1.area;
    float dens2 = c2.populacao / c2.area;
    float pib1 = (c1.pib * 1000000000) / c1.populacao;
    float pib2 = (c
