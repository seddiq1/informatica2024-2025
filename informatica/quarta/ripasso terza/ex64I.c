/*scrivere una programma in c :
    1. allochi dinamecmente un array iniziali di n numeri
    2.inserimento dei valori
    3.stampa array
    4.calcolala somma ndegli elementi multipli di3
    5.creare un nuovo array contenente soloi valore dispari;
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
void stampaVet(int *_vet,int _n){
    printf("elementi del vettorio sono:\n");
    for (int i = 0; i < _n; i++)
        printf("vet[%d]= %d \n",i+1, _vet[i]);
}
int sommaVet(int *_vet , int _n){
    int s=0;
    for (int i = 0; i < _n; i++)
        if(_vet[i]%3==0)
            s+= _vet[i];
    return s;
}
int* creaVettDisp(int *_v , int _n , int *c){
    int *vD=creaVett( _n) ;
    for (int i = 0; i < _n; i++)
        if ( _v[i] %2==1)
            vD[(*c)++]= *(_v+i);
    return (int*)realloc(vD,(*c) * sizeof(int));
}
int main(){
    int *vet=NULL , *vetDisp=NULL , cn=0;
    int n ,somma=0;

    do{
        printf("inserisci la quantità degli elementi:");
        scanf("%d", &n);
    }while (n<0);
    
    vet= creaVett(n);
    vet= inseriscivalori(vet, n);
    stampaVet(vet, n);
    somma=sommaVet(vet, n);
    printf("la somma di multipli di 3 sono : %d\n", somma);
    vetDisp= creaVettDisp(vet , n , &cn);
    printf("il vettore dei numeri dispare è : \n");
    stampaVet(vetDisp, cn);
    free(vet);
    free(vetDisp);
}