#include <stdio.h>

int main () {
   

    char inicialEstado = 'A';
    //inicial do estado
    char codigo[10] = "A01";
    char estado[20] = "Alagoas";
    char capital[20] = "maceió";
    unsigned long int populacao = 90;
    float area = 509.33;
    // área em km²

    float PIB = 29.45;
    // PIB em reais

    int pontosTuristicos = 9;



    printf ("Inicial do Estado: %c \n", inicialEstado);
    printf ("Código da cidade: %s \n", codigo);
    printf ("Nome do Estado: %s \n", estado);
    printf ("Capital: %s \n", capital);
    printf ("População: %lu milhões \n", populacao);
    printf ("Área: %.2f km² \n", area);
    printf ("PIB: %.2f milhões \n", PIB);
    printf ("Quantidade Pontos Turísticos: %d \n", pontosTuristicos);

   //calculo populacional e PIB usando divisao
    printf ("Densidade Populacional: %.2f km² \n", populacao / area);
    printf ("PIB per Capita: %.2f reais \n", PIB / populacao);

    printf ("Super Poder: %.2f \n", pontosTuristicos + PIB + populacao + populacao / area + PIB / populacao);


    

    char InicialEstado = 'A';
    //inicial do estado

    char Codigo[10] = "A02";
    char Estado[20] = "Amazônia";
    char Capital[20] = "Manaus";
    unsigned long int Populacao = 25;
    float Area = 11.35;
    // área em km²

    float PiB = 45.33;
    // PIB em reais

    int PontosTuristicos = 11;

    printf ("Inicial do Estado: %c \n", InicialEstado);
    printf ("Código da cidade: %s \n", Codigo);
    printf ("Nome do Estado: %s \n", Estado);
    printf ("Capital: %s \n", Capital);
    printf ("População: %lu milhões \n", Populacao);
    printf ("Área: %.2f km² \n", Area);
    printf ("PIB: %.2f milhões \n", PiB);
    printf ("Quantidade de Pontos Turísticos: %d\n", PontosTuristicos);
   

    printf ("Densidade Populacional: %.2f km² \n", Populacao / Area);
    printf ("PIB per Capita: %.2f reais \n", PiB / Populacao);
  

   printf ("Super Poder: %.2f \n", PontosTuristicos + PiB + Populacao + Populacao / Area + PiB / Populacao);


   printf ("População A > População B: %d Venceu \n", populacao > Populacao);
   printf ("Area A > Area B: %d Venceu \n", area > Area);
   printf ("PIB A > PIB B: %d Venceu \n", PIB > PiB);
   printf ("Pontos Turisticos A > Pontos Turisticos B: %d Venceu \n", pontosTuristicos > PontosTuristicos);
   printf ("Densidade Populacional A > Densidade Populacional B: %d Venceu \n", populacao / area > Populacao / Area);
   printf ("PIB per Capita A > PIB per Capita B: %d Venceu \n", PIB / populacao > PiB / Populacao);
   printf ("Super Poder A > Super Poder B: %d Venceu \n", pontosTuristicos + PIB + populacao + populacao / area + PIB / populacao > PontosTuristicos + PiB + Populacao + Populacao / Area + PiB / Populacao);

 



return 0;

    

}
