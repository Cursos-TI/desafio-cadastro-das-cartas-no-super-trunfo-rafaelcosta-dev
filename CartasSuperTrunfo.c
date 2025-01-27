#include <stdio.h>
#include <string.h>

#define TAM_NOME 50

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int codigoCidade;
    char nome[TAM_NOME];
    int populacao;
    float area;
    float pib;
    int ptsTuristicos;
    float densidade = 0;
    float percapta = 0;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("------ Cadastro das Cartas ---------\n");

    printf("Codigo da cidade:\n");
    scanf("%i" , &codigoCidade);
    getchar();

    printf("Nome da cidade:\n");
    fgets(nome, TAM_NOME, stdin);
    nome[strcspn(nome, "\n")] = '\0'; 

    printf("População da cidade:\n");
    scanf(" %d" , &populacao);

     printf("Area da cidade(em km²):\n");
    scanf(" %f" , &area);

     printf("Pib da cidade (em milhões):\n");
    scanf("%f" , &pib);

     printf("Numero de Pontos turisticos:\n");
    scanf(" %i" , &ptsTuristicos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    densidade = populacao / area;
    percapta = pib / populacao;

    printf("------ Exibição dos dados das Cartas ---------\n");

    printf("Codigo da cidade: %i\n", codigoCidade);

    printf("Nome: %s\n", nome);

    printf("População: %d\n", populacao);

    printf("Area: %.2f\n", area);

    printf("Pib: %.2f\n", pib);

    printf("Numero de Pontos turisticos: %i\n", ptsTuristicos);

    printf("Densidade Populacional: %.2f\n", densidade);

    printf("PIB Per Capta: %.2f\n", percapta);

    return 0;
}


    printf("Numero de Pontos turisticos: %i\n", ptsTuristicos);

    return 0;
}
