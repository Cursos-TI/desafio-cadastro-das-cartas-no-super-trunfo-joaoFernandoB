#include <stdio.h>

int main() {
    char estado1[30];
    char cidade1[30];
    float populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado1);
    printf("Digigte o nome da cidade: \n");
    scanf("%s", &cidade1);
    printf("Populacao da cidade: \n");
    scanf("%f", &populacao1);
    printf("Area em Km quadrados: \n");
    scanf("%f", &area1);
    printf("Pib R$: \n");
    scanf("%f", &pib1);
    printf("Pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);
    
    printf("- Estado: %s - Cidade: %s ",estado1, cidade1);
    printf("- Populacao: %f - Area em KM quadrados: %f ", populacao1, area1);
    printf("- Pib: %f - Pontos turisticos: %d ", pib1, pontosTuristicos1);

    return 0;
}
