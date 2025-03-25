#include <stdio.h>

int main() {
    /// carta 1:
    char estado[2];  // A letra do estado
    char codigodacarta[10];
    char nomedacidade[20];
    int populacao;
    float areaemkm;
    float pib;
    int numerodepontosturisticos;

    /// carta 2:
    char estado2[2];  // A letra do estado
    char codigodacarta2[10];
    char nomedacidade2[20];
    int populacao2;
    float areaemkm2;
    float pib2;
    int numerodepontosturisticos2;

    printf("Bem-vindo ao Super Trunfo!\n");
    printf("A letra 'A' representa o estado 1, e a letra 'B' representa o estado 2.\n");
    printf("O codigo da carta 1 é A01, O codigo da carta 2 é B01.\n");
    printf("Para começar, insira os valores das suas cartas.\n");

    /// Cadastro carta 1:
    printf("Digite a letra que representa o estado 1:\n");
    scanf(" %c", estado); 

    printf("Digite o código da sua carta:\n");
    scanf("%s", codigodacarta);

    printf("Digite o nome da sua cidade:\n");
    scanf(" %[^\n]%*c", nomedacidade); 

    printf("Digite o número da população da sua cidade:\n");
    scanf("%d", &populacao);  

    printf("Digite a área em km² da sua cidade:\n");
    scanf("%f", &areaemkm);  

    printf("Digite o PIB da sua cidade:\n");
    scanf("%f", &pib);  

    printf("Digite o número de pontos turísticos da sua cidade:\n");
    scanf("%d", &numerodepontosturisticos);  

    printf("Cadastro da carta 1 realizado com sucesso. Agora vamos para a carta 2.\n\n");

    /// Cadastro carta 2:
    printf("Digite a letra que representa o estado 2:\n");
    scanf(" %c", estado2); 

    printf("Digite o código da sua carta:\n");
    scanf("%s", codigodacarta2);

    printf("Digite o nome da sua cidade:\n");
    scanf(" %[^\n]%*c", nomedacidade2); 

    printf("Digite o número da população da sua cidade:\n");
    scanf("%d", &populacao2);  

    printf("Digite a área em km² da sua cidade:\n");
    scanf("%f", &areaemkm2);  

    printf("Digite o PIB da sua cidade:\n");
    scanf("%f", &pib2);  

    printf("Digite o número de pontos turísticos da sua cidade:\n");
    scanf("%d", &numerodepontosturisticos2);  

    printf("Cadastro da carta 2 realizado com sucesso!\n");
    printf("Informações das cartas cadastradas a seguir:\n\n");

    /// Informações carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);  
    printf("Código: %s\n", codigodacarta);
    printf("Nome da cidade: %s\n", nomedacidade); 
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", areaemkm); 
    printf("PIB: %.1f bilhoes de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n\n", numerodepontosturisticos);

    /// Informações carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);  
    printf("Código: %s\n", codigodacarta2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areaemkm2); 
    printf("PIB: %.1f bilhoes de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos2);

    return 0;
}
