/*scrivi un programma in c che :
1. chiedi all'utente quanti numeri interi vuoli inserisci;
2.alloca diùnamicamente un array di quella dimenzione con malloc;
3.permette all'utente di inserire i numeri;
4. chiede all'utente se vuole aumentare la dimensione dell'array;
    -se si, richiede la nuova dimensione e usa realloc() per ridimensionarlo;
    -permette quindi si inserire i nuovi valori negli spazi aggiunti;
5. Infine, stampa tutti gli elementi dell'array;
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
void sceltaUtente(int *_vet , int _n , int *_dim){
    int scelta=0;
    printf("se vuoi aumentare l'array prima 0 senno un altro numero");
    scanf("%d", &scelta);
        switch (scelta)
        {
        case 0:
            do{
                printf("inserisci la nuova dimensione attento che sara grande dalla vecchia:");
                scanf("%d", _dim);
            }while (*_dim<_n);
            
            _vet=realloc(_vet, *_dim*sizeof(int));
            inseriscivalori(_vet, _n , *_dim);
            break;
        default:
            *_dim=_n;
            break;
        }
}
void ordinarevet(int *_vet , int *_dim){
    int temp=0 , scelta=0;
    printf("se vuoi ordinare l'array in modo crescente prima 0 senno un altro numero per ordinarlo in modo decrescente");
    scanf("%d", &scelta);
        switch (scelta)
        {
        case 0:
            for (int i = 0; i < *_dim; i++)
            {
                for (int j = i+1; j < *_dim; j++)
                {
                    if (_vet[i]>_vet[j])
                    {
                        temp=_vet[i];
                        _vet[i]=_vet[j];
                        _vet[j]=temp;
                    } 
                } 
            }
            break;
        default:
            for (int i = 0; i < *_dim; i++)
            {
                for (int j = i+1; j < *_dim; j++)
                {
                    if (_vet[i]<_vet[j])
                    {
                        temp=_vet[i];
                        _vet[i]=_vet[j];
                        _vet[j]=temp;
                    } 
                } 
            }
            break;
        }
}
void eliminaNum(int *_vet , int *_dim){
    int num=0 , scelta=0 , pos=*_dim+1 , temp=0;
    printf("se vuoi eleminare un numero nel'array prima 0 senno un altro numero");
    scanf("%d", &scelta);
        switch (scelta)
        {
        case 0:
            printf("inserisci il numero che vuoi eleminarlo:");
            scanf("%d", &num);
            for (int i = 0; i < *_dim; i++)
                if (_vet[i]==num)
                    pos=i;
            if (pos!=*_dim+1)
            {
                for (int i = 0; i < *_dim-1; i++)
                {
                temp=_vet[i];
                _vet[i]=_vet[i+1];
                _vet[i+1]=temp;   
                }
                _vet=realloc(_vet, *_dim-1 *sizeof(int));
            }
            else
                printf("il numero che hai inserito non stato trovato nell'array \n");
            
 

            break;
        default:
            break;
        }
}
int main(){
    int *vet=NULL , *vetDisp=NULL , cn=0;
    int n=0 , scelta=2 , dim=0;

    do{
        printf("inserisci la quantità degli elementi:");
        scanf("%d", &n);
    }while (n<0);
    vet= creaVett(n);
    vet= inseriscivalori(vet, 0 , n);
    sceltaUtente(vet , n , &dim);
    ordinarevet(vet , &dim);
    eliminaNum(vet , &dim);
    stampaVet(vet, 0 , dim);  
    free(vet);

}