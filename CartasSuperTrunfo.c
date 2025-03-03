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

    //Aqui sãos as solicitações de dados que iremos pedir para que o úsuario digito no terminal.
    //Primeiro irá ser apresentado na tela o texto solicitando o dado para o usuário e na linha debaixo o espaço para que ele digite.
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

    //Esta é a impressão dos dados que o usuário preencheu anteriormente.
    //Cada váriavel será impressa da seguinte forma: Texto para identificar, formato que será impresso e a variavel a ser impressa.
    printf("Carta cadastrada!\n");
    printf("Estado: %c\n", Estado);
    printf("Código da carta: %s\n", CodigodaCarta);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos turísticos: %d\n", PontosTuristicos);


    return 0;
}
