#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int codigoCidade;
    char nome[50];
    double populacao;
    double area;
    double pib;
    int ptsTuristicos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("------ Cadastro das Cartas ---------\n");

    printf("Codigo da cidade:\n");
    scanf("%i" , &codigoCidade);

    printf("Nome:\n");
    scanf(" %s" , &nome);

    printf("População:\n");
    scanf(" %lf" , &populacao);

     printf("Area:\n");
    scanf(" %lf" , &area);

     printf("Pib:\n");
    scanf(" %lf" , &pib);

     printf("Numero de Pontos turisticos:\n");
    scanf(" %i" , &ptsTuristicos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("------ Exibição dos dados das Cartas ---------\n");

    printf("Codigo da cidade: %i\n", codigoCidade);

    printf("Nome: %s\n", nome);

    printf("População: %lf\n", populacao);

    printf("Area: %f\n", area);

    printf("Pib: %lf\n", pib);

    printf("Numero de Pontos turisticos: %i\n", ptsTuristicos);

    return 0;
}
