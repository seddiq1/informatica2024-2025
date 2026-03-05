/*creare una squadra contenente le seguenti
informazione: nome, colore, punteggio.
caricato un massimo di 10 squadre stampa quelle 
con punteggio superiore a 100*/
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[20];
    char colore[20];
    int punteggio;
}squadra;
void stampa(squadra *teams , int n){
   for (int i = 0; i < n; i++)
        {
            printf("squadra %d:\n il nome è %s \n il colore è %s \n il punteggio %d \n", i+1 ,teams[i].nome , teams[i].colore, teams[i].punteggio);
        }
}
int main(){
    squadra *teams;
    int n;
    do
    {
       printf("inserisci la quantita della squadre(max 10):\n");
        scanf("%d", &n); 
        getchar();
    } while (n<0 || n>10);
    
    teams=malloc(n*sizeof(squadra));
    for (int i = 0; i < n; i++)
    {
        printf("inserisci il nome della squadra %d:", i+1);
        scanf("%s", teams[i].nome);
        fflush(stdin);
        printf("inserisci il colore della squadra %d:", i+1);
        scanf("%s", teams[i].colore);
        fflush(stdin);
        printf("inserisci il punteggio della squadra %d:", i+1);
        scanf("%d", &(teams[i].punteggio));
        fflush(stdin);//fa clear buffer
    }
    
    stampa(teams , n);
    
    
    
}
