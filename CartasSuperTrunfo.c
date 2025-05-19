#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste 
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.

int main() {

    int codigo; 
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    
    // Cadastro das Cartas:
    printf ("Digite o codigo da Cidade:");
    scanf ("%d", &codigo);
    
    printf ("Digite o nome da cidade: ");
    scanf ("%s", nome);

    printf ("Digite a populaçao da cidade:");
    scanf ("%d", &populacao); 

    printf ("Digite a área da cidade: ");
    scanf ("%f", &area);

    printf ("Digite o PIB da cidade: ");
    scanf ("%f", &pib);

    printf ("Digite o numero de pontos turisticos: ");
    scanf ("%d", &pontos_turisticos);

    //Exibindo os dados
    printf ("\n--Informaçoes da Cidade--\n");
    printf ("Nome da Cidade %s\n", nome);
    printf ("Código: %d\n", codigo);
    printf ("Populaçao com %d habitantes\n", populacao);
    printf ("Área: %.2f km²\n", area);
    printf ("PIB: %.2f billoes\n", pib);
    printf ("Pontos turisticos: %d\n", pontos_turisticos);
       
    return 0;
}
