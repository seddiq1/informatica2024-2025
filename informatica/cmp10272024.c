/*Dato un numero controllare se è divisibile o meno per 3
 applicando la regola della somma delle cifre che compongono il numero. 
ES:   dato di input: 123 eseguo la somma delle sue cifre -> 1+2+3=6 -> 
 risultato 6 -> ok 6 è multiplo di 3.NNB: qualora il numero fosse a 
più cifre vi fermate alla prima somma delle cifre e poi controllate 
se il risultato è divisibile per 3.*/

#include <stdio.h> 
int main () {
    int q, r, d, m, n1;

    printf("inserisci un numero:");
    scanf("%d", &n1);

        if(0<n1<100000){
            if (0<n1<10)
            q=n1%3;
                else if (q==0)
                    printf("il numero è divisibile a 3");
                else
                    printf("il numero non è divisibile a 3");
                        if (n1>9 && n1<100)
                        {
                            q=n1%10;
                            r=n1/10;
                            d=r%10;
                            m=q+d;
                        
                        }
                        if (m%3==0)
                            printf("il numero è divisibile a 3");
                        else
                            printf("il numero non è divisibile a 3");
                                if (99<n1<1000)
                                {
                                    q=n1%10;
                                    r=n1/10;
                                    d=r%10;
                                    r=n1/100;
                                    r=r%10;
                                    m=q+d+r;
                                }
                                else if (m==0)
                                    printf("il numero è divisibile a 3");
                                else
                                    printf("il numero non è divisibile a 3");
                                        if (999<n1<10000)
                                        {
                                            q=n1%10;
                                            r=n1/10;
                                            d=r%10;
                                            r=n1/100;
                                            r=r%10;
                                            n1=n1/1000;
                                            n1=n1/10;
                                            m=q+d+r+n1;
                                        }
                                        else if (m==0)
                                            printf("il numero è divisibile a 3");
                                        else
                                            printf("il numero non è divisibile a 3");
        }
        else
        {
            printf("fuore l'intervallo:");
        }
        
        
        
        
    
    







}
