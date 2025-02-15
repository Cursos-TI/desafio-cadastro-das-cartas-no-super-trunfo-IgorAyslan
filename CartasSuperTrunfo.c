#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char CodigodaCidade;
    char NomedaCidade [30];
    int população;
    double área;
    float PIB;
    int PontosTuristicos;

    printf("Digite o código da cidade\n");
    scanf("%c", &CodigodaCidade);

    printf("Nome da cidade\n");
    scanf("%s",NomedaCidade);

    printf("Qual é a população?\n");
    scanf("%d", população);

    printf("Qual o tamanho da área?\p");
    scanf("%e", área);

    printf("Qual o PIB desta cidade?\n");
    scanf("%3.3f", PIB);

    printf("Possui quantos pontos turísticos?\n");
    scanf("%d", PontosTuristicos);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
