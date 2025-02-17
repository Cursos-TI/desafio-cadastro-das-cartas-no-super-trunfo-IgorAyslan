#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char Estado;
    char CodigodaCidade [3];
    char nomedacidade [30];
    int populacao;
    float area;
    float PIB;
    int PontosTuristicos;
    
    printf;("Bem-vindo ao Super Trunfo: Edição Países!\n");
    printf("Qual o código do estado?\n");
    scanf("%c", &Estado);

    printf("E o código da cidade\n");
    scanf("%s", &CodigodaCidade);

    printf("Nome da cidade\n");
    scanf("%s",&nomedacidade);

    printf("Qual é a população?\n");
    scanf("%f", &populacao);

    printf("Qual o tamanho da área?\n");
    scanf("%d", &area);

    printf("Qual o PIB desta cidade?\n");
    scanf("%f", &PIB);

    printf("Possui quantos pontos turísticos?\n");
    scanf("%d", &PontosTuristicos);

    printf("Esta é a sua cidade!\n");
    //faltando adicionar o código do estado
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("Codigo da cidade: %s\n", CodigodaCidade);
    printf("População: %f\n", populacao);
    printf("Área: %d\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos turísticos: %d\n", PontosTuristicos);


    return 0;
}
