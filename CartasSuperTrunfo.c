#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    char codigo_da_cidade[10];
    char nome_da_cidade[50];
    int populacao, pontos_turisticos;
    float area, PIB;
    float desindade_populacional;
    float PIB_per_capita;
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o codigo da cidade: ");
    scanf("%s", &codigo_da_cidade);

    printf("Digite o Nome cidade: ");
    scanf(" %s", &nome_da_cidade);

    printf("Digite o tamanho da população: ");
    scanf(" %d", &populacao);

    printf("Quanto é a area por km Quadrado: ");
    scanf(" %f", &area);

    printf("Quanto é o PIB da cidade: ");
    scanf(" %f", &PIB);

    printf("Tem Quantos pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    desindade_populacional = populacao / area;
    PIB_per_capita = PIB / populacao;
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // como o código, nome, população, área, PIB, pontos turístico
    printf("\n\nNova Carta Acrescentada ao DECK com Sucesso!\n");
    printf("Codigo: %s\n", codigo_da_cidade);
    printf("Nome: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", PIB);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);
    printf("\n\nDensidade Populacional: %.2f\n", desindade_populacional);
    printf("PIB per capita: %.2f\n", PIB_per_capita);

    return 0;
}
