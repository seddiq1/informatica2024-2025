/*data una data in formato gg mm aaaa
    verificare se la data è accettabile */
    #include <stdio.h>
    
    int main (){

    int giorno=0;
    int mese=0;
    int anno=0;
    int bisestile=0;
    //richiesta degli input
    printf("inserisci il giorno: ");
    scanf("%d", &giorno);
    printf("inserisci il mese: ");
    scanf("%d", &mese);
    printf("inserisci l'anno: ");
    scanf("%d", &anno);

    //controllo dell'anno
    //un anno è bisestile se è multiplo di 4 ma non di 100 oppure multiplo di 400
    if(anno%100==0){
        if(anno%400==0){
            printf("L'anno è bisestile");
            bisestile=1;
        }
    }
    else{
        if(anno%4==0){
            printf("L'anno è bisestile");
            bisestile=1;
        }
    }
    //controllo del mese 
    if(mese>=1 && mese<=12){
        if (mese==0){
            if (mese==2)
                if (giorno>=1 && giorno<=28+bisestile);
                    printf("\nLa data è accettabile");
                }
            else{
                if(mese==11 || mese==4 || mese==6 || mese==9)
                    printf("\nLa data è non accettabile");
            }
        
    }
    else {
        if (giorno>=1 && giorno<=31);
            printf("\nLa data è accettabile");
        }
        else{
            printf("\nLa data è non accettabile");
        }
    }