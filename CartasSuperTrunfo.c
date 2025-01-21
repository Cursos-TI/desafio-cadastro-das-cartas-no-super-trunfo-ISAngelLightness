#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    char codigo_da_cidadeA[10], codigo_da_cidadeB[10];
    char nome_da_cidadeA[50], nome_da_cidadeB[50];
    long long int populacaoA, populacaoB;
    int pontos_turisticosA, pontos_turisticosB, pointsA, pointsB;
    float areaA, PIBA, areaB, PIBB;
    float desindade_populacionalA, desindade_populacionalB;
    float PIB_per_capitaA, PIB_per_capitaB;
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o codigo da cidade: ");
    scanf("%s", &codigo_da_cidadeA);

    printf("Digite o Nome cidade: ");
    scanf("%s", &nome_da_cidadeA);

    printf("Digite o tamanho da população: ");
    scanf(" %d", &populacaoA);

    printf("Quanto é a area por km Quadrado: ");
    scanf("%f", &areaA);

    printf("Quanto é o PIB da cidade: ");
    scanf("%f", &PIBA);

    printf("Tem Quantos pontos turisticos: ");
    scanf("%d", &pontos_turisticosA);

    desindade_populacionalA = (float) populacaoA / areaA;
    PIB_per_capitaA = PIBA / (float) populacaoA;

    printf("Primeiro Cartão Registrado com sucesso!\n\n");
    printf("Digite o codigo da cidade: ");
    scanf("%s", &codigo_da_cidadeB);

    printf("Digite o Nome cidade: ");
    scanf(" %s", &nome_da_cidadeB);

    printf("Digite o tamanho da população: ");
    scanf(" %d", &populacaoB);

    printf("Quanto é a area por km Quadrado: ");
    scanf(" %f", &areaB);

    printf("Quanto é o PIB da cidade: ");
    scanf(" %f", &PIBB);

    printf("Tem Quantos pontos turisticos: ");
    scanf(" %d", &pontos_turisticosB);

    desindade_populacionalB = (float) populacaoB / areaB;
    PIB_per_capitaB = PIBB / (float) populacaoB;

    printf("Segunda Cartão Registrado com sucesso!\n\n");
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // como o código, nome, população, área, PIB, pontos turístico
    printf("\n\nDados da Primeira Carta!\n");
    printf("Codigo: %s\n", codigo_da_cidadeA);
    printf("Nome: %s\n", nome_da_cidadeA);
    printf("População: %lld\n", populacaoA);
    printf("Área: %f\n", areaA);
    printf("PIB: %f\n", PIBA);
    printf("Pontos Turisticos: %d\n", pontos_turisticosA);
    printf("\n\nDensidade Populacional: %.2f\n", desindade_populacionalA);
    printf("PIB per capita: %.2f\n", PIB_per_capitaA);

    printf("\n\nDados da Segunda Carta!\n");
    printf("Codigo: %s\n", codigo_da_cidadeA);
    printf("Nome: %s\n", nome_da_cidadeA);
    printf("População: %lld\n", populacaoA);
    printf("Área: %f\n", areaA);
    printf("PIB: %f\n", PIBA);
    printf("Pontos Turisticos: %d\n", pontos_turisticosA);
    printf("\n\nDensidade Populacional: %.2f\n", desindade_populacionalA);
    printf("PIB per capita: %.2f\n", PIB_per_capitaA);

    //GABARITO DO QUE ADICIONA: população, área, PIB, pontos turístico
    pointsA = populacaoA+areaA+PIBA+pontos_turisticosA+desindade_populacionalA+PIB_per_capitaA;
    pointsB = populacaoB+areaB+PIBB+pontos_turisticosB+desindade_populacionalB+PIB_per_capitaB;
    if (pointsA > pointsB){
        printf("o vencedor é a primeira carta!\n");
    }else if (pointsA < pointsB) {
        printf("o vencedor é a segunda carta!\n");
    } else{printf("acabou dando empate!\n");}

    return 0;
}
