/*Il programma letti tre numeri, determini se possono essere considerati in progressione aritmetica; 
    una progressione aritmetica è una serie di numeri in cui la differenza
     tra due numeri successivi è costante.
*/
#include <stdio.h>
int main(){

    int num1=0;
    int num2=0;
    int num3=0;
    int cost=0;
    int cost1=0;

    printf("inserisci il primo numero: ");
    scanf("%d", &num1);

    printf("inserisci il secondo numero: ");
    scanf("%d", &num2);

    printf("inserisci il terzo numero: ");
    scanf("%d", &num3);

    cost=num3-num2;
    cost1=num2-num1;

    if(cost==cost1)
        printf("la serie è in progressione aritmetica");
    else
        printf("la serie non è in progressione aritmetica");

}