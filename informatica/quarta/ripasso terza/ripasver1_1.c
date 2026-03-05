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
int* inseriscivalori(int *_vet,int _n){

    for (int i = 0; i < _n; i++)
    {
        printf("inserisci degli elementi:");
        scanf("%d", &_vet[i]);
    }
    return _vet;
}
int main(){
    int *prr=creaVett(1) , *prv=creaVett(1) , *profit=creaVett(1);
        prr=inseriscivalori(prr ,1);
        prv=inseriscivalori(prr ,1);
        profit[0]=prv[0]-prr[0];
        if ((prv[0]-prr[0]) >= 0)
            printf("il tuo è di :%d", profit[0]);
        else 
            printf("hai perso %d:", (prv[0]-prr[0]) * (-1));
        free(prr);
        free(prv);
        free(profit);
    
}