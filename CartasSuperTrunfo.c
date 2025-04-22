#include <stdio.h>

// Estrutura para armazenar os dados da carta
struct Carta {
    char estado;               // Letra de 'A' a 'H'
    char codigo[4];            // Código como "A01", "B03" etc. (3 caracteres + '\0')
    char nomeCidade[50];       // Nome da cidade
    int populacao;             // Número de habitantes
    float area;                // Área em km²
    float pib;                 // Produto Interno Bruto
    int pontosTuristicos;      // Número de pontos turísticos
};

int main() {
    struct Carta cartas[2];

    for (int i = 0; i < 2; i++) {
        printf("\n--- Inserindo dados da Carta %d ---\n", i + 1);

        printf("Estado (letra de A a H): ");        
        scanf(" %c", &cartas[i].estado);

        printf("Código da Carta (ex: A01): ");      
        scanf("%s", cartas[i].codigo);

        printf("Nome da Cidade: ");                 
        scanf(" %[^\n]", cartas[i].nomeCidade);     // Lê a string com espaços (ex. Distrito Federal)

        printf("Populacao: ");                      
        scanf("%d", &cartas[i].populacao);

        printf("Area (em km²): ");                  
        scanf("%f", &cartas[i].area);

        printf("PIB: ");                            
        scanf("%f", &cartas[i].pib);

        printf("Numero de Pontos Turisticos: ");    
        scanf("%d", &cartas[i].pontosTuristicos);
    }

    // Exibe os dados das cartas
    printf("\n=== Cartas Inseridas ===\n");
    for (int i = 0; i < 2; i++) {
        printf("\nCarta %d:\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);                              // Letra do Estado que irá sair na impressão
        printf("Codigo da Carta: %s\n", cartas[i].codigo);                     // Código da Carta para impressão
        printf("Nome da Cidade: %s\n", cartas[i].nomeCidade);                  // Nome da cidade para impressão
        printf("Populacao: %d\n", cartas[i].populacao);                        // Quantidade de habitantes para impressão
        printf("Area: %.2f km² \n", cartas[i].area);                           // Área em km² para impressão
        printf("PIB: R$ %.2f \n", cartas[i].pib);                              // produto iterno bruto para impressão
        printf("Pontos Turisticos: %d\n", cartas[i].pontosTuristicos);         // Quantidade de pontos turisticos para impressão
    }

    return 0;
}