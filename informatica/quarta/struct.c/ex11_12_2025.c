/*REGISTRARE LE INFO DI ALCUNI LIBRI
TITOLI,AUTORE, ANNO PUBLICITA
ARRAY DI LIBRI
CARICARE L'ARRAY 
RIMUOVERE UN LIBRO
CERCARE UN LIBRO IN BASE AL TOTOLO*/

#include <stdio.h>
#include <stdlib.h>
typedef char string;
typedef struct
{
    int anno;
    string autore[30];
    string titolo[30];
}libro;
libro* crea(libro* lib, int* dim){
    (*dim)++;
    lib=(libro*)malloc((*dim)*sizeof(libro));
    if (lib == NULL)
        return NULL;
    return lib;
    
}
void riempi(libro* lib){
    printf("inserisi l'ANNO PUBLICITA del libro");
    scanf("%d", &lib->anno);
    printf("inserisi l'AUTORE del libro");
    fgets(lib->autore,30,stdin);
    printf("inserisi il TITOLI del libro");
    fgets(lib->titolo,30,stdin);
}
void stampa(libro* lib){
    printf("l'ANNO PUBLICITA del libro è: %d \n", lib->anno);
    printf("l'AUTORE del libro è: %d \n",lib->autore);
    printf("il TITOLI del libro è: %d \n",lib->titolo);
}
int cercare(libro* lib , int dim , string* tito){
    if (dim=0)
        return -1;
    else
        for (int i = 0; i < dim; i++)
            if (strcmp(lib[i].titolo,tito))
                return i;
}
int main(){
    libro* libri;
    int scelta=0;
    printf("____MENU____\n");
    printf("1.per creare un libro \n");
    printf("2.per riempire l'informazione del libro\n");
    printf("inserisi l'ANNO PUBLICITA del libro");
    scanf("%d", &scelta);
}