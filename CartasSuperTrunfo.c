#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estadoA;
  char codigoA01;
  char nomecidade01[50];
  int populacao01;
  float areaKm01;
  float pib01;
  int PontosTuristicos01;


  char estadoB;
  char codigoB02;
  char nomeCidade02[50];
  int populacao02;
  float areaKm02;
  float pib02;
  int pontosTuristicos02;


  // Área para entrada de dados

printf("Cadastro da carta 01\n");
printf("Digite o estado:\n");
scanf(" %s", &estadoA);

printf("Digite o codigo do estado:\n");
scanf(" %s", &codigoA01);

printf("digite o nome da cidade:\n");
scanf("%s, &nomeCidade01");

printf("digite a quantidade de população:\n");
scanf("%d", &populacao01);

printf("digite o tamanho da area:\n");
scanf("%f", &areaKm01);

printf("digite o PIB:\n");
scanf("%f", &pib01);

printf("Digite o numero de pontos turisticos\n");
scanf("%d", &PontosTuristicos01);



printf("Cadastro da carta 02\n");
printf("Digite o estado:\n");
scanf(" %c", &estadoB);

printf("Digite o codigo do estado:\n");
scanf(" %c", &codigoB02);

printf("digite o nome da cidade:\n");
scanf("%s, &nomeCidade02");

printf("digite a quantidade de população:\n");
scanf("%d", &populacao02);

printf("digite o tamanho da area:\n");
scanf("%f", &areaKm02);

printf("digite o PIB:\n");
scanf("%f", &pib02);

printf("Digite o numero de pontos turisticos\n");
scanf("%d", &pontosTuristicos02);

  // Área para exibição dos dados da cidade

printf("CIDADE 01\n");
printf("ESTADO: %c\n", estadoA);
printf("CODIGO: %c\n", codigoA01);
printf("NOME DA CIDADE: %s\n", nomecidade01);
printf("QUANTIDADE DE POPULAÇÃO: %d habitantes\n", populacao01);
printf("TAMANHO DA AREA: %.2f\n", areaKm01);
printf("PIB: %.2f bilhões de reais\n", pib01);
printf("NUMERO DE PONTOS TURISTICOS: %d\n", PontosTuristicos01);



printf("CIDADE 02\n");
printf("ESTADO: %s\n", estadoB);
printf("CODIGO: %s\n", codigoB02);
printf("NOME DA CIDADE: %s\n", nomeCidade02);
printf("QUANTIDADE DE POPULAÇÃO: %d habitantes\n", populacao02);
printf("TAMANHO DA AREA: %.2f\n", areaKm02);
printf("PIB: %.2f trilhões de reais\n", pib02);
printf(" NUMERO DE PONTOS TURISTICOS: %d\n", pontosTuristicos02);

return 0;

} 
