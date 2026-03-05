
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[20];
    int quantita;
    int codice;
    float prezzo;
}prodotto;
void inserire(prodotto *prodotti , int dim){
    for (int i = 0; i < dim; i++)
    {
        printf("inserisci il nome del prodotto %d \n", i+1);
        scanf("%d", &prodotti[i].nome);
        printf("inserisci il codice del prodotto %d \n", i+1);
        scanf("%d", &prodotti[i].codice);
        printf("inserisci il prezzo del prodotto %d \n", i+1);
        scanf("%f", &prodotti[i].prezzo);
        printf("inserisci la quantita del prodotto %d \n", i+1);
        scanf("%d", &prodotti[i].quantita);
    }
    
}
void stampa(prodotto *prodotti , int dim){
   for (int i = 0; i < dim; i++)
        {
            printf("il prodotto %d:\n il nome è %s \n il codice è %s \n il prezzo %f \n la quantita %d \n", i+1 ,prodotti[i].nome , prodotti[i].codice, prodotti[i].prezzo , prodotti[i].quantita);
        }
}
int cercare(prodotto *prodotti , int dim , int codice){
    for (int i = 0; i < dim; i++)
    {
        if (codice == prodotti[i].codice)
        {
            return i;
        }
    }
    return -1;
}
int valoreTotale(prodotto *prodotti , int dim){
    float valore=0;
    for (int i = 0; i < dim; i++)
    {
        valore+= valore + (prodotti[i].prezzo * prodotti[i].quantita);
    }
    return valore;
}
int main(){
    prodotto *prodotti;
    int n = 0 , scelta = 0;
    printf("inserisci la quantita della squadre:\n");
    scanf("%d", &n); 
        
    
    prodotti=malloc(n*sizeof(n));
    if (prodotti == NULL)
    {
        return 0;
    }
    switch (scelta)
    {
    case 1:
        /* code */
        break;
    
    default:
        break;
    }
    
    
    
    
    
}
