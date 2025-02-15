#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char CodigodaCidade;
    char nomedacidade [30];
    int populacao;
    double area;
    float PIB;
    int PontosTuristicos;
    
    printf;("Bem-vindo ao Super Trunfo: Edição Países!\n");
    printf("Digite o código da cidade\n");
    scanf("%c", &CodigodaCidade);

    printf("Nome da cidade\n");
    scanf("%s",&nomedacidade);

    printf("Qual é a população?\n");
    scanf("%d", &populacao);

    printf("Qual o tamanho da área?\n");
    scanf("%d", &area);

    printf("Qual o PIB desta cidade?\n");
    scanf("%f", &PIB);

    printf("Possui quantos pontos turísticos?\n");
    scanf("%d", &PontosTuristicos);

    printf("Esta é a sua cidade!\n");
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("Codigo da cidade: %c\n", CodigodaCidade);
    printf("População: %d\n", populacao);
    printf("Área: %d\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos turísticos: %d\n", PontosTuristicos);


    return 0;
}
