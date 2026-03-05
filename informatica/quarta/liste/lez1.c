#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo
{
    int dato;
    struct Nodo* next;
}Nodo;

typedef struct 
{
    Nodo* testa;
    int lunghezza;
}Lista;
Lista* creaLista() {
    Lista* lista = (Lista*)malloc(sizeof(Lista));
    lista->testa = NULL;
    lista->lunghezza = 0;
    return lista;
}
int ricerca(Lista* lista, Nodo valore) {
    Nodo* current = lista->testa;
    int posizione = 0;
    
    while (current != NULL) {
        if (current->dato == valore.dato) {
            return posizione;
        }
        current = current->next;
        posizione++;
    }
    
    return -1;  // Elemento non trovato
}

void inserisciInizio(Lista* lista, int valore) {
    Nodo* nuovoNodo = (Nodo*)malloc(sizeof(Nodo));
    nuovoNodo->dato = valore;
    nuovoNodo->next = lista->testa;
    lista->testa = nuovoNodo;
    lista->lunghezza++;
}

int main(){
    int *vet=NULL;
    int n;

    do{
        printf("inserisci la quantità degli elementi:");
        scanf("%d", &n);
    }while (n<0);
    
    
}