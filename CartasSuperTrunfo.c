#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char Estado;
    char CodigodaCarta [4];
    char nomedacidade [38];
    int populacao;
    float area;
    float PIB;
    int PontosTuristicos;
    
    printf;("Bem-vindo ao Super Trunfo: Edição Países!\n");
    printf("Qual o código do estado?\n");
    scanf("%c", &Estado);

    printf("Qual o código da carta?\n");
    scanf("%s", &CodigodaCarta);

    printf("Nome da cidade\n");
    scanf("%s",&nomedacidade);

    printf("Qual é a população?\n");
    scanf("%d", &populacao);

    printf("Qual o tamanho da área?\n");
    scanf("%f", &area);

    printf("Qual o PIB desta cidade?\n");
    scanf("%f", &PIB);

    printf("Possui quantos pontos turísticos?\n");
    scanf("%d", &PontosTuristicos);

    printf("Esta é a sua cidade!\n");
    printf("Estado: %c\n", Estado);
    printf("Código da carta: %s\n", CodigodaCarta);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos turísticos: %d\n", PontosTuristicos);


    return 0;
}
