//part1
/*Verificare se un numero dato in input
 è divisibile sia per 3 sia per 5
*/

#include <stdio.h>
int main(){
    int A = 0;
    int divisibile = 0;

    printf("inserisci il valore di %d:, A");
    scanf("%d", &A);

    divisibile = A%3;

    if (divisibile==0){
        printf("A%d è divisibile per 3:", A);
    }
    else{
        printf("A%d non è divisibile per 3:", A);
    }
}
