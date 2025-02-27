#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   char estado[30],estado2[30];
   char codigo[10], codigo2[10];
   char cidade[20], cidade2[20];
   int populacao, populacao2;
   float area,area2; 
   float pib,pib2 ;
   int turistico, turistico2;
   
/*Introdução do Game*/
   printf("Bem vindo ao Super Trunfo - Países\n \n");
   printf("Primeiro vamos cadastrar duas cartas para iniciar o jogo, preencha as informações abaixo.\n\n");

/*Informações da primeira carta*/
printf("Vamos começar com o cadastro da primeira carta\n\n");

printf("Digite o nome do estado: ");
scanf("%s",estado);
printf("\n");

printf("Codigo da carta: ");
scanf("%s", &codigo);printf("\n");

printf("Nome da cidade: ");
scanf("%s",&cidade);printf("\n");

printf("População: ");
scanf("%d", &populacao);printf("\n");

printf("Área: ");
scanf("%f", &area);printf("\n");

printf("PIB: ");
scanf("%f", &pib);printf("\n");

printf("Número de pontos turísticos:");
scanf("%d", &turistico );printf("\n");

/*Informações da segunda carta*/

printf("Digite as informações da segunda carta:\n\n");

printf("Nome do estado: ");
scanf("%s", &estado2);printf("\n");

printf("Código da carta: ");
scanf("%s", &codigo2);printf("\n");

printf("Nome da cidade: ");
scanf("%s",&cidade2);printf("\n");

printf("População: ");
scanf("%d", &populacao2);printf("\n");

printf("Área: ");
scanf("%f", &area2);printf("\n");

printf("PIB: ");
scanf("%f", &pib2);printf("\n");

printf("Número de pontos turísticos: ");
scanf("%s", &turistico2);printf("\n\n");
   

printf("☷☷☷☷☷☷☷☷☷☷☷☷☷☷☷☷☷☷☷☷☷☷☷☷☷☷☷☷☷☷\n\n");

/*Exibição dos dados inseridos pelo usuário*/

printf("CARTA 1 \n\n");
printf("Estado: %s\n", estado);
printf("Código: %s\n", codigo);
printf("Nome da Cidade: %s\n" , cidade );
printf("População: %d\n", populacao);
printf("Área: %.2f km² \n" , area);
printf("PIB: %.2f\n", pib);
printf("Número de pontos turísticos %d\n\n", turistico);

  printf("___________________________________________\n\n");

 printf("CARTA 2 \n\n");
 printf("ESTADO: %s\n", estado2);
 printf("CÓDIGO: %s\n", codigo2);
  printf("Nome da Cidade: %s \n" , cidade2 );
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km² \n" , area2);
  printf("PIB:  %.2f bilhões de reais\n", pib2);
  printf("Número de pontos turísticos: %d\n\n", turistico2);
 return 0;
    
}