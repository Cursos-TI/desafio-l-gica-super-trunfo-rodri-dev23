#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

                 // Novas atualizações para a lógica do super trunfo nivel aventureiro.
      //   





    char estado [50]; 
    char codigo [40];
    char cidade [30];
    unsigned long int populacao1;
    double area1, pib1;
    int turistico1;
    double dp1, PIBpc1;
    long double superPoder1;
    long double vencedor1 = populacao1 + area1 + pib1 + turistico1;

     
           printf("\nJOGO SUPER TRUNFO \n");

           printf("\nCADASTRE SUA CARTA\n");


     printf("\nJogador: 1\n");

    printf("\nDigite seu estado: \n");
    scanf("%s", estado);

    printf("Digite seu codigo: \n");
    scanf("%s", codigo);

    printf("Digite nome da sua cidade: \n");
    scanf("%s", cidade);

    printf("Digite a populacao: \n");
    scanf("%ld", &populacao1);

    printf("Digite a area em KM: \n");
    scanf("%lf", &area1);

    printf("Digite o PIB: \n");
    scanf("%lf", &pib1);

    printf("Digite a quantidade pontos turisticos: \n");
    scanf("%d", &turistico1);
   

    
    

    char Estado [50]; 
    char Codigo [40];
    char Cidade [30];
    unsigned long int Populacao2;
    double Area2, Pib;
    int Turistico2, escolha1, resultado;
    double DCP2, PibPC2;
    long double SuperPoder2;
    long double vencedor2 = Populacao2 + Area2 + Pib + Turistico2;

     printf("\nJogador: 2 \n");

    printf("\nDigite seu estado: \n");
    scanf("%s", Estado);
    

    printf("Digite seu codigo: \n");
    scanf("%s", Codigo);
   

    printf("Digite nome da sua cidade: \n");
    scanf("%s", Cidade);
   

    printf("Digite a populacao: \n");
    scanf("%ld", &Populacao2);

    printf("Digite a area em KM: \n");
    scanf("%lf", &Area2);

    printf("Digite o PIB: \n");
    scanf("%lf", &Pib);

    printf("Digite a quantidade pontos turisticos: \n");
    scanf("%d", &Turistico2);


    
///////////////////////////////////////////////////////////////////////////////////


    


// Objetivo: Criar um menu interativo usando switch
// E fazer as comparaçôes usando decisão aninhadas EX: IF Else dentro de IF Else
        
         
         printf("\nEscolha uma opção de atributos para batalhar.\n");
         printf("1. População. \n");
         printf("2. Aréa. \n");
         printf("3. Pib. \n");
         printf("4. Pontos Turisticos. \n");
         printf("5. Dp. \n");
         scanf("%d", &escolha1);

         printf("Resultado da batalha de tributos. \n");

switch (escolha1)
{
case 1:
printf("\nPopulação \n");
     if (populacao1 > Populacao2)
     {
       printf("\nCarta 1 venceu a batalha de atributos 'População'. \n");
     }else if (populacao1 < Populacao2)
     {
        printf("\nCarta 2 venceu a batalha de atributos 'População'. \n");
     }else {
        printf("\nEmpate \n");
     }
     
     
break;
    case 2:
printf("\nAréa \n");
     if (area1 > Area2)
{
  printf("\nCarta 1 venceu a batalha de atributos 'Aréa'. \n");
}else if (area1 < Area2)
     {
        printf("\nCarta 2 venceu a batalha de atributos 'Aréa'. \n");
     }else {
        printf("\nEmpate \n");
     }

break;
case 3:
printf("\nPib \n");
      if (pib1 > Pib)
      {
        printf("\nCarta 1 venceu a batalha de atributos 'PIB'. \n");
      }else if (pib1 < Pib)
     {
        printf("\nCarta 2 venceu a batalha de atributos 'PIB'. \n");
     }else {
        printf("\nEmpate \n");
     }
      
break;
case 4:
printf("\nPontos turisticos \n");
     if (turistico1 > Turistico2)
     {
      printf("\nCarta 1 venceu a batalha de atributos 'Pontos Turisticos'. \n");
     }else if (turistico1 < Turistico2)
     {
        printf("\nCarta 2 venceu a batalha de atributos 'Pontos Turisticos'. \n");
     }else {
        printf("\nEmpate \n");
     }
     
break;
case 5:
printf("\nDp \n");
      if (dp1 < DCP2)
      {
        printf("\nCarta 1 venceu a batalha de atributos 'Dencidade Populacional'. \n");
      }else if (dp1 > DCP2)
     {
        printf("\nCarta 2 venceu a batalha de atributos 'Dencidade Populacional'. \n");
     }else {
        printf("\nEmpate \n");
     }
      
break;
default:
break;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  // *** Resultados da carta 1 ***

  printf("***Digite '1' para ver o resultado final das carta***  \n");
  scanf("%d", &resultado);

 printf("\n\nCarta do jogador 1: \n\n");
    printf("Estado: ");
    printf(" %s\n", estado);
    printf("Codigo: ");
    printf(" %s\n", codigo);
    printf("Nome da Cidade: ");
    printf(" %s\n", cidade);

    printf("Populacao: %u", populacao1);
    printf(" =\t%u\n", populacao1 > Populacao2);

    printf("Area em KM: %.2f", area1);
    printf(" =\t%d\n", area1 > Area2);

    printf("PIB: %.6f", pib1);
    printf(" =\t%d\n", pib1 > Pib);

    printf("Pontos Turisticos: %d", turistico1);
    printf(" =\t%d\n", turistico1 > Turistico2);

    dp1 = populacao1 / area1;
     printf("A densidade populacional em Km² é de: %.2f", dp1);
     printf(" =\t%d\n", dp1 < DCP2);
    
     PIBpc1 = pib1 / populacao1;
    printf("O PIB Per Capita é de: %.6f", PIBpc1);
    printf(" =\t%d\n", PIBpc1 > PibPC2 );

    superPoder1 = (double) populacao1 + area1 + pib1 + turistico1 + dp1;
    printf("Super Poder: =\t%d\n", superPoder1 > SuperPoder2);


    // *** Resultados da carta 2 ***

    printf("\n\nCarta do jogador: 2 \n\n");
    printf("Estado: ");
    printf(" %s\n", Estado);
    printf("Codigo: ");
    printf(" %s\n", Codigo);
    printf("Cidade: ");
    printf(" %s\n", Cidade);

    printf("Populacao: %u", Populacao2);
    printf(" =\t%u\n", Populacao2 > populacao1);
      
    printf("Area em KM: %.2f", Area2);
    printf(" =\t%d\n", Area2 > area1);

    printf("PIB: %.6f", Pib);
    printf(" =\t%d\n", Pib > pib1);

    printf("Pontos Turisticos: %d", Turistico2);
    printf(" =\t%d\n", Turistico2 > turistico1);

      DCP2 = Populacao2 / Area2;
     printf("A Densidade Populacional em Km² é de: %.2f", DCP2);
     printf(" =\t%d\n", DCP2 < dp1);
 
    PibPC2 = Pib / Populacao2;
    printf("O PIB Per Capita é de: %.6f", PibPC2);
    printf(" =\t%d\n", PibPC2 > PIBpc1 );

    SuperPoder2 = (double) Populacao2 + Area2 + Pib + Turistico2 + DCP2;
    printf("Super Poder: =\t%d\n", SuperPoder2 > superPoder1);
}