#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
//Abaixo são as variaveis que irei utilizar no meu jogo.

int main() {
    char Estado;
    char CodigodaCarta [4];
    char nomedacidade [38];
    int populacao;
    float area;
    float PIB;
    int PontosTuristicos;

    //Aqui sãos as solicitações de dados que iremos pedir ao usuário.
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

    //Aqui são os dados que foram inseridos e retornarão a tela no Terminal do úsuario, uma dado a cada linha.
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
