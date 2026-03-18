#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
   #include <stdio.h>

int main() {
    // ==============================
    // Declaração das variáveis
    // ==============================

    // Carta 1
    char estado1[30];
    char codigo1[10];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Carta 2
    char estado2[30];
    char codigo2[10];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // ==============================
    // Cadastro da Carta 1
    // ==============================
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o estado: ");
    scanf("%s", estado1);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // ==============================
    // Cadastro da Carta 2
    // ==============================
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // ==============================
    // Exibição dos dados cadastrados
    // ==============================
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);

    // ==============================
    // Comparação das cartas
    // Atributo escolhido: População
    // ==============================
    printf("\n=== Comparacao de Cartas (Atributo: Populacao) ===\n");
    printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", nomeCidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
} #include <stdio.h>

int main() {
    // =========================
    // Declaração das cartas
    // =========================

    // Carta 1
    char pais1[50] = "Brasil";
    int populacao1 = 203080756;
    float area1 = 8515767.0;
    float pib1 = 2174.0; // em bilhões
    int pontosTuristicos1 = 30;
    float densidade1 = populacao1 / area1;

    // Carta 2
    char pais2[50] = "Argentina";
    int populacao2 = 46044703;
    float area2 = 2780400.0;
    float pib2 = 632.0; // em bilhões
    int pontosTuristicos2 = 25;
    float densidade2 = populacao2 / area2;

    // Variável do menu
    int opcao;

    // =========================
    // Menu interativo
    // =========================
    printf("=====================================\n");
    printf("       SUPER TRUNFO - PAISES\n");
    printf("=====================================\n");
    printf("Escolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n=====================================\n");
    printf("Comparacao de Cartas\n");
    printf("Pais 1: %s\n", pais1);
    printf("Pais 2: %s\n", pais2);
    printf("=====================================\n");

    // =========================
    // Escolha com switch
    // =========================
    switch (opcao) {
        case 1:
            printf("Atributo escolhido: Populacao\n");
            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n", pais2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Atributo escolhido: Area\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f bilhões\n", pais1, pib1);
            printf("%s: %.2f bilhões\n", pais2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo escolhido: Pontos Turisticos\n");
            printf("%s: %d\n", pais1, pontosTuristicos1);
            printf("%s: %d\n", pais2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Atributo escolhido: Densidade Demografica\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n", pais2, densidade2);

            // Regra invertida: menor densidade vence
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Escolha um numero de 1 a 5.\n");
            break;
    }

    return 0;
} #include <stdio.h>

int main() {
    // ==============================
    // Cartas pré-cadastradas
    // ==============================
    char pais1[50] = "Brasil";
    int populacao1 = 203080756;
    float area1 = 8515767.0;
    float pib1 = 2174.0; // em bilhões
    int pontosTuristicos1 = 30;
    float densidade1 = populacao1 / area1;

    char pais2[50] = "Argentina";
    int populacao2 = 46044703;
    float area2 = 2780400.0;
    float pib2 = 632.0; // em bilhões
    int pontosTuristicos2 = 25;
    float densidade2 = populacao2 / area2;

    // ==============================
    // Variáveis do menu
    // ==============================
    int atributo1, atributo2;

    // Variáveis para armazenar os valores escolhidos
    float valor1Carta1 = 0, valor1Carta2 = 0;
    float valor2Carta1 = 0, valor2Carta2 = 0;

    // Nomes dos atributos
    char nomeAtributo1[50];
    char nomeAtributo2[50];

    // Soma final
    float somaCarta1 = 0, somaCarta2 = 0;

    // ==============================
    // Primeiro menu
    // ==============================
    printf("=====================================\n");
    printf("      SUPER TRUNFO - NIVEL MESTRE\n");
    printf("=====================================\n");
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    // ==============================
    // Segundo menu dinâmico
    // ==============================
    printf("\nEscolha o SEGUNDO atributo:\n");

    if (atributo1 != 1) printf("1 - Populacao\n");
    if (atributo1 != 2) printf("2 - Area\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turisticos\n");
    if (atributo1 != 5) printf("5 - Densidade Demografica\n");

    printf("Opcao: ");
    scanf("%d", &atributo2);

    // ==============================
    // Validação
    // ==============================
    if (atributo1 < 1 || atributo1 > 5 || atributo2 < 1 || atributo2 > 5) {
        printf("\nErro: opcao invalida!\n");
        return 1;
    }

    if (atributo1 == atributo2) {
        printf("\nErro: voce nao pode escolher o mesmo atributo duas vezes!\n");
        return 1;
    }

    // ==============================
    // Atributo 1 - definição
    // ==============================
    switch (atributo1) {
        case 1:
            valor1Carta1 = populacao1;
            valor1Carta2 = populacao2;
            sprintf(nomeAtributo1, "Populacao");
            break;
        case 2:
            valor1Carta1 = area1;
            valor1Carta2 = area2;
            sprintf(nomeAtributo1, "Area");
            break;
        case 3:
            valor1Carta1 = pib1;
            valor1Carta2 = pib2;
            sprintf(nomeAtributo1, "PIB");
            break;
        case 4:
            valor1Carta1 = pontosTuristicos1;
            valor1Carta2 = pontosTuristicos2;
            sprintf(nomeAtributo1, "Pontos Turisticos");
            break;
        case 5:
            valor1Carta1 = densidade1;
            valor1Carta2 = densidade2;
            sprintf(nomeAtributo1, "Densidade Demografica");
            break;
        default:
            printf("\nErro no primeiro atributo.\n");
            return 1;
    }

    // ==============================
    // Atributo 2 - definição
    // ==============================
    switch (atributo2) {
        case 1:
            valor2Carta1 = populacao1;
            valor2Carta2 = populacao2;
            sprintf(nomeAtributo2, "Populacao");
            break;
        case 2:
            valor2Carta1 = area1;
            valor2Carta2 = area2;
            sprintf(nomeAtributo2, "Area");
            break;
        case 3:
            valor2Carta1 = pib1;
            valor2Carta2 = pib2;
            sprintf(nomeAtributo2, "PIB");
            break;
        case 4:
            valor2Carta1 = pontosTuristicos1;
            valor2Carta2 = pontosTuristicos2;
            sprintf(nomeAtributo2, "Pontos Turisticos");
            break;
        case 5:
            valor2Carta1 = densidade1;
            valor2Carta2 = densidade2;
            sprintf(nomeAtributo2, "Densidade Demografica");
            break;
        default:
            printf("\nErro no segundo atributo.\n");
            return 1;
    }

    // ==============================
    // Soma dos atributos
    // Regra especial:
    // Para densidade, menor valor vence.
    // Para a soma funcionar corretamente,
    // vamos somar o inverso da densidade.
    // ==============================

    somaCarta1 = 0;
    somaCarta2 = 0;

    // Primeiro atributo
    if (atributo1 == 5) {
        somaCarta1 += 1 / valor1Carta1;
        somaCarta2 += 1 / valor1Carta2;
    } else {
        somaCarta1 += valor1Carta1;
        somaCarta2 += valor1Carta2;
    }

    // Segundo atributo
    if (atributo2 == 5) {
        somaCarta1 += 1 / valor2Carta1;
        somaCarta2 += 1 / valor2Carta2;
    } else {
        somaCarta1 += valor2Carta1;
        somaCarta2 += valor2Carta2;
    }

    // ==============================
    // Exibição
    // ==============================
    printf("\n=====================================\n");
    printf("         RESULTADO DA RODADA\n");
    printf("=====================================\n");
    printf("Carta 1: %s\n", pais1);
    printf("Carta 2: %s\n", pais2);

    printf("\nAtributo 1: %s\n", nomeAtributo1);
    printf("%s: %.2f\n", pais1, valor1Carta1);
    printf("%s: %.2f\n", pais2, valor1Carta2);

    printf("\nAtributo 2: %s\n", nomeAtributo2);
    printf("%s: %.2f\n", pais1, valor2Carta1);
    printf("%s: %.2f\n", pais2, valor2Carta2);

    printf("\nSoma final considerada:\n");
    printf("%s: %.6f\n", pais1, somaCarta1);
    printf("%s: %.6f\n", pais2, somaCarta2);

    // ==============================
    // Operador ternário para vencedor
    // ==============================
    printf("\nVencedor: %s\n",
        (somaCarta1 > somaCarta2) ? pais1 :
        (somaCarta2 > somaCarta1) ? pais2 : "Empate!");

    return 0;
}
    return 0;
}
