/*dati due numeri A e B verificare
    se A è il quadrato di B */

#include <stdio.h>
int main(){

float A=0;
float B=0;

float quadrato=0;


printf("inserisci il primo valori : ");
scanf("%f", &A);
printf("inserisci il secondo valori : ");
scanf("%f", &B);

quadrato = B*B;
printf("il doppio è:%f", quadrato);

if (A == quadrato){
    printf("il primo valori %f corrisponde si quadrato del secondo &f", A,B);

}
else{
    printf("il primo valore %f no corrisponde al quadrato del secondo %f", A,B);
}
}