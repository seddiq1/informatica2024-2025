//commento su una riga
/* ESERCIZIO
    calcola l'area di un triangolo
    fornito da tastiera
*/
#include <stdio.h>

int main(){
    float base; float altezza; float area;  //dichiarazione
    
    base=0;
    altezza=0;
    area=0,                                 //inizializzazione
    
    printf("inserisci la base");
    scanf("%f" ,&base);
    printf("inserisci altezza");
    scanf("%f" ,&altezza);
    area = base*altezza/2;
    printf("il valore della area vale: %f", area);
    
    
}