/* Il programma legge tre numeri e dice se possono essere le lunghezze dei lati di un triangolo
     (perché un triangolo possa essere tale la somma di ogni coppia lati deve essere maggiore dell’altro)
*/
#include <stdio.h>
int main(){

    float lato1=0;
    float lato2=0;
    float lato3=0;
    float som1=0;
    float som2=0;
    float som3=0;
    
    
    printf("inserisci il primo lato: ");
    scanf("%f", &lato1);

    printf("inserisci il secondo lato: ");
    scanf("%f", &lato2);

    printf("inserisci il terzo lato: ");
    scanf("%f", &lato3);

    som1=lato1+lato2;
    som2=lato2+lato3;
    som3=lato1+lato3;

    if(som1>lato3 && som2>lato1 && som3>lato2)
        printf("i lati possono formare un triangolo");
    else
        printf("i lati non possono formare un triangolo");

}