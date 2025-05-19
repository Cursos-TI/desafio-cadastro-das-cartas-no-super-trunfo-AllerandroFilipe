#include <stdio.h>

int main(){
    char estado1[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', '\0'};
    char estado2[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', '\0'};
    char carta1[] = {'01', '02', '03', '04', '\0'};
    char carta2[] = {'01', '02', '03', '04', '\0'};
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ponto1, ponto2;
    float Densidade1, Densidade2;
    float PerCapita1, PerCapita2;

    // Solicita ao usuário uma letra de A a H para representar o estado
    printf("Digite uma letra de A a H para representar o estado: ");
    scanf("%s", estado1);

    // Solicita ao usuário o código da carta (de 01 a 04)
    printf("Digite o código da carta (entre 01 e 04):");
    scanf("%s", carta1);

    // Solicita ao usuário o nome da cidade
    printf("Digite o nome da cidade:");
    scanf("%s", cidade1);

    // Solicita ao usuário o número de habitantes da cidade
    printf("Digite número de habitantes da cidade:");
    scanf("%d", &populacao1);

    // Solicita ao usuário a área da cidade em quilômetros quadrados
    printf("Digite a área da cidade em quilômetros quadrados:");
    scanf("%f", &area1);

    // Solicita ao usuário o PIB (Produto Interno Bruto) da cidade
    printf("Digite o PIB da cidade:");
    scanf("%f", &pib1);

    // Solicita ao usuário a quantidade de pontos turísticos na cidade
    printf("Digite a quantidade de pontos turísticos na cidade:");
    scanf("%d", &ponto1);

    // Calcula a Densidade Populacional
    Densidade1 = populacao1 / area1;

    // Calcula a Densidade Populacional
    PerCapita1 = (pib1 * 1e9) / populacao1;

    printf("\n");

    // Solicita ao usuário uma letra de A a H para representar o estado
    printf("Digite uma letra de A a H para representar o segundo estado: ");
    scanf("%s", estado2);

    // Solicita ao usuário o código da carta (de 01 a 04)
    printf("Digite o código da segunda carta (entre 01 e 04):");
    scanf("%s", carta2);

    // Solicita ao usuário o nome da cidade
    printf("Digite o nome da segunda cidade:");
    scanf("%s", cidade2);

    // Solicita ao usuário o número de habitantes da cidade
    printf("Digite número de habitantes da segunda cidade:");
    scanf("%d", &populacao2);

    // Solicita ao usuário a área da cidade em quilômetros quadrados
    printf("Digite a área da segunda cidade em quilômetros quadrados:");
    scanf("%f", &area2);

    // Solicita ao usuário o PIB (Produto Interno Bruto) da cidade
    printf("Digite o PIB da segunda cidade:");
    scanf("%f", &pib2);

    // Solicita ao usuário a quantidade de pontos turísticos na cidade
    printf("Digite a quantidade de pontos turísticos na segunda cidade:");
    scanf("%d", &ponto2);

    // Calcula a Densidade Populacional
    Densidade2 = populacao2 / area2;

    // Calcula a Densidade Populacional
    PerCapita2 = (pib2 * 1e9) / populacao2;
    
    // Imprime uma quebra de linha para organizar a saída no console
    printf("\n");

    // Exibe o título da primeira carta
    printf("Carta 1: \n");

    // Exibe o estado informado pelo usuário
    printf("Estado: %s\n", estado1);

    // Exibe o código da carta, que é a junção do estado com o número da carta
    printf("Código: %s%s\n", estado1, carta1);

    // Exibe o nome da cidade informada pelo usuário
    printf("Nome da Cidade: %s\n", cidade1);

    // Exibe a população da cidade
    printf("População: %d\n", populacao1);

    // Exibe a área da cidade em quilômetros quadrados
    printf("Área (em km²): %f km²\n", area1);

    // Exibe o PIB (Produto Interno Bruto) da cidade
    printf("PIB: %f\n", pib1);

    // Exibe o número de pontos turísticos na cidade
    printf("Número de Pontos Turíticos: %d\n", ponto1);

    // Exibe a Densidade Populacional
    printf("Densidade Populacional: %.2f\n", Densidade1);

    // Exibe o PIB per Capita
    printf("PIB per Capita %.2f\n", PerCapita1);

    // Imprime uma quebra de linha para organizar a saída no console
    printf("\n");

    // Exibe o título da segunda carta
    printf("Carta 2: \n");

    // Exibe o estado informado pelo usuário
    printf("Estado: %s\n", estado2);

    // Exibe o código da carta, que é a junção do estado com o número da carta
    printf("Código: %s%s\n", estado2, carta2);

    // Exibe o nome da cidade informada pelo usuário
    printf("Nome da Cidade: %s\n", cidade2);

    // Exibe a população da cidade
    printf("População: %d\n", populacao2);

    // Exibe a área da cidade em quilômetros quadrados
    printf("Área (em km²): %f km²\n", area2);

    // Exibe o PIB (Produto Interno Bruto) da cidade
    printf("PIB: %f\n", pib2);

    // Exibe o número de pontos turísticos na cidade
    printf("Número de Pontos Turíticos: %d\n", ponto2);

    // Exibe a Densidade Populacional
    printf("Densidade Populacional: %.2f\n", Densidade2);

    // Exibe o PIB per Capita
    printf("PIB per Capita %.2f\n", PerCapita2);

    return 0;

}
