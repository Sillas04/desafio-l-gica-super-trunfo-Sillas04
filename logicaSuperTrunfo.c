#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // variaveis para armazenar o estado
    char estado_A[40], estado_B[40]; 

    // variaveis para dados da cidade
    char cidade_a01[30], cidade_a02[30],cidade_b01[30], cidade_b02[30];
    char codigo_a01[3], codigo_a02[4], codigo_b01[3], codigo_b02[4];     
    
    // Variaveis para propriedades da cidade
    int populacao_a01, populacao_a02, populacao_b01, populacao_b02;
    int turistico_a01, turistico_a02, turistico_b01, turistico_b02;
    float km_area_a01, km_area_a02, km_area_b01, km_area_b02;
    float pib_a01, pib_a02, pib_b01, pib_b02;

    //Variaveis para densidade e pib capta
    float densidade_a01, densidade_a02, densidade_b01, densidade_b02;
    float pib_capta_a01, pib_capta_a02, pib_capta_b01, pib_capta_b02;

    // cadastro dos estados
    printf("Digite o nome do 1° estado: \n");
    scanf("%s", estado_A);
    printf("Digite o nome do 2° estado: \n");
    scanf("%s", estado_B);

    printf("\nCadastro de cartas: --------------------- Cidade: %s \n\n", estado_A);

    // Cadastro da carta primeria cidade do estado_A:
    printf("Digite o nome da 1° cidade de %s: \n", estado_A);
    scanf("%s", cidade_a01);
    printf("Digite o código da cidade: \n");
    scanf("%s", codigo_a01);
    printf("Digite a população: \n");
    scanf("%d", &populacao_a01);
    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area_a01);
    printf("Digite o PIB: \n");
    scanf("%f", &pib_a01);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turistico_a01);   

    printf("\n-----------------------------------------------\n\n");

    // Cadastro de carta segunda cidade do estado_A:
    printf("Digite o nome da 2° cidade de %s: \n", estado_A);
    scanf("%s", cidade_a02);
    printf("Digite o código da cidade: \n");
    scanf("%s", codigo_a02);
    printf("Digite a população: \n");
    scanf("%d", &populacao_a02);
    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area_a02);
    printf("Digite o PIB: \n");
    scanf("%f", &pib_a02);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turistico_a02); 

    printf("\n **** **** -CARTA CADASTRADA COM SUCESSO- **** ****  \n\n");

    printf("\nCadastro de cartas: --------------------- Cidade: %s \n\n", estado_B);

    // Cadastro da primeria cidade do estado_A:
    printf("Digite o nome da 1° cidade de %s: \n", estado_B);
    scanf("%s", cidade_b01);
    printf("Digite o código da cidade: \n");
    scanf("%s", codigo_b01);
    printf("Digite a população: \n");
    scanf("%d", &populacao_b01);
    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area_b01);
    printf("Digite o PIB: \n");
    scanf("%f", &pib_b01);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turistico_b01);   

    printf("\n-----------------------------------------------\n\n");

    // Cadastro de carta segunda cidade do estado_B:
    printf("Digite o nome da 2° cidade de %s: \n", estado_B);
    scanf("%s", cidade_b02);
    printf("Digite o código da cidade: \n");
    scanf("%s", codigo_b02);
    printf("Digite a população: \n");
    scanf("%d", &populacao_b02);
    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area_b02);
    printf("Digite o PIB: \n");
    scanf("%f", &pib_b02);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turistico_b02);

    printf("\n **** **** **** V I S U A L I Z A Ç Ã O **** **** ****  \n\n");

    printf("");
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
