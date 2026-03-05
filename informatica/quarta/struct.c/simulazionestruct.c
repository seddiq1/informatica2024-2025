/*Registrare le info di alcuni libri con titolo ,
autore, anno e l*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct libro
{
    char titolo[40];
    char autore[40];
    int anno;
    float prezzo;
};
typedef char* stringa;
void compatta(stringa buffer , int lug){
    if (lug>0 && buffer[lug-1] == '\n')
    {
        buffer[lug-1];
        lug--;
    }
    
}
int main(){
    struct libro *libri;
    int n=3;
    //allochiamo i primi 3 elementi
    libri = (struct libro*)malloc(n * sizeof(struct libro));
    if (libri == NULL)
    {
        printf("errore di allocazione");
        return 1;
    }
    
    //inseriamo i dati
    strcpy(libri[0].titolo,"l'amore mio noin muore");
    strcpy(libri[0].autore,"Robert Saviano");
    libri[0].anno = 2025;
    libri[0].prezzo = 19.25;

    strcpy(libri[1].titolo,"MaLEDETTI DI DIO");
    strcpy(libri[1].autore,"sVEN aSSEL");
    libri[1].anno = 1953;
    libri[1].prezzo = 13;

    strcpy(libri[2].titolo,"Il diritto di contare");
    strcpy(libri[2].autore,"Margot lee Shetterly");
    libri[2].anno = 2017;
    libri[2].prezzo = 18.5;
    //visualizza i libri
    for (int i = 0; i < n; i++)
    {
        printf("Libro:%d\n",i+1);
        printf("Titolo:%s\n",libri[i].titolo);
        printf("Autore:%s\n",libri[i].autore);
        printf("Anno:%d\n",libri[i].anno);
        printf("Prezzo:%f\n",libri[i].prezzo);
    }
    n+=1;
    libri=(struct libro*)realloc(libri,n*sizeof(struct libro));
    if (libri == NULL)
    {
        printf("errore di allocazione");
        return 1;
    }
    strcpy(libri[3].titolo,"Orgoglio e pregiudizio");
    strcpy(libri[3].autore,"Jane Austen");
    libri[3].anno = 1813;
    libri[3].prezzo = 9;
    //visualizza i libri
    printf("Lista libro:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Libro:%d\n",i+1);
        printf("Titolo:%s\n",libri[i].titolo);
        printf("Autore:%s\n",libri[i].autore);
        printf("Anno:%d\n",libri[i].anno);
        printf("Prezzo:%f\n",libri[i].prezzo);
    }
    //calcoliamo il libro piu vecchio
    int datato = libri[0].anno;
    int i_datato=0;
    for (int i = 0; i < n; i++)
    {
        if (libri[i].anno < datato)
        {
            datato= libri[i].anno;
            i_datato = i;
        } 
    }
    printf("Il libro piu vecchio è %s\n", libri[i_datato].titolo);
    //calcoliamo il libro piu costoso
    int costoso = libri[0].anno;
    int i_costoso=0;
    for (int i = 0; i < n; i++)
    {
        if (libri[i].prezzo > costoso)
        {
            costoso= libri[i].anno;
            i_costoso = i;
        } 
    }
    printf("Il libro piu costoso è %s\n", libri[i_datato].titolo);
    //elimina libro 
    char ti[40];
    printf("inserisci il titolo del libro da eliminare");
    fgets(ti,40,stdin);

    for (int i = 0; i < n; i++)
    {
        if (!strcmp(ti , libri[i].titolo))
        {
            for (int j = 0; j < n-1; i++)
            {
                strcmp(libri[j].titolo , libri[j+1].titolo);
                strcmp(libri[j].autore , libri[j+1].autore);
                libri[j].anno=libri[j+1].anno;
                libri[j].prezzo=libri[j+1].prezzo;
            }
            n-=1;
        } 
    }
    //reallocchiamo il nuovo array
    libri = realloc(libri , n*sizeof(struct libro));
    printf("il nuovo array.\n");
    for (int i = 0; i < n; i++)
    {
        printf("Libro:%d\n",i+1);
        printf("Titolo:%s\n",libri[i].titolo);
        printf("Autore:%s\n",libri[i].autore);
        printf("Anno:%d\n",libri[i].anno);
        printf("Prezzo:%f\n",libri[i].prezzo);
    }
}
