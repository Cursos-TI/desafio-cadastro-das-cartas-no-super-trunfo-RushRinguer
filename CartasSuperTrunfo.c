#include <stdio.h>


int main (){
int pontosturisticos;
float PIB;
int populacao;
char nome[100];
char codigo[100];
char estado[100];
float area;

printf("**** Bem vindo ao SuperTrunfo****\n");

printf("**** escolha uma cidade para ser sua carta. ****\n");
printf("**** digite o nome da sua cidade. ****\n");
scanf("%s", nome);

printf("****  digite o codigo da sua carta ex: a01, b01, c01 etc.  ****\n");
scanf("%s", codigo);

printf("****  digite o estado da sua cidade.  ****\n");
scanf("%s", estado);

printf("**** digite a area da sua cidade. ****\n");
scanf("%f", &area);

printf("**** digite o PIB sua cidade. ****\n");
scanf("%f", &PIB);

printf("**** digite população da sua cidade. ****\n");
scanf("%d", &populacao);

printf("**** digite a quantidade de pontos turisticos de sua cidade. ****\n");
scanf("%d", &pontosturisticos);




printf("%s o nome da cidade \n", nome);
printf("%s o coigo da carta \n", codigo);
printf("%s o nome do estado \n", estado);
printf("%f o PIB da cidade \n", PIB);
printf("%f a area da sua cidade \n", area);
printf("%d a população da cidade \n", populacao);
printf("%d número de pontos de turisticos \n", pontosturisticos);


printf("**** agora vamos escolher outra cidade. ****\n");
printf("**** escolha sua segunda cidade para ser sua carta. ****\n");
printf("**** digite o nome da sua cidade. ****\n");
scanf("%s", nome);

printf("****  digite o codigo da sua carta ex: a01, b01, c01 etc.  ****\n");
scanf("%s", codigo);

printf("****  digite o estado da sua cidade.  ****\n");
scanf("%s", estado);

printf("**** digite a area da sua cidade. ****\n");
scanf("%f", &area);

printf("**** digite o PIB sua cidade. ****\n");
scanf("%f", &PIB);

printf("**** digite população da sua cidade. ****\n");
scanf("%d", &populacao);

printf("**** digite a quantidade de pontos turisticos de sua cidade. ****\n");
scanf("%d", &pontosturisticos);




printf("%s o nome da cidade \n", nome);
printf("%s o coigo da carta \n", codigo);
printf("%s o nome do estado \n", estado);
printf("%f o PIB da cidade \n", PIB);
printf("%f a area da sua cidade \n", area);
printf("%d a população da cidade \n", populacao);
printf("%d número de pontos de turisticos \n", pontosturisticos);


return 0;


}
