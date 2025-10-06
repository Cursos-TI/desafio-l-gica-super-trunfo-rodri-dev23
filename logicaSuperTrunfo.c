#include <stdio.h>


int main(){

                 // Novas atualizações para a lógica do super trunfo nivel aventureiro.
      // fazer a comparação de um atributo usando "If e else" ;   
      // modificar o "SuperPoder e fazer a comparação correta usando IF e ELSE"  
      // Exibir a comparação do atributo da carta e informar o vencedor  

   printf("\nDESAFIO LOGICA SUPER TRUNFO");



    char estado [50]; 
    char codigo [40];
    char cidade [30];
    unsigned long int populacao1;
    double area1, pib1;
    int turistico1;
    double dp1, PIBpc1;
    long double superPoder1;
    long double vencedor1 = populacao1 + area1 + pib1 + turistico1;

     
           printf("\nDESAFIO SUPER TRUNFO \n");


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
    int Turistico2;
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

    
///////////////////////////////////////////////////////////////////////////////////


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


    //////////////////////////////////////////////////////////////////////////

    //Comparações

    printf("\nComparações dos atributos das cartas: \n");

       if (populacao1 > Populacao2)
    {
      printf("\nO atributo escolhido para a comparação foi o (a): População \n");
      printf("Resultado: Carta 1 venceu\n");

    }else{
      printf("\nO atributo escolhido para a comparação foi o (a): População: \n");
      printf("Resultado: Carta 2 venceu\n");
    }
       if (area1 > Area2)
       {
        printf("\nO atributo escolhido para a comparação foi o (a): Area: \n");
        printf("Resultado: Carta 1 venceu\n");
       }else{
      printf("\nO atributo escolhido para a comparação foi o (a): Area: \n");
      printf("Resultado: Carta 2 venceu\n");
    }  
       if (pib1 > Pib)
       {
        printf("\nO atributo escolhido para a comparação foi o (a): Pib: \n");
        printf("Resultado: Carta 1 venceu\n");
       }else{
      printf("\nO atributo escolhido para a comparação foi o (a): Pib: \n");
      printf("Resultado: Carta 2 venceu\n");
    }
       if (turistico1 > Turistico2)
       {
        printf("\nO atributo escolhido para a comparação foi o (a): Pontos turisticos: \n");
        printf("Resultado: Carta 1 venceu\n");
      }else{
      printf("\nO atributo escolhido para a comparação foi o (a): Pontos turisticos: \n");
      printf("Resultado: Carta 2 venceu\n");
    }






   return 0;
    

 }