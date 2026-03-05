#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int id_univoco = 0;
typedef struct canzone{
    char titolo[20];
    char artista[20];
    int durata;
    int Id;
    struct canzone* next;
}canzone;
typedef struct {
    canzone* head;
    int lug;
}Lista;
Lista* creaLista(){
    Lista *parco_a=(Lista*)malloc(sizeof(Lista));
    parco_a->lug++;
    parco_a->head=NULL;
    return parco_a;
}
void set_auto(canzone* aya){
    printf("inserisci il titolo della canzone: ");
    fgets(aya->titolo,8,stdin);
    printf("inserisci l'artista della canzone: ");
    fgets(aya->artista,20,stdin);
    printf("inserisci la durata della canzone: ");
    scanf("%d", &aya->durata);
    aya->Id=id_univoco++;
    char c;
    while (c = getchar());
}
void inserisci_canzone_lista(Lista *l){
    canzone* nuova=(canzone*)malloc(sizeof(canzone));
    
    if (nuova == NULL)
    {
        printf("ERRORE!!");
        exit(1);
    }
    nuova->next=NULL;
    set_auto(nuova);
    if (l->head == NULL)
    {
        l->head=nuova;
        l->lug++;
    }else
    {
        canzone* temp;
        temp->next=l->head;
        while (temp->next != NULL )
            temp=temp->next;
        temp->next=nuova;
        l->lug++;
    }
}
void stampa_lista(Lista *l){
    canzone* temp=l->head;
    printf("---la lista di canzone---\n");

    while (temp->next != NULL)
    {
        printf("l'ID è %d\v", temp->Id);
        printf("il titolo è %s\n", temp->titolo);
        printf("l'artista è %s\n", temp->artista);
        printf("la durata %d\n", temp->durata);
        temp=temp->next;
    }
}
void stampa_canzone(canzone *c){
    printf("l'ID è %d\v", c->Id);
    printf("il titolo è %s\n", c->titolo);
    printf("l'artista è %s\n", c->artista);
    printf("la durata %d\n", c->durata);
}
void ricerca_canzone_artista(Lista *l, char* artista){
    canzone* temp=l->head;
    while (strcmp(temp->artista , artista) != 0)
        temp=temp->next;
    stampa_canzone(temp);
}
void libera_memoria(Lista* l){
    if (l->lug == 0)
        free(l);
    else{
        canzone* temp=l->head;
        while (temp != NULL){
            canzone *aya=temp;
            temp=temp->next;
            free(aya);
        }
    }
    free(l);
    
}
void inserisci_canzone_playlist(Lista *lista_canzoni, Lista *playlist){
    int id=0 , flag=0;
    printf("inserisci la durata della canzone: ");
    scanf("%d", &id);
    canzone *temp = lista_canzoni->head;
    while (temp->next != lista_canzoni->head){
        if (temp->next->Id == id)
            {
                flag=1;
                break;;
            }
            temp=temp->next;
    }
    if (flag == 1)
    {
    if (playlist->head == playlist->head){
        playlist->head=temp;
        temp->next=playlist;
    }else
    {
    canzone* t=playlist->head;
    while (t->next != playlist->head){
        t=t->next;
        }
        temp->next=playlist->head;
        t->next=temp;
        playlist->lug++;
    }
    }else
        printf("id che hai inserito non c'è");
}
void stampa_playlist(Lista* playlist){
    canzone* temp=playlist->head;
    printf("---la lista di canzone---\n");

    while (temp->next != playlist->head)
    {
        printf("l'ID è %d\v", temp->Id);
        printf("il titolo è %s\n", temp->titolo);
        printf("l'artista è %s\n", temp->artista);
        printf("la durata %d\n", temp->durata);
        temp=temp->next;
    }
}
void cancella_canzone_playlist(Lista *playlist){
    if (playlist->head == NULL)
    {
       printf("la playlist è vouta!!!! ");
       return;
    }
    else{
    int id=0 , flag=0;
    printf("inserisci la durata della canzone: ");
    scanf("%d", &id);
    canzone *temp = playlist->head;
    if (temp->Id == playlist->head->Id)
    {
        while (temp->next != playlist->head)
            temp=temp->next;
        canzone *temp2 = temp->next;
        temp->next=temp->next->next;
        playlist->head=temp->next->next;
        free(temp2);
        playlist->lug--;
    }
    else{
    while (temp->next != playlist->head){
        if (temp->next->Id == id)
            {
                flag=1;
                break;;
            }
            temp=temp->next;
    }
     if (flag == 1)
    {
    canzone *temp2 = temp->next;
    temp->next=temp->next->next;
    free(temp2);
    playlist->lug--;
    }else
        printf("id che hai inserito non c'è");
    }}
}
int main(){
    Lista* Lista;
    canzone* canzone;
    int scelta;
    do {
        printf("1. aggiungi auto: \n 2. stampa auto: \n 3. Esci\n");
        scanf("%d", &scelta);
        getchar();
        switch(scelta){
            case 1:
                inserisciNuovAuto();
                break;
            case 2:
                
                break;
            case 3:
                printf("Uscita dal programma...\n\n");
                break;
            default:
                printf("Scelta non valida...\n");
        }
    }while(scelta != 3);
    
}