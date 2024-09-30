/* Dati 3 numeri stampare il più piccolo,
 il più grande e la loro media aritmetica.*/

#include <stdio.h>
int main(){
    int A = 0;
    int B = 0;
    int C = 0;
    int medio = 0;

    printf("inserisci il primo valore il piu grande %d :", A);
    scanf("%d", &A);
    printf("inserisci il secondo valore %d :", B);
    scanf("%d", &B);
    printf("inserisci il terzio valore il piu piccolo %d :", C);
    scanf("%d", &C);
    medio = (A+B+C)/3 ;
    printf("il primo valore è il piu grande %d il secondo valore è il piu piccolo%d il medio è %d:", A, C, medio);
}