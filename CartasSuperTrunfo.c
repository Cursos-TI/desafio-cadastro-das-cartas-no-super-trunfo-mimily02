#include <stdio.h>

typedef struct {
    char nome[50];
    char codigo[20];
    char estado[50];
    float area;
    float pib; // Em bilhões
    unsigned long int populacao;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Cidade;

void preencherCarta(Cidade *carta, int numero) {
    printf("\nDigite o nome da cidade %d:\n", numero);
    scanf(" %[^\n]", carta->nome);

    printf("Digite o código da carta:\n");
    scanf(" %s", carta->codigo);

    printf("Digite o estado:\n");
    scanf(" %[^\n]", carta->estado);

    printf("Digite a área (km²):\n");
    scanf("%f", &carta->area);

    printf("Digite o PIB (em bilhões de reais):\n");
    scanf("%f", &carta->pib);

    printf("Digite a população:\n");
    scanf("%lu", &carta->populacao);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &carta->pontos_turisticos);

    // Cálculos
    carta->densidade_populacional = carta->populacao / carta->area;
    carta->pib_per_capita = (carta->pib * 1e9) / carta->populacao;

    // Super Poder: população + área + PIB + pontos turísticos + PIB per capita + (1 / densidade)
    carta->super_poder = 
        (float)carta->populacao + 
        carta->area + 
        carta->pib + 
        (float)carta->pontos_turisticos + 
        carta->pib_per_capita + 
        (1.0f / carta->densidade_populacional);
}

void exibirCarta(Cidade carta, int numero) {
    printf("\nCarta %d:\n", numero);
    printf("Estado: %s\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nome);
    printf("População: %lu\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta.pib_per_capita);
    printf("Super Poder: %.2f\n", carta.super_poder);
}

void compararCartas(Cidade c1, Cidade c2) {
    printf("\nComparação de Cartas:\n");

    // Comparações de cada atributo
    printf("População: Carta 1 venceu (%d)\n", c1.populacao > c2.populacao);
    printf("Área: Carta 1 venceu (%d)\n", c1.area > c2.area);
    printf("PIB: Carta 1 venceu (%d)\n", c1.pib > c2.pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", c1.pontos_turisticos > c2.pontos_turisticos);
    
    // Comparando densidade populacional: menor densidade vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", c1.densidade_populacional < c2.densidade_populacional);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", c1.pib_per_capita > c2.pib_per_capita);
    
    // Comparando o Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", c1.super_poder > c2.super_poder);
}

int main() {
    Cidade carta1, carta2;

    // Preenchendo as cartas
    preencherCarta(&carta1, 1);
    preencherCarta(&carta2, 2);

    // Exibindo as cartas
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    // Comparando as cartas
    compararCartas(carta1, carta2);

    return 0;
}