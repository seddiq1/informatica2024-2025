/*stabilire seun numero è dispari controllando
l'ultima cifra meno significativa*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

    int num , cifra;
    num=0;
    cifra=0;

    printf("inserire un numero:");
    scanf("%d",&num);

    cifra= num%10;
    if(cifra%2==0)    
        printf("il numero %d é pari",num);
    else
        printf("il numero %d é dispari",num);
    




    /* code */
    return 0;
}
