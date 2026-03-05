/*esempio di una struttura complessa 
facendo accesso ai campi in modalita variabile 
e in modalita puntatore alla atruttura*/
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[20];
    char cognome[20];
    int eta;
}persona;
int main(){
    persona p1;
    persona *p2;

    //inserisci le informazioni in p1
    printf("inserisci il nome:");
    scanf("%s", p1.nome);
    fflush(stdin);
    printf("inserisci il cognome:");
    scanf("%s", p1.cognome);
    fflush(stdin);
    printf("inserisci l'eta:");
    scanf("%d", &(p1.eta));
    fflush(stdin);//fa clear buffer
    printf("il nome è %s \n il cognome è %s \n l'eta %d",p1.nome , p1.cognome, p1.eta);

    //inserisci le informazioni in p1
    p2=malloc(sizeof(persona));
    printf("inserisci il nome dell'altro:");
    scanf("%s", p2->nome);
    fflush(stdin);
    printf("inserisci il cognome dell'altro:");
    scanf("%s", p2->cognome);
    fflush(stdin);
    printf("inserisci l'eta dell'altro:");
    scanf("%d", &(p2->eta));
    fflush(stdin);//fa clear buffer
    printf("il nome è %s \n il cognome è %s \n l'eta %d",p2->nome , p2->cognome, p2->eta);   
}