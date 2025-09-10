#include <stdio.h>

int main (){
    char estadocarta1[50];
    char codigocarta1[4];
    char nomedacidadecarta1[50];
    int populaçãocarta1;
    float areacarta1;
    float pibcarta1;
    int pontoscarta1;

    char estadocarta2[50];
    char codigocarta2[4];
    char nomedacidadecarta2[50];
    int populaçãocarta2;
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
    scanf("%d", &populaçãocarta1);

    printf("Área:  \n");
    scanf("%i", &areacarta1);

    printf("PIB:  \n");
    scanf("%i", &pibcarta1);

    printf ("Números de pontos turísticos:  \n");
    scanf ("%d", &pontoscarta1);



}


