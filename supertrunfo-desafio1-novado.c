#include <stdio.h>

int main(){
    char estado1, estado2;
    char codigocarta1[3], codigocarta2[3];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

printf("Digite a letra do estado da Carta 1. (De 'A' a 'H'): ");
scanf(" %c", &estado1);

printf("Digite o código da Carta 1. (Letra do estado + dois números): ");
scanf("%s", codigocarta1[3]);

printf("Digite o nome da cidade da Carta 1. (Sem espaços!): ");
scanf("%s", cidade1);

printf("Digite a população da cidade da Carta 1: ");
scanf("%d", populacao1);






printf("Carta 1:\nEstado: %c\n", estado1);
printf("Código: %s\n", codigocarta1);

return 0;
}