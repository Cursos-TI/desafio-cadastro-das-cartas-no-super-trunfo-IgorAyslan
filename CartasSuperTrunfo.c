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
    double area;
    float PIB;
    int PontosTuristicos;
    
    printf;("Bem-vindo ao Super Trunfo: Edição Países!\n");
    printf("Digite o código da cidade\n");
    scanf("%c", &CodigodaCidade);

    printf("Nome da cidade\n");
    scanf("%s",&NomedaCidade);

    printf("Qual é a população?\n");
    scanf("%d", &população);

    printf("Qual o tamanho da área?\p");
    scanf("%e", &area);

    printf("Qual o PIB desta cidade?\n");
    scanf("%3.3f", &PIB);

    printf("Possui quantos pontos turísticos?\n");
    scanf("%d", &PontosTuristicos);

    printf("Esta é a sua cidade!\n");
    printf("Nome da cidade: %s - Código: %c\n", NomedaCidade, CodigodaCidade);
    printf("População: %d\n", população);
    printf("Área: %e\n", area);
    printf("PIB: %3.3f\n", PIB);
    printf("Pontos turísticos: %d\n", PontosTuristicos);

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
