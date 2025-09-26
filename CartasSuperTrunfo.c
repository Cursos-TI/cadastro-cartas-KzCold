#include <stdio.h>

struct Carta {
    char estado;                  
    char codigo[4];               
    char nomeCidade[50];          
    int populacao;                
    float area;                   
    float pib;                    
    int pontosTuristicos;         
};

void cadastrarCarta(struct Carta *carta, int numero) {
    printf("\n=== Cadastro da Carta %d ===\n", numero);

    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta->estado);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta->codigo);

    printf("Digite o nome da cidade: ");
    getchar(); 
    fgets(carta->nomeCidade, sizeof(carta->nomeCidade), stdin);

    size_t len = strlen(carta->nomeCidade);
    if (len > 0 && carta->nomeCidade[len-1] == '\n') {
        carta->nomeCidade[len-1] = '\0';
    }

    printf("Digite a população: ");
    scanf("%d", &carta->populacao);

    printf("Digite a área (em km²): ");
    scanf("%f", &carta->area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta->pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

void exibirCarta(struct Carta carta, int numero) {
    printf("\n=== Carta %d ===\n", numero);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

int main() {
    struct Carta carta1, carta2;

    cadastrarCarta(&carta1, 1);
    cadastrarCarta(&carta2, 2);

    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    return 0;
}