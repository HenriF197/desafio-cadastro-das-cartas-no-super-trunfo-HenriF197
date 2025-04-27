#include <stdio.h>

int main () {
   

    char inicialEstado = 'A';
    //inicial do estado
    char codigo[10] = "A01";
    char estado[20] = "Alagoas";
    char capital[20] = "maceió";
    int populacao = 900;
    float area = 509.33;
    // área em km²

    float PIB = 29.45;
    // PIB em reais

    int pontosTuristicos = 9;



    printf ("Inicial do Estado: %c \n", inicialEstado);
    printf ("Código da cidade: %s \n", codigo);
    printf ("Nome do Estado: %s \n", estado);
    printf ("Capital: %s \n", capital);
    printf ("População: %d mil \n", populacao);
    printf ("Área: %.2f km² \n", area);
    printf ("PIB: %.2f milhões \n", PIB);
    printf ("Quantidade Pontos Turísticos: %d \n", pontosTuristicos);

   //calculo populacional e PIB usando divisao
    printf ("Densidade Populacional: %.2f km² \n", populacao / area);
    printf ("PIB per Capita: %.2f reais \n", PIB / populacao);




   


    char InicialEstado = 'A';
    //inicial do estado

    char Codigo[10] = "A02";
    char Estado[20] = "Amazônia";
    char Capital[20] = "Manaus";
    int Populacao = 2.10;
    float Area = 11.35;
    // área em km²

    float PiB = 45.33;
    // PIB em reais

    int PontosTuristicos = 11;

    printf ("Inicial do Estado: %c \n", InicialEstado);
    printf ("Código da cidade: %s \n", Codigo);
    printf ("Nome do Estado: %s \n", Estado);
    printf ("Capital: %s \n", Capital);
    printf ("População: %d milhões \n", Populacao);
    printf ("Área: %.2f km² \n", Area);
    printf ("PIB: %.2f milhões \n", PiB);
    printf ("Quantidade de Pontos Turísticos: %d", PontosTuristicos);
   

    printf ("Densidade Populacional: %.2f km² \n", Populacao / Area);
    printf ("PIB per Capita: %.2f reais \n", PiB / Populacao);
  

    return 0;

    

}
