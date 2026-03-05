/* Scrivi un programma in C che gestisca un insieme di numeri interi usano un array dinamico.
Il programma deve permettere, tramite menù:
1. Aggiungere un numero (espandendo l'array con realloc)
2. Visualizzare tutti inumeri
3. Cercare un numero specifico
4. Ordinare i numeri in ordine crescente
5. Eliminare un numero scelto
6. Uscire
*/ 
#include <stdio.h>
#include <stdlib.h>

int* creaVett(int _n){

    int *_vet=(int*)malloc(_n * sizeof(int));
    if (_vet==NULL)
    {
        printf("non c'è abbastanza spazio in memoria");
        return NULL;
    }
    return _vet;
}
int* inseriscivalori(int *_vet, int inizio,int _n){

    for (int i = inizio; i < _n; i++)
    {
        printf("inserisci degli elementi:");
        scanf("%d", &_vet[i]);
    }
    return _vet;
}
void stampaVet(int *_vet, int inizio,int _n){
    printf("elementi del vettorio sono:\n");
    for (int i = inizio; i < _n; i++)
        printf("vet[%d]= %d \n",i+1, _vet[i]);
}
int* aggiungereUnNum(int *_vet ,  int *_dim){
    int *temp=(int*)realloc(_vet, (*_dim+1) *sizeof(int));
    *_dim+=1;
    if (temp==NULL)
    {
        printf("non c'è abbastanza spazio in memoria");
        return NULL;
    }else{
        inseriscivalori(temp, (*_dim-1), *_dim);
        return temp;
    }   
}
void circare(int *_vet , int *_dim){
    int num=0 , trov=(*_dim+5);
    printf("inserisci il numero che vuoi circare:");
    scanf("%d", &num);
    for (int i = 0; i < *_dim; i++){
        if (_vet[i]==num)
            trov=i;
        }
        if (trov != (*_dim+5))
            printf("il numero che hai inserito c'è nella posizione %d:", trov);
        else   
            printf("il numero che hai inserito non c'è nell'array:");
}
void ordinarevet(int *_vet , int *_dim){
    int temp=0 ;
    for (int i = 0; i < *_dim; i++){
        for (int j = i+1; j < *_dim; j++){
            if (_vet[i]>_vet[j]){
                temp=_vet[i];
                _vet[i]=_vet[j];
                _vet[j]=temp;
            } 
        } 
    }
}
void eliminaNum(int *_vet , int *_dim){
    int num=0 , pos=*_dim+1 , temp=0;
    printf("inserisci il numero che vuoi eleminarlo:");
    scanf("%d", &num);
    for (int i = 0; i < *_dim; i++)
        if (_vet[i]==num)
            pos=i;
    if (pos!=(*_dim+1)){
    for (int i = pos; i < *_dim-1; i++){
        temp=_vet[i];
        _vet[i]=_vet[i+1];
        _vet[i+1]=temp;
    }
    _vet=realloc(_vet , (*_dim) *sizeof(int));
    *_dim-=1;
    }
    else
        printf("il numero che hai inserito non stato trovato nell'array \n");
}
int main(){
    int *vet=NULL;
    int  scelta=6 , dim=0;
    do{
        printf("inserisci la quantità degli elementi:");
        scanf("%d", &dim);
    }while (dim<0);
    vet= creaVett(dim);
    vet= inseriscivalori(vet, 0 , dim);
    while (scelta <= 6){
    printf("Menu:\n");
    printf("1.per aggiungere un numero \n");
    printf("2.per visualizare \n ");
    printf("3.per circare un numero \n");
    printf("4.per o0rdinare l'array \n");
    printf("5.per eleminare un numero \n");
    printf("6.per uscire \n");
    scanf("%d", &scelta);
    switch (scelta)
    {
    case 1:
        vet=aggiungereUnNum(vet  , &dim);
        break;
    case 2:
        stampaVet(vet, 0, dim);
        break;
    case 3:
        circare(vet , & dim);
        break;
    case 4:
        ordinarevet(vet , & dim);
        break;
    case 5:
        eliminaNum(vet , & dim);
        break;
    case 6:
        exit(1);
        break;
    default:
        break;
    }  
    }
    free(vet);
}