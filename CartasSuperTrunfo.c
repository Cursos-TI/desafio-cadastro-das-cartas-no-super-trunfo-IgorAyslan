#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

//Abaixo são as variaveis que iremos usar, no caso são 1 e 2 por conta das duas cartas a serem cadastradas.

int main() {
    char Estado1,Estado2;
    char CodigodaCarta1 [4], CodigodaCarta2 [4];
    char nomedacidade1 [38], nomedacidade2 [38];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int PontosTuristicos1, PontosTuristicos2;
    int DensidadePopulacional1, DensidadePopulacional2;

    //Aqui sãos as solicitações de dados que iremos pedir para que o úsuario digito no terminal.
    //Primeiro irá ser apresentado na tela o texto solicitando o dado para o usuário e na linha debaixo o espaço para que ele digite.
    //Carta 1
    printf;("Bem-vindo ao Super Trunfo: Edição Países!\n");
    printf("**Cadastro da carta 1**\n");
    printf("Qual o código do estado?\n");
    scanf("%c", &Estado1);

    printf("Qual o código da carta?\n");
    scanf("%s", &CodigodaCarta1);

    printf("Nome da cidade\n");
    scanf("%s",&nomedacidade1);

    printf("Qual é a população?\n");
    scanf("%d", &populacao1);

    printf("Qual o tamanho da área?\n");
    scanf("%f", &area1);

    printf("Qual o PIB desta cidade?\n");
    scanf("%f", &PIB1);

    printf("Possui quantos pontos turísticos?\n");
    scanf("%d", &PontosTuristicos1);

    // Agora serão pedido os dados da carta 2
    printf("\n**Cadastro da carta 2**\n");

    printf("Qual o código do estado?\n");
    scanf(" %c", &Estado2);

    printf("Qual o código da carta?\n");
    scanf("%s", &CodigodaCarta2);

    printf("Nome da cidade\n");
    scanf("%s",&nomedacidade2);

    printf("Qual é a população?\n");
    scanf("%d", &populacao2);

    printf("Qual o tamanho da área?\n");
    scanf("%f", &area2);

    printf("Qual o PIB desta cidade?\n");
    scanf("%f", &PIB2);

    printf("Possui quantos pontos turísticos?\n");
    scanf("%d", &PontosTuristicos2);

    //Esta é a impressão dos dados que o usuário preencheu anteriormente da carta 1.
    //Cada váriavel será impressa da seguinte forma: Texto para identificar, formato que será impresso e a variavel a ser impressa.
    printf("Carta cadastrada!\n");
    printf("-Carta 1-\n");
    printf("Estado: %c\n", Estado1);
    printf("Código da carta: %s\n", CodigodaCarta1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.1f Km²\n", area1 / 10.0);
    printf("PIB: R$ %.2f\n", PIB1);
    printf("Pontos turísticos: %d\n", PontosTuristicos1);

    //Impressão da carta 2:
    printf("\n-Carta 2-\n");
    printf("Estado: %c\n", Estado2);
    printf("Código da carta: %s\n", CodigodaCarta2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao1);
    printf("Área: %.1f Km²\n", area2 / 10.0);
    printf("PIB: R$ %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", PontosTuristicos2);


    return 0;
}
