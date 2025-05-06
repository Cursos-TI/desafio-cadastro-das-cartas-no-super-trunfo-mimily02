#include <stdio.h>

typedef struct {
    char nome[50];
    char codigo[20];
    char estado[50];
    float area;
    float pib; // Em bilhões
    int populacao;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Cidade;

void preencherCarta(Cidade *carta, int numero) {
    printf("\nDigite o nome da cidade %d:\n", numero);
    scanf(" %[^\n]s", carta->nome);

    printf("Digite o código da carta:\n");
    scanf("%s", carta->codigo);

    printf("Digite o estado:\n");
    scanf(" %[^\n]s", carta->estado);

    printf("Digite a área (km²):\n");
    scanf("%f", &carta->area);

    printf("Digite o PIB (em bilhões de reais):\n");
    scanf("%f", &carta->pib);

    printf("Digite a população:\n");
    scanf("%d", &carta->populacao);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &carta->pontos_turisticos);

    // Cálculos
    carta->densidade_populacional = carta->populacao / carta->area;
    carta->pib_per_capita = (carta->pib * 1000000000) / carta->populacao;
}

void exibirCarta(Cidade carta, int numero) {
    printf("\nCarta %d:\n", numero);
    printf("Estado: %s\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nome);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta.pib_per_capita);
}

int main() {
    Cidade carta1, carta2;

    preencherCarta(&carta1, 1);
    preencherCarta(&carta2, 2);

    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    return 0;
}