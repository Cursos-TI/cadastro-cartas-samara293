#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estadoA;
  char codigoA01;
  char nomecidade01[20];
  int populacao01;
  float area01;
  float pib01;
  int pontosturisticos01;


  char estadoB;
  char codigoB02[10];
  char nomecidade02[20];
  int populacao02;
  float area02;
  float pib02;
  int pontosturisticos02;


  // Área para entrada de dados

printf("Cadastro da carta 01\n");
printf("Digite o estado: (apenas 1 letra, ex: A)\n");
scanf("%c", &estadoA);

printf("Digite o codigo do estado: (ex: A01)\n");
scanf("%s", &codigoA01);

printf("Digite o nome da cidade:\n");
scanf("%s", &nomecidade01);   

printf("Digite a quantidade de população: (somente números, sem ponto ou vírgula)\n");
scanf(" %d", &populacao01);

printf("Digite o tamanho da área: (use ponto, não vírgula)\n");
scanf(" %f", &area01);

printf("Digite o PIB:\n");
scanf(" %f", &pib01);

printf("Digite o numero de pontos turisticos:\n");
scanf(" %d", &pontosturisticos01);


printf("Cadastro da carta 02\n");

printf("Digite o estado (apenas 1 letra, ex: A):\n");
scanf(" %c", &estadoB);

printf("Digite o codigo do estado (ex: A01):\n");
scanf("%s", codigoB02); 

printf("Digite o nome da cidade:\n");
scanf(" %s", nomecidade02); 

printf("Digite a quantidade de população (somente números, sem ponto ou vírgula):\n");
scanf(" %d", &populacao02);

printf("Digite o tamanho da área (use ponto, não vírgula):\n");
scanf(" %f", &area02);

printf("Digite o PIB:\n");
scanf(" %f", &pib02);

printf("Digite o numero de pontos turisticos:\n");
scanf(" %d", &pontosturisticos02);


  // Área para exibição dos dados da cidade

printf("CIDADE 01\n");
printf("ESTADO: %c\n", estadoA);
printf("CODIGO: %c\n", codigoA01);
printf("NOME DA CIDADE: %s\n", nomecidade01);
printf("QUANTIDADE DE POPULAÇÃO: %d habitantes\n", populacao01);
printf("TAMANHO DA AREA: %.2f\n", area01);
printf("PIB: %.2f bilhões de reais\n", pib01);
printf("NUMERO DE PONTOS TURISTICOS: %d\n", pontosturisticos01);



printf("CIDADE 02\n");
printf("ESTADO: %c\n", estadoB);
printf("CODIGO: %c\n", codigoB02);
printf("NOME DA CIDADE: %s\n", nomecidade02);
printf("QUANTIDADE DE POPULAÇÃO: %d habitantes\n", populacao02);
printf("TAMANHO DA AREA: %.2f\n", area02);
printf("PIB: %.2f trilhões de reais\n", pib02);
printf(" NUMERO DE PONTOS TURISTICOS: %d\n", pontosturisticos02);

return 0;

} 
