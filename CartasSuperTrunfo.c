#include <stdio.h>

int structs() {
    int pontos_turísticos;
    int população;
    float pib;
    float área;
    char estado[10];
    char codigo_da_carta[20];
    char nome_da_cidade[20];

    // Dados da segunda carta
    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", nome_da_cidade);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo_da_carta);

    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite a área (km²): \n");
    scanf("%f", &área);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a população: \n");
    scanf("%d", &população);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turísticos);

    // Exibe os dados da segunda cidade
    printf("- Carta 2: %s\n - Código da carta: %s\n", nome_da_cidade, codigo_da_carta);
    printf("- Estado: %s\n - Área: %f\n", estado, área);
    printf("- PIB: %f\n - População: %d\n", pib, população);
    printf("- Número de pontos turísticos: %d\n", pontos_turísticos);

    return 0;
}

int main() {
    int pontos_turísticos;
    int população;
    float pib;
    float área;
    char estado[10];
    char codigo_da_carta[20];
    char nome_da_cidade[20];

    // Dados da primeira carta
    printf("Digite o nome da primeira cidade: \n");
    scanf("%s", nome_da_cidade); 

    printf("Digite o código da carta: \n");
    scanf("%s", codigo_da_carta);

    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite a área (km²): \n");
    scanf("%f", &área);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a população: \n");
    scanf("%d", &população);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turísticos);

    // Exibe os dados da primeira cidade
    printf("- Carta 1: %s\n - Código da carta: %s\n", nome_da_cidade, codigo_da_carta);
    printf("- Estado: %s\n - Área: %f\n", estado, área);
    printf("- PIB: %f\n - População: %d\n", pib, população);
    printf("- Número de pontos turísticos: %d\n", pontos_turísticos);

    // Chama a função para a segunda carta
    structs();

    return 0;
}
