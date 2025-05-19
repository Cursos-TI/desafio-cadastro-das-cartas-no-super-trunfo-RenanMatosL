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
    //Declarando as variaveis
    char estado1, estado2;
    char codigo1[5], codigo2[5]; 
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    float densidadePopulacional1, densidadePopulacional2, pibPerCapta1, pibPerCapta2;
    int pontosTuristicos1, pontosTuristicos2;
    
    // Coletando dados da primeira Carta:
    printf ("Digite os dados da primeira carta: \n");

    printf ("Estado (A-H): ");
    scanf ("%c", &estado1);

    printf ("Digite o codigo da carta: ");
    scanf ("%s", codigo1);
    
    printf ("Digite o nome da cidade: ");
    //lendo a string com espacos "   " %[^\n]"   ".
    scanf (" %[^\n]", nomeCidade1);

    printf ("Digite a populaçao da cidade:");
    scanf ("%d", &populacao1); 

    printf ("Digite a área da cidade: ");
    scanf ("%f", &area1);

    printf ("Digite o PIB da cidade: ");
    scanf ("%f", &pib1);

    printf ("Digite o numero de pontos turisticos: ");
    scanf ("%d", &pontosTuristicos1);

    //Calculando os novos atributos do segundo exercicio
    

    //Coletando dados da segunda carta

    printf ("Digite os dados da segunda carta: \n");

    printf ("Estado (A-H): ");
    scanf ("%c", &estado2);

    printf ("Digite o codigo da carta: ");
    scanf ("%s", codigo2);
    
    printf ("Digite o nome da cidade: ");
    scanf (" %[^\n]", nomeCidade2);

    printf ("Digite a populaçao da cidade:");
    scanf ("%d", &populacao2); 

    printf ("Digite a área da cidade: ");
    scanf ("%f", &area2);

    printf ("Digite o PIB da cidade: ");
    scanf ("%f", &pib2);

    printf ("Digite o numero de pontos turisticos: ");
    scanf ("%d", &pontosTuristicos2);




    //Exibindo os dados das cartas
    printf ("\n==== Carta 1 ====\n");
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome da Cidade %s\n", nomeCidade1);
    printf ("Populaçao com %d habitantes\n", populacao1);
    printf ("Área: %.2f km²\n", area1);
    printf ("PIB: %.2f billoes\n", pib1);
    printf ("Pontos turisticos: %d\n", pontosTuristicos1);

        //Exibindo os dados da carta2
    printf ("\n==== Carta 2 ====\n");
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da Cidade %s\n", nomeCidade2);
    printf ("Populaçao com %d habitantes\n", populacao2);
    printf ("Área: %.2f km²\n", area2);
    printf ("PIB: %.2f billoes\n", pib2);
    printf ("Pontos turisticos: %d\n", pontosTuristicos2);
       
    return 0;
}
