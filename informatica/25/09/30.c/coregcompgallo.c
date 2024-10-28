/*Creare una sorta di menù( vedi esempio) tramite dei printf per la scelta 
dell'operazione da compiere tra due valori generati casualmente( eseguendo 
lì dove c'è bisogno gli opportuni controlli). Comunicare il risultato dell'operazione 
o la scelta dell'utente di non fare niente e uscire dal programma:ES: "Seleziona
 l'operazione da eseguire: 
        0.  TERMINA
        1.  SOMMA
        2.  DIFFERENZA
        3.  MOLTIPLICAZIONE
        4.  DIVISIONE  "*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    float num1, num2;
    int scelta;

    printf(".....scigli dal menu l'operazione da fare......");
    printf("0, termina");
    printf("1, somma") ;
    printf("2, diferenza");
    printf("3, multiplicazione");
    printf("4, divisione");
    
    printf("SCELGI l'operazione da compiere");
    scanf("%d", &scelta);
    srand(time(NULL));
    num1=rand()%50+1;
    num2=rand()%50+1;
    printf("%.2f %.2f",num1 ,num2);
    switch (scelta){
    case 0:
        printf("il problema termina");
        break;
    case 1:
        printf("la somma valè :%.2f", num1+num2);
        break;
    case 2:
        printf("la differenza valè :%.2f", num1-num2);
        break;
    case 3:
        printf("la multiplicazione valè :%.2f", num1*num2);
        break;
    case 4:
        printf("la divisione valè :%.2f", num1/num2);
        break;
   
    default:printf("scelta non valida:");
        break;
    }




    return 0;
}
