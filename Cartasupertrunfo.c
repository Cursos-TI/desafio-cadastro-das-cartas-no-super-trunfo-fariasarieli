#include <stdio.h>

int main (){
    char estadocarta1[50];
    char codigocarta1[4];
    char nomedacidadecarta1[50];
    int populacaocarta1;
    float areacarta1;
    float pibcarta1;
    int pontoscarta1;

    char estadocarta2[50];
    char codigocarta2[4];
    char nomedacidadecarta2[50];
    int populacaocarta2;
    float areacarta2;
    float pibcarta2;
    int pontoscarta2;

    printf ("Super Trunfo - Países!\n");
    
    printf("Estado: \n");
    scanf("%s", &estadocarta1);
    
    printf("Codigo da carta:  \n");
    scanf("%s", &codigocarta1);

    printf("Nome da cidade:  \n");
    scanf("%s", &nomedacidadecarta1);

    printf("População:  \n");
    scanf("%d", &populacaocarta1);

    printf("Área:  \n");
    scanf("%i", &areacarta1);

    printf("PIB:  \n");
    scanf("%i", &pibcarta1);

    printf ("Números de pontos turísticos:  \n");
    scanf ("%d", &pontoscarta1);

    printf ("Carta 1:\n");
    printf ("Estado:%s\n", estadocarta1);
    printf ("Codigo:%s\n", codigocarta1);
    printf ("Nome da Cidade:%s\n", nomedacidadecarta1);
    printf ("População:%d\n", populacaocarta1);
    printf ("Área:%i\n", areacarta1);
    printf ("PIB:%i\n", pibcarta1);
    printf ("Números de pontos Turisticos:%d\n", pontoscarta1);

    printf("Estado: \n");
    scanf("%s", &estadocarta2);
    
    printf("Codigo da carta:  \n");
    scanf("%s", &codigocarta2);

    printf("Nome da cidade:  \n");
    scanf("%s", &nomedacidadecarta2);

    printf("População:  \n");
    scanf("%d", &populacaocarta2);

    printf("Área:  \n");
    scanf("%i", &areacarta2);

    printf("PIB:  \n");
    scanf("%i", &pibcarta2);

    printf ("Números de pontos turísticos:  \n");
    scanf ("%d", &pontoscarta2);

    printf ("Carta 2:\n");
    printf ("Estado:%s\n", estadocarta2);
    printf ("Codigo:%s\n", codigocarta2);
    printf ("Nome da Cidade:%s\n", nomedacidadecarta2);
    printf ("População:%d\n", populacaocarta2);
    printf ("Área:%i\n", areacarta2);
    printf ("PIB:%i\n", pibcarta2);
    printf ("Números de pontos Turisticos:%d\n", pontoscarta1);

    return 0;

}


