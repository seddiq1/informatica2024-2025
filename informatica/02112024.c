/*Supponete
che la parità di scambio tra Euro e Dollaro sia la seguente: 1 € =
1,23 $. Il programma deve chiedere all'utente se intende cambiare:     
- Dollari in Euro;
- Euro in Dollari.
Data
una somma di denaro calcolare il controvalore.*/

#include <stdio.h>
int main (){
    int scelta=0; 
    float sommadinaro=0,sommaconvertire=0; 
    const float tasso=1.23;
    printf("scegli l'operazione che vuoi fare: 1 per combio dollaro/euro ; 2 perf cambio euro/dollaro:");
    scanf("%d", &scelta);
    printf("inserisci il mvalore che vuoi convertire");
    scanf("%f", &sommadinaro);

    switch (scelta)
    {
    case 1:
        sommaconvertire=sommadinaro/tasso;
        printf("%f $ = %f € ", sommadinaro ,sommaconvertire);
        break;
     case 2:
        sommaconvertire=sommadinaro*tasso;
        printf("%f € = %f $ ", sommadinaro ,sommaconvertire);
        break;
    default:
    printf("hai scelto un'operazione non valida!");
        break;
    }
   
    




    return 0;
}