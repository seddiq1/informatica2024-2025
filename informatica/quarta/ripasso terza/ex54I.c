/*CREARE UN ARRAY DINAMICO CHIEDENDO ALL'UTENTE LA SUA DIMENSIONE
IL PROGRAMMA DEVE PREVEDERE LE SEGUENTEI FUNZIONE:
1.CREA L'ARRAY
2.INSERISCI GLI ELEMENTI NELL'ARRAY
3.STAMPA DEI VALORI
4.ESCI
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
int* inseriscivalori(int *_vet, int _n){

    for (int i = 0; i < _n; i++)
    {
        printf("inserisci degli elementi:");
        scanf("%d", &_vet[i]);
    }
    return _vet;
}
void stampaVet(int _vet,int _n){
    printf("elementi del vettorio sono:");
    for (int i = 0; i < _n; i++)
    {
        printf("vet[%d]=%d \n",i+1, _vet+i);
        
    }
}
int main(){
    int *vet=NULL;
    int n;

    do{
        printf("inserisci la quantità degli elementi:");
        scanf("%d", &n);
    }while (n<0);
    
    vet= creaVett(n);
    vet= inseriscivalori(vet, n);
    stampaVet(vet, n);
    free(vet);
}