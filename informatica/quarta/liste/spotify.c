#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Canzone {
    char titolo[50];
    char artista[50];
    int durata;
    int id;
    struct Canzone* next;
} Canzone;

typedef struct Lista {
    Canzone* testa;
    int lunghezza;
} Lista;

void stampa_canzone(Canzone *c);
void set_canzone(Canzone *c);
Lista* crea_lista();
void stampa_lista(Lista *l);
void inserisci_canzone_lista(Lista *l);
void ricerca_canzone_artista(Lista *l, char* artista);
void libera_memoria(Lista* l);
void inserisci_canzone_playlist(Lista *lista_canzoni, Lista *playlist);
void stampa_playlist(Lista* playlist);
void cancella_canzone_playlist(Lista *playlist);

/* ---- MAIN ---- */

int main() {
    Lista* lista_canzoni = crea_lista();
    Lista* playlist = crea_lista();

    int scelta;
    char artista[50];

    do {
        printf("\n===== SPOTIFY 0.0.0.1 =====\n");
        printf("1. Inserisci nuova canzone nella lista\n");
        printf("2. Stampa lista canzoni\n");
        printf("3. Cerca canzoni per artista\n");
        printf("4. Aggiungi canzone alla playlist\n");
        printf("5. Stampa playlist\n");
        printf("6. Cancella canzone dalla playlist\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        getchar();

        switch (scelta) {
            case 1:
                inserisci_canzone_lista(lista_canzoni);
                break;
            case 2:
                stampa_lista(lista_canzoni);
                break;
            case 3:
                printf("Inserisci artista da cercare: ");
                fgets(artista, 50, stdin);
                ricerca_canzone_artista(lista_canzoni, artista);
                break;
            case 4:
                inserisci_canzone_playlist(lista_canzoni, playlist);
                break;
            case 5:
                stampa_playlist(playlist);
                break;
            case 6:
                cancella_canzone_playlist(playlist);
                break;
            case 0:
                printf("Uscita...\n");
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
        }

    } while (scelta != 0);

    libera_memoria(lista_canzoni);
    libera_memoria(playlist);
    return 0;
}

void stampa_canzone(Canzone *c) {

}
void set_canzone(Canzone *c) {
    // TODO
}

Lista* crea_lista() {
    // TODO
    return NULL; //modificare valore di ritorno
}

void stampa_lista(Lista *l) {
    // TODO
}

void inserisci_canzone_lista(Lista *l) {
    // TODO
}

void ricerca_canzone_artista(Lista *l, char* artista) {
    // TODO
}

void libera_memoria(Lista* l) {
    // TODO
}

void inserisci_canzone_playlist(Lista *lista_canzoni, Lista *playlist) {
    // TODO (inserimento in coda circolare)
}

void stampa_playlist(Lista* playlist) {
    // TODO (attenzione alla lista circolare)
}

void cancella_canzone_playlist(Lista *playlist) {
    // TODO (rimuovere nodo gestendo i casi speciali)
}