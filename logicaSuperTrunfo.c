#include <stdio.h>

// variáveis 
int main() {
    char codigo1[20], codigo2[20];
    char nome1[20], nome2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2; 
    float densidade1, densidade2;
    float pib1, pib2;
    float per_capita1, per_capita2;
    int pontos1, pontos2, opcao;
    float especial1, especial2;

    // Colhendo dados da primeira carta
    printf("\nDigite os dados da primeira carta:\n");
    printf("Qual o código da carta? ");
    scanf("%s", codigo1);
    printf("Qual o nome da cidade? ");
    scanf("%s", nome1);
    printf("Qual a população? ");
    scanf("%lu", &populacao1);
    printf("Qual a área da cidade? "); 
    scanf("%f", &area1);
    printf("Qual o PIB? ");
    scanf("%f", &pib1);
    printf("Quantos pontos turísticos? ");
    scanf("%d", &pontos1);

    // Calculando a Densidade e Per Capita da carta 1
    densidade1 = populacao1 / area1;
    per_capita1 = pib1 / populacao1;
    
    // Calculando o especial da carta 1
    especial1 = populacao1 + area1 + pib1 + densidade1 + per_capita1 + pontos1;
    
    // Exibe os dados da primeira carta
    printf("\nDados da Primeira Carta:\n");
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.1f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Total de pontos turísticos: %d\n", pontos1);
    printf("Densidade: %.1f\n", densidade1);
    printf("Especial: %f\n", especial1);
    
    // Colhendo dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Qual o código da carta? ");
    scanf("%s", codigo2);
    printf("Qual o nome da cidade? ");
    scanf("%s", nome2);
    printf("Qual a população? ");
    scanf("%lu", &populacao2);
    printf("Qual a área da cidade? "); 
    scanf("%f", &area2);
    printf("Qual o PIB? ");
    scanf("%f", &pib2);
    printf("Quantos pontos turísticos? ");
    scanf("%d", &pontos2);
    
    // Calculando a Densidade e Per Capita da carta 2
    densidade2 = populacao2 / area2;
    per_capita2 = pib2 / populacao2;
    
    // Calculando o especial da carta 2
    especial2 = populacao2 + area2 + pib2 + densidade2 + per_capita2 + pontos2;
    
    // Exibe os dados da segunda carta
    printf("\nDados da Segunda Carta:\n");
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.1f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Total de pontos turísticos: %d\n", pontos2);
    printf("Densidade: %.1f\n", densidade2);
    printf("Especial: %f\n", especial2);

    // Menu de item a comparar
    printf("\nQual item deseja comparar?\n");
    printf("1 - Densidade\n");
    printf("2 - Especial\n");
    
    // Coletando a opção do menu
    scanf("%d", &opcao);

    // Comparando a opção escolhida
    switch(opcao) {
        case 1:  // Comparar densidade (menor é a vencedora)
            printf("\nCarta Vencedora em densidade:\n");
            if(densidade1 < densidade2) {
                printf("A Carta 1 é a vencedora (menor densidade)\n");
            } else {
                printf("A Carta 2 é a vencedora (menor densidade)\n");
            }
            break;

        case 2:  // Comparar especial (maior é a vencedora)
            printf("\nCarta Vencedora em especial:\n");
            if(especial1 > especial2) {
                printf("A Carta 1 é a vencedora (maior especial)\n");
            } else {
                printf("A Carta 2 é a vencedora (maior especial)\n");
            }
            break;

        default:
            printf("\nOpção inválida!\n");
            break;
    }

    return 0;
}