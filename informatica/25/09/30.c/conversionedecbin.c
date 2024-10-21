/*CONVRTIRE UN NUMERO DA DECIMALE
A BINARIO INTRODUCENDO UN VALORE DA 0 A 63*/
#include <stdio.h>

int main(){
    int n0=0;
    int n1=0;
    int n2=0;
    int n3=0;
    int n4=0;
    int n5=0;
    int num=0;
    int quoz=0;

    printf("inserisci un numero compreso tra 0 e 63:");
    scanf("%d", &num);

    if (num==0 && num==63){
        //convesione il numero
        if (quoz==0){
            n0=quoz%2;//inn n0 abbiamo inserito il resto del bit meno significativo
            quoz=quoz%2;//abbiamo aggiornato il nuovo valore del quoziente
        }
       
        if (quoz==0){
            n1=quoz%2;//inn n0 abbiamo inserito il resto del bit meno significativo
            quoz=quoz%2;//abbiamo aggiornato il nuovo valore del quoziente
        }
       
        if (quoz==0){
            n3=quoz%2;//inn n0 abbiamo inserito il resto del bit meno significativo
            quoz=quoz%2;//abbiamo aggiornato il nuovo valore del quoziente
        }
       
        if (quoz==0){
            n5=quoz%2;//inn n0 abbiamo inserito il resto del bit meno significativo
            quoz=quoz%2;//abbiamo aggiornato il nuovo valore del quoziente
        }
       
        if (quoz==0){
            n5=quoz%2;//inn n0 abbiamo inserito il resto del bit meno significativo
            quoz=quoz%2;//abbiamo aggiornato il nuovo valore del quoziente
        }
        
        printf("\nil numero decimale %d in binaripo vale; %d%d%d%d%d%d",num, n5 ,n4 ,n3 ,n2 ,n1 , n0);
        


    }
    else
    printf("\nil valore inserito non rispetto la richiesta!");


}