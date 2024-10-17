/*Scrivere un programma che letto due orari in ore,
 minuti e secondi restituisce quale orario viene prima.*/

#include <stdio.h>

    int main (){

    int ore1, ore2, min1, min2, sec1, sec2;

    printf("inserisci il primo orario: ore, minuti , secondi:");
    scanf("%d", &ore1);
    scanf("%d", &min1);
    scanf("%d", &sec1);
    printf("inserisci il secondo orario: ore, minuti , secondi:");
    scanf("%d", &ore2);
    scanf("%d", &min2);
    scanf("%d", &sec2);
    if (ore1>=00 && ore1<=23 && min1>=00 &&min1<60 && sec1>=00 && sec1<60){
        printf("l'orario è accettabile :");
    }
    else
    {
        printf("l'orario non è accettabile :");
    }
    if (ore2>=00 && ore2<=23 && min2>=00 &&min2<60 && sec2>=00 && sec2<60){
        printf("l'orario è accettabile :");
    }
    else
    {
        printf("l'orario non è accettabile :");
    }
    if (ore1>ore2 ){
        printf("%d,%d,%d sono maggiore a %d,%d,%d:",ore1 ,min1, sec1, ore2, min1, sec2);
    }
    else if (ore1<ore2 ){
        printf("%d,%d,%d sono maggiore a %d,%d,%d:", ore2, min1, sec2, ore1 ,min1, sec1);
    }
    else//le ore sono uguali
    {
         if (min1>min2 ){
            printf("%d,%d,%d sono maggiore a %d,%d,%d:",ore1 ,min1, sec1, ore2, min1, sec2);
    }
        else if (min1<min2 ){
            printf("%d,%d,%d sono maggiore a %d,%d,%d:", ore2, min1, sec2, ore1 ,min1, sec1);
    }
    }    
        //le min sono uguali
         if (sec1>sec2 ){
            printf("%d,%d,%d sono maggiore a %d,%d,%d:",ore1 ,min1, sec1, ore2, min1, sec2);
    }
        else if (sec1<sec2 ){
            printf("%d,%d,%d sono maggiore a %d,%d,%d:", ore2, min1, sec2, ore1 ,min1, sec1);
    }
    
        else{
                printf("%d,%d,%d sono uguali a %d,%d,%d:", ore2, min1, sec2, ore1 ,min1, sec1);
    }
}